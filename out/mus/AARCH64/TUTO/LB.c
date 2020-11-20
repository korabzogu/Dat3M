#include <pthread.h>
#include <stdio.h>
#include <stdatomic.h>

atomic_int X0_0;
atomic_int X1_0;
atomic_int X2_0;
atomic_int X3_0;
atomic_int X0_1;
atomic_int X1_1;
atomic_int X2_1;
atomic_int X3_1;
atomic_int mem0;
atomic_int mem1;
void *thread_0() {
//event.Skip

atomic_store(&X1_0,&mem0);//event.Local

atomic_store(&X3_0,&mem1);//event.Local

atomic_store(&X0_0, atomic_load(&X1_0));//event.Load

atomic_store(&X2_0,1);//event.Local

atomic_store_explicit(&X3_0, &X2_0, memory_order_relaxed );//event.Store

}

void *thread_1() {
//event.Skip

atomic_store(&X1_1,&mem1);//event.Local

atomic_store(&X3_1,&mem0);//event.Local

atomic_store(&X0_1, atomic_load(&X1_1));//event.Load

atomic_store(&X2_1,1);//event.Local

atomic_store_explicit(&X3_1, &X2_1, memory_order_relaxed );//event.Store

}

int main() {
atomic_init(&mem0, 0); //event.Init
atomic_init(&mem1, 0); //event.Init
pthread_t m_thread_0;
pthread_create(&m_thread_0, NULL, &thread_0, NULL);
pthread_t m_thread_1;
pthread_create(&m_thread_1, NULL, &thread_1, NULL);
pthread_join(m_thread_0, NULL);
pthread_join(m_thread_1, NULL);
printf("%d %d\n", mem0, mem1);
}


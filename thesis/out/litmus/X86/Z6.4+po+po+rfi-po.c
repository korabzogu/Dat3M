#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int EAX_1;
int EBX_2;
int EAX_2;
atomic_int em0;
atomic_int em1;
atomic_int em2;
void *func_0() {
//event.Skip

atomic_store_explicit(&mem0, 1, memory_order_relaxed );//event.Store

atomic_store_explicit(&mem1, 1, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
}

void *func_1() {
int EAX;
//event.Skip

atomic_store_explicit(&mem1, 2, memory_order_relaxed );//event.Store

EAX = atomic_load_explicit(&mem2, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
EAX_1 = EAX;
}

void *func_2() {
int EBX;
int EAX;
//event.Skip

atomic_store_explicit(&mem2, 1, memory_order_relaxed );//event.Store

EAX = atomic_load_explicit(&mem2, memory_order_relaxed);//event.Load

EBX = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
EBX_2 = EBX;
EAX_2 = EAX;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_t thread_2;
pthread_create(&thread_2, NULL, &func_2, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
int z = atomic_load_explicit(&mem2, memory_order_relaxed);
assert(!(((EAX_2 == 1) && (((EAX_1 == 0) && (((EBX_2 == 0) && ((y == 2) || (y == 1))) || ((EBX_2 == 1) && ((y == 1) || (y == 2))))) || ((EAX_1 == 1) && (((EBX_2 == 0) && ((y == 1) || (y == 2))) || ((EBX_2 == 1) && ((y == 2) || (y == 1)))))))));
return 0;
}

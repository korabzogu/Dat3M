#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

void reach_error() {
assert(0);
}
void __VERIFIER_assert(int cond) {
if(!cond) {
reach_error();
}
}

extern void __VERIFIER_HARDWARE(char * str);
int EAX_1;
int EAX_3;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
atomic_int mem3;
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
//event.Skip

atomic_store_explicit(&mem2, 1, memory_order_relaxed );//event.Store

atomic_store_explicit(&mem3, 1, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
}

void *func_3() {
int EAX;
//event.Skip

atomic_store_explicit(&mem3, 2, memory_order_relaxed );//event.Store

EAX = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
EAX_3 = EAX;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
atomic_init(&mem3, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_t thread_2;
pthread_create(&thread_2, NULL, &func_2, NULL);
pthread_t thread_3;
pthread_create(&thread_3, NULL, &func_3, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
pthread_join(thread_3, NULL);
int a = atomic_load_explicit(&mem3, memory_order_relaxed);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
int z = atomic_load_explicit(&mem2, memory_order_relaxed);
assert(!((((EAX_1 == 0) && (((EAX_3 == 0) && (((a == 1) && ((y == 2) || (y == 1))) || ((a == 2) && ((y == 1) || (y == 2))))) || ((EAX_3 == 1) && (((a == 1) && ((y == 1) || (y == 2))) || ((a == 2) && ((y == 2) || (y == 1))))))) || ((EAX_1 == 1) && (((EAX_3 == 0) && (((a == 1) && ((y == 1) || (y == 2))) || ((a == 2) && ((y == 2) || (y == 1))))) || ((EAX_3 == 1) && (((a == 1) && ((y == 2) || (y == 1))) || ((a == 2) && ((y == 1) || (y == 2))))))))));
return 0;
}


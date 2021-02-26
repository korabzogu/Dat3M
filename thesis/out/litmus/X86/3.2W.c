#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
void *func_0() {
//event.Skip

atomic_store_explicit(&mem0, 2, memory_order_relaxed );//event.Store

atomic_store_explicit(&mem1, 1, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
}

void *func_1() {
//event.Skip

atomic_store_explicit(&mem1, 2, memory_order_relaxed );//event.Store

atomic_store_explicit(&mem2, 1, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
}

void *func_2() {
//event.Skip

atomic_store_explicit(&mem2, 2, memory_order_relaxed );//event.Store

atomic_store_explicit(&mem0, 1, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
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
assert(!((((x == 1) && (((y == 1) && ((z == 1) || (z == 2))) || ((y == 2) && ((z == 2) || (z == 1))))) || ((x == 2) && (((y == 1) && ((z == 2) || (z == 1))) || ((y == 2) && (z == 1)))))));
return 0;
}


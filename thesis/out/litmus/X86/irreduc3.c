#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int EBX_0;
int EAX_0;
int EAX_1;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
atomic_int mem3;
void *func_0() {
int EBX;
int EAX;
//event.Skip

atomic_store_explicit(&mem0, 2, memory_order_relaxed );//event.Store

atomic_store_explicit(&mem1, 1, memory_order_relaxed );//event.Store

EAX = atomic_load_explicit(&mem3, memory_order_relaxed);//event.Load

EBX = atomic_load_explicit(&mem2, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
EBX_0 = EBX;
EAX_0 = EAX;
}

void *func_1() {
int EAX;
//event.Skip

EAX = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

atomic_store_explicit(&mem3, 1, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
EAX_1 = EAX;
}

void *func_2() {
//event.Skip

atomic_store_explicit(&mem2, 1, memory_order_relaxed );//event.Store

atomic_store_explicit(&mem0, 1, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
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
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
int a = atomic_load_explicit(&mem0, memory_order_relaxed);
int b = atomic_load_explicit(&mem1, memory_order_relaxed);
int c = atomic_load_explicit(&mem3, memory_order_relaxed);
int d = atomic_load_explicit(&mem2, memory_order_relaxed);
assert(((((EAX_0 == 1) && (EBX_0 == 0)) && (EAX_1 == 1)) && (a == 2)));
return 0;
}


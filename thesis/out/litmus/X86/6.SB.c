#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int EAX_0;
int EAX_1;
int EAX_2;
int EAX_3;
int EAX_4;
int EAX_5;
atomic_int em0;
atomic_int em1;
atomic_int em2;
atomic_int em3;
atomic_int em4;
atomic_int em5;
void *func_0() {
int EAX;
//event.Skip

atomic_store_explicit(&mem0, 1, memory_order_relaxed );//event.Store

EAX = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
EAX_0 = EAX;
}

void *func_1() {
int EAX;
//event.Skip

atomic_store_explicit(&mem1, 1, memory_order_relaxed );//event.Store

EAX = atomic_load_explicit(&mem2, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
EAX_1 = EAX;
}

void *func_2() {
int EAX;
//event.Skip

atomic_store_explicit(&mem2, 1, memory_order_relaxed );//event.Store

EAX = atomic_load_explicit(&mem3, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
EAX_2 = EAX;
}

void *func_3() {
int EAX;
//event.Skip

atomic_store_explicit(&mem3, 1, memory_order_relaxed );//event.Store

EAX = atomic_load_explicit(&mem4, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
EAX_3 = EAX;
}

void *func_4() {
int EAX;
//event.Skip

atomic_store_explicit(&mem4, 1, memory_order_relaxed );//event.Store

EAX = atomic_load_explicit(&mem5, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
EAX_4 = EAX;
}

void *func_5() {
int EAX;
//event.Skip

atomic_store_explicit(&mem5, 1, memory_order_relaxed );//event.Store

EAX = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
EAX_5 = EAX;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
atomic_init(&mem3, 0); //event.Init, 0);
atomic_init(&mem4, 0); //event.Init, 0);
atomic_init(&mem5, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_t thread_2;
pthread_create(&thread_2, NULL, &func_2, NULL);
pthread_t thread_3;
pthread_create(&thread_3, NULL, &func_3, NULL);
pthread_t thread_4;
pthread_create(&thread_4, NULL, &func_4, NULL);
pthread_t thread_5;
pthread_create(&thread_5, NULL, &func_5, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
pthread_join(thread_3, NULL);
pthread_join(thread_4, NULL);
pthread_join(thread_5, NULL);
int a = atomic_load_explicit(&mem3, memory_order_relaxed);
int b = atomic_load_explicit(&mem4, memory_order_relaxed);
int c = atomic_load_explicit(&mem5, memory_order_relaxed);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
int z = atomic_load_explicit(&mem2, memory_order_relaxed);
assert(((((((EAX_0 == 0) && (EAX_1 == 0)) && (EAX_2 == 0)) && (EAX_3 == 0)) && (EAX_4 == 0)) && (EAX_5 == 0)));
return 0;
}

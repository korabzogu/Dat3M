#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int EBX_0;
int EAX_0;
int EDX_1;
int ECX_1;
atomic_int mem0;
void *func_0() {
int EBX;
int EAX;
//event.Skip

EAX = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

atomic_store_explicit(&mem0, 1, memory_order_relaxed );//event.Store

EBX = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
EBX_0 = EBX;
EAX_0 = EAX;
}

void *func_1() {
int EDX;
int ECX;
//event.Skip

ECX = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

atomic_store_explicit(&mem0, 2, memory_order_relaxed );//event.Store

EDX = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
EDX_1 = EDX;
ECX_1 = ECX;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
assert(((((EAX_0 == 2) && (EBX_0 == 1)) && (ECX_1 == 1)) && (EDX_1 == 2)));
return 0;
}


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
enum fence{After_atomic,Before_atomic,Isync,Lwsync,Mb,Mfence,Rcu_lock,Rcu_unlock,Rmb,Sync,Sync_rcu,Wmb,Ish };
int EDX_4;
int EBX_4;
int ECX_4;
int EAX_4;
int EDX_5;
int EBX_5;
int ECX_5;
int EAX_5;
atomic_int mem0;
atomic_int mem1;
void *func_0() {
//event.Skip

atomic_store_explicit(&mem0, 1, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
}

void *func_1() {
//event.Skip

atomic_store_explicit(&mem0, 2, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
}

void *func_2() {
//event.Skip

atomic_store_explicit(&mem1, 1, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
}

void *func_3() {
//event.Skip

atomic_store_explicit(&mem1, 2, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
}

void *func_4() {
int EDX;
int EBX;
int ECX;
int EAX;
//event.Skip

EAX = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

EBX = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

ECX = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

EDX = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
EDX_4 = EDX;
EBX_4 = EBX;
ECX_4 = ECX;
EAX_4 = EAX;
}

void *func_5() {
int EDX;
int EBX;
int ECX;
int EAX;
//event.Skip

EAX = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

EBX = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

ECX = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

EDX = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
EDX_5 = EDX;
EBX_5 = EBX;
ECX_5 = ECX;
EAX_5 = EAX;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
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
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
assert(((((((((EAX_4 == 1) && (EBX_4 == 2)) && (ECX_4 == 0)) && (EDX_4 == 1)) && (EAX_5 == 1)) && (EBX_5 == 2)) && (ECX_5 == 0)) && (EDX_5 == 1)));
return 0;
}


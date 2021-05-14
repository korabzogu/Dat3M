/* File converted to C from litmus */
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

extern void __VERIFIER_fence(char * str);
enum fence{After_atomic,Before_atomic,Isync,Lwsync,Mb,Mfence,Rcu_lock,Rcu_unlock,Rmb,Sync,Sync_rcu,Wmb,Ish };
int EBX_0;
int ECX_0;
int EAX_0;
atomic_int mem0;
void *func_0() {
int EBX;
int ECX;
int EAX;
//event.Skip

EAX = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

atomic_store_explicit(&mem0, 1, memory_order_relaxed );//event.Store

EBX = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

ECX = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
EBX_0 = EBX;
ECX_0 = ECX;
EAX_0 = EAX;
}

void *func_1() {
//event.Skip

atomic_store_explicit(&mem0, 2, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
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
assert(!((((((((((((((EAX_0 == 0) && (EBX_0 == 0)) && (ECX_0 == 0)) && (x == 1)) || ((((EAX_0 == 0) && (EBX_0 == 0)) && (ECX_0 == 0)) && (x == 2))) || ((((EAX_0 == 0) && (EBX_0 == 1)) && (ECX_0 == 0)) && (x == 1))) || ((((EAX_0 == 0) && (EBX_0 == 1)) && (ECX_0 == 0)) && (x == 2))) || ((((EAX_0 == 0) && (EBX_0 == 2)) && (ECX_0 == 0)) && (x == 1))) || ((((EAX_0 == 0) && (EBX_0 == 2)) && (ECX_0 == 0)) && (x == 2))) || ((((EAX_0 == 1) && (EBX_0 == 0)) && (ECX_0 == 0)) && (x == 1))) || ((((EAX_0 == 1) && (EBX_0 == 0)) && (ECX_0 == 0)) && (x == 2))) || ((((EAX_0 == 1) && (EBX_0 == 2)) && (ECX_0 == 0)) && (x == 1))) || ((((EAX_0 == 2) && (EBX_0 == 1)) && (ECX_0 == 0)) && (x == 1))) || ((((EAX_0 == 2) && (EBX_0 == 2)) && (ECX_0 == 0)) && (x == 1))));
return 0;
}


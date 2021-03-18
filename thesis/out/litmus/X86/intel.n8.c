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
int EAX_0;
int EDX_1;
atomic_int mem0;
atomic_int mem1;
void *func_0() {
int EBX;
int EAX;
//event.Skip

EAX = 1;//event.Local

__VERIFIER_TSO_XCHG(&mem0,EAX);
EBX = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
EBX_0 = EBX;
EAX_0 = EAX;
}

void *func_1() {
int EDX;
//event.Skip

atomic_store_explicit(&mem1, 1, memory_order_relaxed );//event.Store

EDX = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
EDX_1 = EDX;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 1); //event.Init, 1);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int b = atomic_load_explicit(&mem1, memory_order_relaxed);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
assert(!((EAX_0 == 0) && (EDX_1 == 0)));
return 0;
}


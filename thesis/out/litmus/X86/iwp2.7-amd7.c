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
int EAX_0;
int EBX_1;
int EDX_2;
int ECX_2;
int ESI_3;
int EDI_3;
atomic_int mem0;
atomic_int mem1;
void *func_0() {
int EAX;
//event.Skip

EAX = 1;//event.Local

__VERIFIER_TSO_XCHG(&mem0,EAX);
atomic_thread_fence(memory_order_seq_cst);
EAX_0 = EAX;
}

void *func_1() {
int EBX;
//event.Skip

EBX = 1;//event.Local

__VERIFIER_TSO_XCHG(&mem1,EBX);
atomic_thread_fence(memory_order_seq_cst);
EBX_1 = EBX;
}

void *func_2() {
int EDX;
int ECX;
//event.Skip

ECX = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

EDX = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
EDX_2 = EDX;
ECX_2 = ECX;
}

void *func_3() {
int ESI;
int EDI;
//event.Skip

ESI = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

EDI = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
ESI_3 = ESI;
EDI_3 = EDI;
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
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
pthread_join(thread_3, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
assert(!((((ECX_2 == 1) && (EDX_2 == 0)) && (ESI_3 == 1)) && (EDI_3 == 0)));
return 0;
}


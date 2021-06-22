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
int x_0;
int r0_0;
int x_1;
int r0_1;
atomic_int mem0;
void *func_0() {
int x;
int r0;
//event.Skip

/*§Skip§*/
 atomic_store(r0, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ x,0,1));

atomic_thread_fence(memory_order_seq_cst);
x_0 = x;
r0_0 = r0;
}

void *func_1() {
int x;
int r0;
//event.Skip

/*§Skip§*/
 atomic_store(r0, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ x,0,2));

atomic_thread_fence(memory_order_seq_cst);
x_1 = x;
r0_1 = r0;
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
assert(!!(((((r0_0 == 0) && (r0_1 == 1)) && (x == 1)) || (((r0_0 == 2) && (r0_1 == 0)) && (x == 2)))));
return 0;
}

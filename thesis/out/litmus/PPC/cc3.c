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
int r2_0;
int r4_0;
int r2_1;
int r5_1;
int r2_2;
int r4_2;
int r5_2;
int r1_2;
int r2_3;
int r4_3;
int r5_3;
int r1_3;
atomic_int mem0;
atomic_int mem1;
void *func_0() {
int r2;
//event.Skip

r2 = 2;//event.Local

/*§Skip§*/
atomic_store_explicit(&mem0, r2, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
r2_0 = r2;
}

void *func_1() {
int r2;
//event.Skip

r2 = 2;//event.Local

/*§Skip§*/
atomic_store_explicit(&mem1, r2, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
r2_1 = r2;
}

void *func_2() {
int r2;
int r1;
//event.Skip

r1 = 1;//event.Local

/*§Skip§*/
/*§Skip§*/
atomic_store_explicit(&mem0, r1, memory_order_relaxed );//event.Store

__VERIFIER_fence(Sync);
r2 = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
r2_2 = r2;
r1_2 = r1;
}

void *func_3() {
int r2;
int r1;
//event.Skip

r1 = 1;//event.Local

/*§Skip§*/
/*§Skip§*/
atomic_store_explicit(&mem1, r1, memory_order_relaxed );//event.Store

__VERIFIER_fence(Lwsync);
r2 = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
r2_3 = r2;
r1_3 = r1;
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
assert(((r2_2 == 0) && (r2_3 == 0)));
return 0;
}


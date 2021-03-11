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
int r5_0;
int r1_0;
int r2_1;
int r4_1;
int r5_1;
int r1_1;
atomic_int mem0;
atomic_int mem1;
void *func_0() {
int r2;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
r1 = 1;//event.Local

r2 = 2;//event.Local

atomic_store_explicit(&mem0, r2, memory_order_relaxed );//event.Store

atomic_store_explicit(&mem1, r1, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
r2_0 = r2;
r1_0 = r1;
}

void *func_1() {
int r2;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
r1 = 1;//event.Local

r2 = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

atomic_store_explicit(&mem0, r1, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
r2_1 = r2;
r1_1 = r1;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
assert(((r2_1 == 1) && (x == 2)));
return 0;
}


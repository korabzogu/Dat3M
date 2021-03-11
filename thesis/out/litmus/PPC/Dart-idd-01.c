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
int r3_0;
int r4_0;
int r5_0;
int r6_0;
int r0_0;
int r1_0;
int r0_1;
int r1_1;
int r2_2;
int r3_2;
int r0_2;
int r1_2;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
void *func_0() {
int r2;
int r3;
int r0;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
r1 = 0;//event.Local

r0 = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

r1 = (r1 ^ r0) /* IEXPRBIN */;//event.Local

r0 = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

r2 = 2;//event.Local

//event.Skip

if((r0)!=(r2)){
goto LC00;//event.CondJump
}

r3 = 1;//event.Local

atomic_store_explicit(&mem2, r3, memory_order_relaxed );//event.Store

LC00://event.Label

atomic_thread_fence(memory_order_seq_cst);
r2_0 = r2;
r3_0 = r3;
r0_0 = r0;
r1_0 = r1;
}

void *func_1() {
int r0;
//event.Skip

/*§Skip§*/
r0 = 2;//event.Local

atomic_store_explicit(&mem1, r0, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
r0_1 = r0;
}

void *func_2() {
int r0;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
r0 = atomic_load_explicit(&mem2, memory_order_relaxed);//event.Load

__VERIFIER_fence(Sync);
r1 = 2;//event.Local

atomic_store_explicit(&mem2, r1, memory_order_relaxed );//event.Store

__VERIFIER_fence(Sync);
r1 = 1;//event.Local

atomic_store_explicit(&mem0, r1, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
r0_2 = r0;
r1_2 = r1;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_t thread_2;
pthread_create(&thread_2, NULL, &func_2, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
int z = atomic_load_explicit(&mem2, memory_order_relaxed);
assert((((r1_0 == 1) && (r0_0 == 2)) && (r0_2 == 1)));
return 0;
}


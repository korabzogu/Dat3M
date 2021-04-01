/*<customTag0> File converted to C from litmus </customTag>*/
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
int y_0;
int z_0;
int x_1;
int y_1;
int z_1;
int r0_1;
int r1_1;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
void *func_0() {
int x;
int y;
int z;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
atomic_store_explicit(&<customTag0>x</customTag>, 1, memory_order_relaxed );//event.Store

atomic_store_explicit(&<customTag0>y</customTag>, 1, memory_order_relaxed );//event.Store

__VERIFIER_fence(Mb);
atomic_store_explicit(&<customTag0>z</customTag>, 1, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
x_0 = x;
y_0 = y;
z_0 = z;
}

void *func_1() {
int x;
int y;
int z;
int r0;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag1>r0</customTag> = atomic_load_explicit(&<customTag1>y</customTag>, memory_order_relaxed);//event.Load

__VERIFIER_fence(Mb);
<customTag1>r1</customTag> = atomic_load_explicit(&<customTag1>x</customTag>, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
x_1 = x;
y_1 = y;
z_1 = z;
r0_1 = r0;
r1_1 = r1;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
int z = atomic_load_explicit(&mem2, memory_order_relaxed);
assert(!((<customAssertionTag1>r0</customAssertionTag> == 1) && (<customAssertionTag1>r1</customAssertionTag> == 0)));
return 0;
}


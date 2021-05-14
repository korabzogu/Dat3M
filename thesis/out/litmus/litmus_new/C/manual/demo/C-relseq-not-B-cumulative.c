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
int y_1;
int r1_1;
int r2_2;
int y_2;
int z_2;
int r3_3;
int r4_3;
int x_3;
int z_3;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
void *func_0() {
int x;
int y;
//event.Skip

/*§Skip§*/
/*§Skip§*/
WRITE_ONCE(&<customTag0>x</customTag>, 1);
atomic_store_explicit(&<customTag0>y</customTag>, 1, memory_order_release );//event.Store

WRITE_ONCE(&<customTag0>y</customTag>, 2);
atomic_thread_fence(memory_order_seq_cst);
x_0 = x;
y_0 = y;
}


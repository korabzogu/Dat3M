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
int my_lock_0;
int x_0;
int y_0;
int r0_0;
int r1_0;
int my_lock_1;
int x_1;
int y_1;
int r0_1;
int r1_1;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
void *func_0() {
int my_lock;
int x;
int y;
int r0;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag0>r0</customTag> = READ_ONCE(<customTag0>x</customTag>);

WRITE_ONCE(&<customTag0>y</customTag>, 1);
__VERIFIER_fence(Mb);
<customTag0>r1</customTag> = READ_ONCE(<customTag0>my_lock</customTag>);

atomic_thread_fence(memory_order_seq_cst);
my_lock_0 = my_lock;
x_0 = x;
y_0 = y;
r0_0 = r0;
r1_0 = r1;
}


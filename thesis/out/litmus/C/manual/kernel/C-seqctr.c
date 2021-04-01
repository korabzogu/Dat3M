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
int ctr_0;
int r2_0;
int r3_0;
int r4_0;
int x_0;
int y_0;
int r1_0;
int ctr_1;
int x_1;
int y_1;
int r1_1;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
void *func_0() {
int ctr;
int r2;
int r3;
int r4;
int x;
int y;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag0>r1</customTag> = READ_ONCE(<customTag0>ctr</customTag>);

__VERIFIER_fence(Mb);
<customTag0>r2</customTag> = READ_ONCE(<customTag0>x</customTag>);

<customTag0>r3</customTag> = READ_ONCE(<customTag0>y</customTag>);

__VERIFIER_fence(Mb);
<customTag0>r4</customTag> = READ_ONCE(<customTag0>ctr</customTag>);

atomic_thread_fence(memory_order_seq_cst);
ctr_0 = ctr;
r2_0 = r2;
r3_0 = r3;
r4_0 = r4;
x_0 = x;
y_0 = y;
r1_0 = r1;
}

void *func_1() {
int ctr;
int x;
int y;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag1>r1</customTag> = READ_ONCE(<customTag1>ctr</customTag>);

WRITE_ONCE(&<customTag1>ctr</customTag>, (<customTag1>r1</customTag> + 1) /* IEXPRBIN */);
__VERIFIER_fence(Mb);
WRITE_ONCE(&<customTag1>x</customTag>, 1);
WRITE_ONCE(&<customTag1>y</customTag>, 1);
__VERIFIER_fence(Mb);
<customTag1>r1</customTag> = READ_ONCE(<customTag1>ctr</customTag>);

WRITE_ONCE(&<customTag1>ctr</customTag>, (<customTag1>r1</customTag> + 1) /* IEXPRBIN */);
atomic_thread_fence(memory_order_seq_cst);
ctr_1 = ctr;
x_1 = x;
y_1 = y;
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
int ctr = atomic_load_explicit(&mem0, memory_order_relaxed);
int x = atomic_load_explicit(&mem1, memory_order_relaxed);
int y = atomic_load_explicit(&mem2, memory_order_relaxed);
assert(!!((<customAssertionTag0>r2</customAssertionTag> == <customAssertionTag0>r3</customAssertionTag>)));
return 0;
}


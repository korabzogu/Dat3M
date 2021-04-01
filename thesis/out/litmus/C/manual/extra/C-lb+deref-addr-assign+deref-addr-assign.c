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
int r2_0;
int r9_0;
int x_0;
int y_0;
int DUMMY_REG_3485_0;
int r1_0;
int r3_1;
int r4_1;
int r9_1;
int x_1;
int DUMMY_REG_3486_1;
int y_1;
atomic_int mem0;
atomic_int mem1;
void *func_0() {
int r2;
int r9;
int x;
int y;
int DUMMY_REG_3485;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag0>DUMMY_REG_3485</customTag> = atomic_load_explicit(&<customTag0>x</customTag>, memory_order_relaxed);//event.Load

<customTag0>r1</customTag> = <customTag0>DUMMY_REG_3485</customTag>;//event.Local

<customTag0>r9</customTag> = (<customTag0>r1</customTag> & 8) /* IEXPRBIN */;//event.Local

<customTag0>r2</customTag> = (<customTag0>y</customTag> + <customTag0>r9</customTag>) /* IEXPRBIN */;//event.Local

atomic_store_explicit(&<customTag0>r2</customTag>, 1, memory_order_release );//event.Store

atomic_thread_fence(memory_order_seq_cst);
r2_0 = r2;
r9_0 = r9;
x_0 = x;
y_0 = y;
DUMMY_REG_3485_0 = DUMMY_REG_3485;
r1_0 = r1;
}

void *func_1() {
int r3;
int r4;
int r9;
int x;
int DUMMY_REG_3486;
int y;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>DUMMY_REG_3486</customTag> = atomic_load_explicit(&<customTag1>y</customTag>, memory_order_relaxed);//event.Load

<customTag1>r3</customTag> = <customTag1>DUMMY_REG_3486</customTag>;//event.Local

<customTag1>r9</customTag> = (<customTag1>r3</customTag> & 8) /* IEXPRBIN */;//event.Local

<customTag1>r4</customTag> = (<customTag1>x</customTag> + <customTag1>r9</customTag>) /* IEXPRBIN */;//event.Local

atomic_store_explicit(&<customTag1>r4</customTag>, 1, memory_order_release );//event.Store

atomic_thread_fence(memory_order_seq_cst);
r3_1 = r3;
r4_1 = r4;
r9_1 = r9;
x_1 = x;
DUMMY_REG_3486_1 = DUMMY_REG_3486;
y_1 = y;
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
assert(!((<customAssertionTag0>r1</customAssertionTag> == 1) && (<customAssertionTag1>r3</customAssertionTag> == 1)));
return 0;
}


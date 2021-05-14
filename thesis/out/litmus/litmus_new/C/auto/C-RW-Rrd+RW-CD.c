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
int r3_0;
int x0_0;
int x1_0;
int r1_0;
int r4_1;
int y0_1;
int x1_1;
int DUMMY_REG_3369_1;
int r1_1;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
void *func_0() {
int r3;
int x0;
int x1;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag0>r3</customTag> = <customTag0>x0</customTag>;//event.Local

__VERIFIER_fence(Rcu_lock);
<customTag0>r1</customTag> = READ_ONCE(<customTag0>x0</customTag>);

atomic_store_explicit(&<customTag0>x1</customTag>, <customTag0>r3</customTag>, memory_order_release );//event.Store

__VERIFIER_fence(Rcu_unlock);
atomic_thread_fence(memory_order_seq_cst);
r3_0 = r3;
x0_0 = x0;
x1_0 = x1;
r1_0 = r1;
}

void *func_1() {
int r4;
int y0;
int x1;
int DUMMY_REG_3369;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>r4</customTag> = <customTag1>y0</customTag>;//event.Local

<customTag1>DUMMY_REG_3369</customTag> = atomic_load_explicit(&<customTag1>x1</customTag>, memory_order_relaxed);//event.Load

<customTag1>r1</customTag> = <customTag1>DUMMY_REG_3369</customTag>;//event.Local

<customTag1>r4</customTag> = (<customTag1>r1</customTag>)!=(<customTag1>r4</customTag>);//event.Local

if(<customTag1>r4</customTag>) {
WRITE_ONCE(&<customTag1>r1</customTag>, 1);
} else {}

WRITE_ONCE(&<customTag1>r1</customTag>, 1);
//event.Skip

//event.Skip

atomic_thread_fence(memory_order_seq_cst);
r4_1 = r4;
y0_1 = y0;
x1_1 = x1;
DUMMY_REG_3369_1 = DUMMY_REG_3369;
r1_1 = r1;
}

int main() {
atomic_init(&mem0, &mem1); //event.Init, mem1);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int y0 = atomic_load_explicit(&mem1, memory_order_relaxed);
int x0 = atomic_load_explicit(&mem2, memory_order_relaxed);
int x1 = atomic_load_explicit(&mem0, memory_order_relaxed);
assert(!((<customAssertionTag0>r1</customAssertionTag> == 1) && (<customAssertionTag1>r1</customAssertionTag> == mem2)));
return 0;
}


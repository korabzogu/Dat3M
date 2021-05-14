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
int DUMMY_REG_3473_0;
int x_0;
int y_0;
int r1_0;
int r3_1;
int x_1;
int y_1;
int DUMMY_REG_3474_1;
atomic_int mem0;
atomic_int mem1;
void *func_0() {
int DUMMY_REG_3473;
int x;
int y;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag0>DUMMY_REG_3473</customTag> = atomic_load_explicit(&<customTag0>x</customTag>, memory_order_relaxed);//event.Load

<customTag0>r1</customTag> = <customTag0>DUMMY_REG_3473</customTag>;//event.Local

atomic_store_explicit(&<customTag0>y</customTag>, 1, memory_order_release );//event.Store

atomic_thread_fence(memory_order_seq_cst);
DUMMY_REG_3473_0 = DUMMY_REG_3473;
x_0 = x;
y_0 = y;
r1_0 = r1;
}

void *func_1() {
int r3;
int x;
int y;
int DUMMY_REG_3474;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>DUMMY_REG_3474</customTag> = atomic_load_explicit(&<customTag1>y</customTag>, memory_order_relaxed);//event.Load

<customTag1>r3</customTag> = <customTag1>DUMMY_REG_3474</customTag>;//event.Local

atomic_store_explicit(&<customTag1>x</customTag>, 1, memory_order_release );//event.Store

atomic_thread_fence(memory_order_seq_cst);
r3_1 = r3;
x_1 = x;
y_1 = y;
DUMMY_REG_3474_1 = DUMMY_REG_3474;
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


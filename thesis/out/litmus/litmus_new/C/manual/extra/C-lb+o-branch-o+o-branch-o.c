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
int x_0;
int y_0;
int r1_0;
int r2_1;
int r4_1;
int x_1;
int y_1;
atomic_int mem0;
atomic_int mem1;
void *func_0() {
int r3;
int x;
int y;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag0>r1</customTag> = READ_ONCE(<customTag0>x</customTag>);

<customTag0>r3</customTag> = (<customTag0>r1</customTag>)!=(0);//event.Local

if(<customTag0>r3</customTag>) {
WRITE_ONCE(&<customTag0>y</customTag>, 1);
} else {}

WRITE_ONCE(&<customTag0>y</customTag>, 1);
//event.Skip

//event.Skip

atomic_thread_fence(memory_order_seq_cst);
r3_0 = r3;
x_0 = x;
y_0 = y;
r1_0 = r1;
}

void *func_1() {
int r2;
int r4;
int x;
int y;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>r2</customTag> = READ_ONCE(<customTag1>y</customTag>);

<customTag1>r4</customTag> = (<customTag1>r2</customTag>)!=(0);//event.Local

if(<customTag1>r4</customTag>) {
WRITE_ONCE(&<customTag1>x</customTag>, 1);
} else {}

WRITE_ONCE(&<customTag1>x</customTag>, 1);
//event.Skip

//event.Skip

atomic_thread_fence(memory_order_seq_cst);
r2_1 = r2;
r4_1 = r4;
x_1 = x;
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
assert(!((<customAssertionTag0>r1</customAssertionTag> == 1) && (<customAssertionTag1>r2</customAssertionTag> == 1)));
return 0;
}


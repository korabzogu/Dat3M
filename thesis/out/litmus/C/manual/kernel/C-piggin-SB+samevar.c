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
int r1_0;
int x_1;
int r1_1;
atomic_int mem0;
void *func_0() {
int x;
int r1;
//event.Skip

/*§Skip§*/
WRITE_ONCE(&<customTag0>x</customTag>, 1);
<customTag0>r1</customTag> = READ_ONCE(<customTag0>x</customTag>);

atomic_thread_fence(memory_order_seq_cst);
x_0 = x;
r1_0 = r1;
}

void *func_1() {
int x;
int r1;
//event.Skip

/*§Skip§*/
WRITE_ONCE(&<customTag1>x</customTag>, 2);
<customTag1>r1</customTag> = READ_ONCE(<customTag1>x</customTag>);

atomic_thread_fence(memory_order_seq_cst);
x_1 = x;
r1_1 = r1;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
assert(!((<customAssertionTag0>r1</customAssertionTag> == 0) && (<customAssertionTag1>r1</customAssertionTag> == 0)));
return 0;
}


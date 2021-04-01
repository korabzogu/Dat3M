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
int a_0;
int x_0;
int r2_1;
int a_1;
int x_1;
int r1_1;
atomic_int mem0;
atomic_int mem1;
void *func_0() {
int a;
int x;
//event.Skip

/*§Skip§*/
/*§Skip§*/
WRITE_ONCE(&<customTag0>a</customTag>, 3);
__VERIFIER_fence(Sync_rcu);
WRITE_ONCE(&<customTag0>x</customTag>, 4);
atomic_thread_fence(memory_order_seq_cst);
a_0 = a;
x_0 = x;
}

void *func_1() {
int r2;
int a;
int x;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
__VERIFIER_fence(Rcu_lock);
<customTag1>r1</customTag> = READ_ONCE(<customTag1>x</customTag>);

<customTag1>r2</customTag> = READ_ONCE(<customTag1>a</customTag>);

__VERIFIER_fence(Rcu_unlock);
atomic_thread_fence(memory_order_seq_cst);
r2_1 = r2;
a_1 = a;
x_1 = x;
r1_1 = r1;
}

int main() {
atomic_init(&mem0, 1); //event.Init, 1);
atomic_init(&mem1, 2); //event.Init, 2);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int a = atomic_load_explicit(&mem0, memory_order_relaxed);
int x = atomic_load_explicit(&mem1, memory_order_relaxed);
assert(!((<customAssertionTag1>r1</customAssertionTag> == 4) && (<customAssertionTag1>r2</customAssertionTag> == 1)));
return 0;
}


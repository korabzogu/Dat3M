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
int x0_0;
int x1_0;
int r2_1;
int x1_1;
int x2_1;
int r2_2;
int x0_2;
int x2_2;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
void *func_0() {
int r2;
int x0;
int x1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
WRITE_ONCE(&<customTag0>x0</customTag>, 2);
__VERIFIER_fence(Sync_rcu);
__VERIFIER_fence(Rcu_lock);
<customTag0>r2</customTag> = READ_ONCE(<customTag0>x1</customTag>);

__VERIFIER_fence(Rcu_unlock);
atomic_thread_fence(memory_order_seq_cst);
r2_0 = r2;
x0_0 = x0;
x1_0 = x1;
}

void *func_1() {
int r2;
int x1;
int x2;
//event.Skip

/*§Skip§*/
/*§Skip§*/
__VERIFIER_fence(Rcu_lock);
WRITE_ONCE(&<customTag1>x1</customTag>, 2);
<customTag1>r2</customTag> = READ_ONCE(<customTag1>x2</customTag>);

__VERIFIER_fence(Rcu_unlock);
atomic_thread_fence(memory_order_seq_cst);
r2_1 = r2;
x1_1 = x1;
x2_1 = x2;
}

void *func_2() {
int r2;
int x0;
int x2;
//event.Skip

/*§Skip§*/
/*§Skip§*/
__VERIFIER_fence(Rcu_lock);
WRITE_ONCE(&<customTag2>x2</customTag>, 2);
<customTag2>r2</customTag> = READ_ONCE(<customTag2>x0</customTag>);

__VERIFIER_fence(Rcu_unlock);
atomic_thread_fence(memory_order_seq_cst);
r2_2 = r2;
x0_2 = x0;
x2_2 = x2;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_t thread_2;
pthread_create(&thread_2, NULL, &func_2, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
int x0 = atomic_load_explicit(&mem0, memory_order_relaxed);
int x1 = atomic_load_explicit(&mem1, memory_order_relaxed);
int x2 = atomic_load_explicit(&mem2, memory_order_relaxed);
assert(!(((<customAssertionTag2>r2</customAssertionTag> == 0) && (<customAssertionTag0>r2</customAssertionTag> == 0)) && (<customAssertionTag1>r2</customAssertionTag> == 0)));
return 0;
}


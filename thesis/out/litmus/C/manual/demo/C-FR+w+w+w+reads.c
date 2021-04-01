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
int a_1;
int a_2;
int r2_3;
int a_3;
int r3_3;
int r4_3;
int r1_3;
atomic_int mem0;
void *func_0() {
int a;
//event.Skip

/*§Skip§*/
WRITE_ONCE(&<customTag0>a</customTag>, 1);
atomic_thread_fence(memory_order_seq_cst);
a_0 = a;
}

void *func_1() {
int a;
//event.Skip

/*§Skip§*/
WRITE_ONCE(&<customTag1>a</customTag>, 2);
atomic_thread_fence(memory_order_seq_cst);
a_1 = a;
}

void *func_2() {
int a;
//event.Skip

/*§Skip§*/
WRITE_ONCE(&<customTag2>a</customTag>, 3);
atomic_thread_fence(memory_order_seq_cst);
a_2 = a;
}

void *func_3() {
int r2;
int a;
int r3;
int r4;
int r1;
//event.Skip

/*§Skip§*/
<customTag3>r1</customTag> = READ_ONCE(<customTag3>a</customTag>);

<customTag3>r2</customTag> = READ_ONCE(<customTag3>a</customTag>);

<customTag3>r3</customTag> = READ_ONCE(<customTag3>a</customTag>);

<customTag3>r4</customTag> = READ_ONCE(<customTag3>a</customTag>);

atomic_thread_fence(memory_order_seq_cst);
r2_3 = r2;
a_3 = a;
r3_3 = r3;
r4_3 = r4;
r1_3 = r1;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_t thread_2;
pthread_create(&thread_2, NULL, &func_2, NULL);
pthread_t thread_3;
pthread_create(&thread_3, NULL, &func_3, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
pthread_join(thread_3, NULL);
int a = atomic_load_explicit(&mem0, memory_order_relaxed);
assert(!((((<customAssertionTag3>r1</customAssertionTag> == 0) && (<customAssertionTag3>r2</customAssertionTag> == 1)) && (<customAssertionTag3>r3</customAssertionTag> == 2)) && (<customAssertionTag3>r4</customAssertionTag> == 3)));
return 0;
}


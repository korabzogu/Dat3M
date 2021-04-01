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
int x_1;
int y_1;
int r0_1;
int r1_1;
int y_2;
int x_3;
int y_3;
int r0_3;
atomic_int mem0;
atomic_int mem1;
void *func_0() {
int x;
//event.Skip

/*§Skip§*/
WRITE_ONCE(&<customTag0>x</customTag>, 2);
atomic_thread_fence(memory_order_seq_cst);
x_0 = x;
}

void *func_1() {
int x;
int y;
int r0;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>r0</customTag> = atomic_load_explicit(&<customTag1>x</customTag>, memory_order_acquire);//event.Load

<customTag1>r1</customTag> = atomic_load_explicit(&<customTag1>y</customTag>, memory_order_acquire);//event.Load

atomic_thread_fence(memory_order_seq_cst);
x_1 = x;
y_1 = y;
r0_1 = r0;
r1_1 = r1;
}

void *func_2() {
int y;
//event.Skip

/*§Skip§*/
WRITE_ONCE(&<customTag2>y</customTag>, 1);
atomic_thread_fence(memory_order_seq_cst);
y_2 = y;
}

void *func_3() {
int x;
int y;
int r0;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag3>r0</customTag> = READ_ONCE(<customTag3>y</customTag>);

atomic_store_explicit(&<customTag3>x</customTag>, 1, memory_order_release );//event.Store

atomic_thread_fence(memory_order_seq_cst);
x_3 = x;
y_3 = y;
r0_3 = r0;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
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
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
assert(!((((x == 2) && (<customAssertionTag1>r0</customAssertionTag> == 2)) && (<customAssertionTag1>r1</customAssertionTag> == 0)) && (<customAssertionTag3>r0</customAssertionTag> == 1)));
return 0;
}


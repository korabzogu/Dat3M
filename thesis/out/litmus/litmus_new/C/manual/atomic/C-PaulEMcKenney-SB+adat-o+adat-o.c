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
int x_0;
int y_0;
int r1_0;
int r2_1;
int x_1;
int y_1;
int r1_1;
atomic_int mem0;
atomic_int mem1;
void *func_0() {
int r2;
int x;
int y;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
atomic_fetch_sub(r1,1);

<customTag0>r2</customTag> = atomic_load_explicit(&<customTag0>y</customTag>, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
r2_0 = r2;
x_0 = x;
y_0 = y;
r1_0 = r1;
}

void *func_1() {
int r2;
int x;
int y;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
atomic_fetch_sub(r1,1);

<customTag1>r2</customTag> = atomic_load_explicit(&<customTag1>x</customTag>, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
r2_1 = r2;
x_1 = x;
y_1 = y;
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
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
assert(!!((((((x == 0) && (<customAssertionTag0>r1</customAssertionTag> == 1)) && (y == 1)) && (<customAssertionTag1>r1</customAssertionTag> == 0)) && ((<customAssertionTag0>r2</customAssertionTag> == 1) || (<customAssertionTag1>r2</customAssertionTag> == 0)))));
return 0;
}


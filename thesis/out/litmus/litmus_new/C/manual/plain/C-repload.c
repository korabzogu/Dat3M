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
int a_1;
int b_1;
int x_1;
int r1_1;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
void *func_0() {
int x;
//event.Skip

/*§Skip§*/
WRITE_ONCE(&<customTag0>x</customTag>, 1);
atomic_thread_fence(memory_order_seq_cst);
x_0 = x;
}

void *func_1() {
int a;
int b;
int x;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag1>r1</customTag> = atomic_load_explicit(&<customTag1>x</customTag>, memory_order_seq_cst /* TODO use usual C assign */);//event.Load

WRITE_ONCE(&<customTag1>a</customTag>, <customTag1>r1</customTag>);
WRITE_ONCE(&<customTag1>b</customTag>, <customTag1>r1</customTag>);
atomic_thread_fence(memory_order_seq_cst);
a_1 = a;
b_1 = b;
x_1 = x;
r1_1 = r1;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 42); //event.Init, 42);
atomic_init(&mem2, 42); //event.Init, 42);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int a = atomic_load_explicit(&mem1, memory_order_relaxed);
int b = atomic_load_explicit(&mem2, memory_order_relaxed);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
assert(!((a == 0) && (b == 1)));
return 0;
}


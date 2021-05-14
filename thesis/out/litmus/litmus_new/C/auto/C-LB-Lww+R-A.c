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
int x1_0;
int u0_0;
int x1_1;
int u0_1;
int r1_1;
atomic_int mem0;
atomic_int mem1;
void *func_0() {
int x1;
int u0;
//event.Skip

/*§Skip§*/
/*§Skip§*/
atomic_store_explicit(&<customTag0>u0</customTag>, 3, memory_order_seq_cst /* TODO use usual C assign */ );//event.Store

atomic_store_explicit(&<customTag0>x1</customTag>, 1, memory_order_release );//event.Store

atomic_thread_fence(memory_order_seq_cst);
x1_0 = x1;
u0_0 = u0;
}

void *func_1() {
int x1;
int u0;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>r1</customTag> = atomic_load_explicit(&<customTag1>x1</customTag>, memory_order_acquire);//event.Load

atomic_store_explicit(&<customTag1>u0</customTag>, 1, memory_order_seq_cst /* TODO use usual C assign */ );//event.Store

atomic_thread_fence(memory_order_seq_cst);
x1_1 = x1;
u0_1 = u0;
r1_1 = r1;
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
int x1 = atomic_load_explicit(&mem1, memory_order_relaxed);
int u0 = atomic_load_explicit(&mem0, memory_order_relaxed);
assert(!((u0 == 3) && (<customAssertionTag1>r1</customAssertionTag> == 1)));
return 0;
}


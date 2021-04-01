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
int b_0;
int r0_0;
int r1_0;
atomic_int mem0;
atomic_int mem1;
void *func_0() {
int b;
int r0;
int r1;
//event.Skip

<customTag0>r1</customTag> = 1;//event.Local

/*§Skip§*/
<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>b</customTag>, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
b_0 = b;
r0_0 = r0;
r1_0 = r1;
}

int main() {
atomic_init(&mem0, 1); //event.Init, 1);
atomic_init(&mem1, 1); //event.Init, 1);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_join(thread_0, NULL);
int a = atomic_load_explicit(&mem0, memory_order_relaxed);
int b = atomic_load_explicit(&mem1, memory_order_relaxed);
assert(!(((<customAssertionTag0>r0</customAssertionTag> == 1) && (<customAssertionTag0>r1</customAssertionTag> == 1))));
return 0;
}


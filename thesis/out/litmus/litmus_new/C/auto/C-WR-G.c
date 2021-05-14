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
atomic_int mem0;
void *func_0() {
int r2;
int x0;
//event.Skip

/*§Skip§*/
WRITE_ONCE(&<customTag0>x0</customTag>, 2);
__VERIFIER_fence(Sync_rcu);
<customTag0>r2</customTag> = READ_ONCE(<customTag0>x0</customTag>);

atomic_thread_fence(memory_order_seq_cst);
r2_0 = r2;
x0_0 = x0;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_join(thread_0, NULL);
int x0 = atomic_load_explicit(&mem0, memory_order_relaxed);
assert(!(<customAssertionTag0>r2</customAssertionTag> == 0));
return 0;
}


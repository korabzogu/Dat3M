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
int x0_0;
atomic_int mem0;
void *func_0() {
int x0;
//event.Skip

/*§Skip§*/
__VERIFIER_fence(Rcu_lock);
WRITE_ONCE(&x0, 2);
WRITE_ONCE(&x0, 1);
__VERIFIER_fence(Rcu_unlock);
atomic_thread_fence(memory_order_seq_cst);
x0_0 = x0;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_join(thread_0, NULL);
int x0 = atomic_load_explicit(&mem0, memory_order_relaxed);
assert((x0 == 2));
return 0;
}


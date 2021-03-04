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

extern void __VERIFIER_HARDWARE(char * str);
enum fence{After_atomic,Before_atomic,Isync,Lwsync,Mb,Mfence,Rcu_lock,Rcu_unlock,Rmb,Sync,Sync_rcu,Wmb,Ish };
int x_0;
int r0_0;
atomic_int mem0;
void *func_0() {
int x;
int r0;
//event.Skip

/*§Skip§*/
atomic_fetch_sub(r0,1);

atomic_thread_fence(memory_order_seq_cst);
x_0 = x;
r0_0 = r0;
}

int main() {
atomic_init(&mem0, 2); //event.Init, 2);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_join(thread_0, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
assert(!(((r0_0 == 0) && (x == 1))));
return 0;
}


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
int r0_0;
void *func_0() {
int r0;
//event.Skip

r0 = 0;//event.Local

if(1) {
r0 = 1;//event.Local

} else {}

r0 = 1;//event.Local

//event.Skip

//event.Skip

atomic_thread_fence(memory_order_seq_cst);
r0_0 = r0;
}

int main() {
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_join(thread_0, NULL);
assert(!((r0_0 == 1)));
return 0;
}


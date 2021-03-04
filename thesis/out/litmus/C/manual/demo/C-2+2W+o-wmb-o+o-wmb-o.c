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
int a_0;
int b_0;
int a_1;
int b_1;
atomic_int mem0;
atomic_int mem1;
void *func_0() {
int a;
int b;
//event.Skip

/*§Skip§*/
/*§Skip§*/
WRITE_ONCE(&a, 2);
__VERIFIER_fence(Wmb);
WRITE_ONCE(&b, 1);
atomic_thread_fence(memory_order_seq_cst);
a_0 = a;
b_0 = b;
}

void *func_1() {
int a;
int b;
//event.Skip

/*§Skip§*/
/*§Skip§*/
WRITE_ONCE(&b, 2);
__VERIFIER_fence(Wmb);
WRITE_ONCE(&a, 1);
atomic_thread_fence(memory_order_seq_cst);
a_1 = a;
b_1 = b;
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
int a = atomic_load_explicit(&mem0, memory_order_relaxed);
int b = atomic_load_explicit(&mem1, memory_order_relaxed);
assert(((b == 2) && (a == 2)));
return 0;
}


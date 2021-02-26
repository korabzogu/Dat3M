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
int x0_0;
int x1_0;
int x0_1;
int x1_1;
atomic_int mem0;
atomic_int mem1;
void *func_0() {
int x0;
int x1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
x0 = 2;

__VERIFIER_HARDWARE(Sync-rcu);
__VERIFIER_HARDWARE(Sync-rcu);
__VERIFIER_HARDWARE(Sync-rcu);
x1 = 1;

atomic_thread_fence(memory_order_seq_cst);
x0_0 = x0;
x1_0 = x1;
}

void *func_1() {
int x0;
int x1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
__VERIFIER_HARDWARE(Rcu-lock);
x1 = 2;

x0 = 1;

__VERIFIER_HARDWARE(Rcu-unlock);
atomic_thread_fence(memory_order_seq_cst);
x0_1 = x0;
x1_1 = x1;
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
int x0 = atomic_load_explicit(&mem0, memory_order_relaxed);
int x1 = atomic_load_explicit(&mem1, memory_order_relaxed);
assert(((x0 == 2) && (x1 == 2)));
return 0;
}


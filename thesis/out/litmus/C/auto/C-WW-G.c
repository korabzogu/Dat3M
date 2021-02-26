#include <assert.h>
void reach_error() {
assert(0);
}
void __VERIFIER_assert(int cond) {
if(!cond) {
reach_error();
}
}
#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int x0_0;
atomic_int mem0;
void *func_0() {
int x0;
//event.Skip

/*§Skip§*/
x0 = 2;

__VERIFIER_HARDWARE(NULL);
x0 = 1;

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


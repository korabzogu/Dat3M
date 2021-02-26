#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int x0_0;
atomic_int em0;
void *func_0() {
int x0;
//event.Skip

/*§Skip§*/
__VERIFIER_HARDWARE(NULL);
x0 = 2;

x0 = 1;

__VERIFIER_HARDWARE(NULL);
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


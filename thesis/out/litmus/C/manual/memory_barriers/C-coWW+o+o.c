#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int x_0;
atomic_int em0;
void *func_0() {
int x;
//event.Skip

/*§Skip§*/
x = 1;

x = 2;

atomic_thread_fence(memory_order_seq_cst);
x_0 = x;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_join(thread_0, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
assert((x == 1));
return 0;
}

#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int x_0;
int r0_0;
int r1_0;
atomic_int em0;
void *func_0() {
int x;
int r0;
int r1;
//event.Skip

/*§Skip§*/
atomic_fetch_sub(r0,1);

atomic_fetch_sub(r1,1);

atomic_thread_fence(memory_order_seq_cst);
x_0 = x;
r0_0 = r0;
r1_0 = r1;
}

int main() {
atomic_init(&mem0, 3); //event.Init, 3);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_join(thread_0, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
assert((((r0_0 != 2) || (r1_0 != 1)) || (x != 1)));
return 0;
}

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
/* TODO check if this is correct */ atomic_store(r0,atomic_fetch_add_explicit(1,x,memory_order_));

/* TODO check if this is correct */ atomic_store(r1,atomic_fetch_add_explicit(1,x,memory_order_));

atomic_thread_fence(memory_order_seq_cst);
x_0 = x;
r0_0 = r0;
r1_0 = r1;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_join(thread_0, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
assert(!((x == 2)));
return 0;
}

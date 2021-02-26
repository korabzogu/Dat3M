#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int r2_0;
int r0_0;
int r1_0;
int r2_1;
int r0_1;
int r1_1;
atomic_int em0;
void *func_0() {
int r0;
int r1;
//event.Skip

/*§Skip§*/
r0 = 2;//event.Local

mem0 = r0;

r1 = 1;//event.Local

mem0 = r1;

atomic_thread_fence(memory_order_seq_cst);
r0_0 = r0;
r1_0 = r1;
}

void *func_1() {
int r0;
int r1;
//event.Skip

/*§Skip§*/
r0 = 2;//event.Local

mem0 = r0;

r1 = 1;//event.Local

mem0 = r1;

atomic_thread_fence(memory_order_seq_cst);
r0_1 = r0;
r1_1 = r1;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
assert((x == 2));
return 0;
}


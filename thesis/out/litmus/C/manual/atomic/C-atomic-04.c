#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int x_0;
int r0_0;
int r2_1;
int x_1;
int r1_1;
atomic_int em0;
void *func_0() {
int x;
int r0;
//event.Skip

/*§Skip§*/
atomic_fetch_dummy(r0,10);

atomic_thread_fence(memory_order_seq_cst);
x_0 = x;
r0_0 = r0;
}

void *func_1() {
int r2;
int x;
int r1;
//event.Skip

/*§Skip§*/
atomic_fetch_dummy(r1,5);

atomic_fetch_dummy(r2,5);

atomic_thread_fence(memory_order_seq_cst);
r2_1 = r2;
x_1 = x;
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
assert(!(((((((r0_0 == 0) && (r1_1 == 1)) && (r2_1 == 1)) && (x == 10)) || ((((r0_0 == 1) && (r1_1 == 0)) && (r2_1 == 0)) && (x == 10))) || ((((r0_0 == 1) && (r1_1 == 1)) && (r2_1 == 1)) && (x == 20)))));
return 0;
}


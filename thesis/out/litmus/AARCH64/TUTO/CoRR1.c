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
int X0_0;
int X1_0;
int X0_1;
int X1_1;
int X2_1;
atomic_int mem0;
void *func_0() {
int X0;
//event.Skip

/*§Skip§*/
X0 = 2;//event.Local

mem0 = X0;

atomic_thread_fence(memory_order_seq_cst);
X0_0 = X0;
}

void *func_1() {
int X0;
int X2;
//event.Skip

/*§Skip§*/
X0 = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

X2 = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
X0_1 = X0;
X2_1 = X2;
}

int main() {
atomic_init(&mem0, 1); //event.Init, 1);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
assert(((X0_1 == 2) && (X2_1 == 1)));
return 0;
}


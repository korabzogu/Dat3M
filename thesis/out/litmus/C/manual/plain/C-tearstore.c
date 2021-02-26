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
int x_0;
int x_1;
atomic_int mem0;
void *func_0() {
int x;
//event.Skip

/*§Skip§*/
atomic_store_explicit(&x, 6, memory_order_seq_cst /* TODO use usual C assign */ );//event.Store

atomic_thread_fence(memory_order_seq_cst);
x_0 = x;
}

void *func_1() {
int x;
//event.Skip

/*§Skip§*/
atomic_store_explicit(&x, 12, memory_order_seq_cst /* TODO use usual C assign */ );//event.Store

atomic_thread_fence(memory_order_seq_cst);
x_1 = x;
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
assert(((!((x == 0)) && !((x == 6))) && !((x == 12))));
return 0;
}


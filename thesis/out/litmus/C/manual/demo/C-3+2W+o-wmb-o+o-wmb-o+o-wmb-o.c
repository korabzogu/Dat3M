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
int a_0;
int b_0;
int b_1;
int c_1;
int a_2;
int c_2;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
void *func_0() {
int a;
int b;
//event.Skip

/*§Skip§*/
/*§Skip§*/
atomic_store_explicit(&a, 2, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/ );//event.Store

__VERIFIER_HARDWARE(Wmb);
atomic_store_explicit(&b, 1, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/ );//event.Store

atomic_thread_fence(memory_order_seq_cst);
a_0 = a;
b_0 = b;
}

void *func_1() {
int b;
int c;
//event.Skip

/*§Skip§*/
/*§Skip§*/
atomic_store_explicit(&b, 2, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/ );//event.Store

__VERIFIER_HARDWARE(Wmb);
atomic_store_explicit(&c, 1, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/ );//event.Store

atomic_thread_fence(memory_order_seq_cst);
b_1 = b;
c_1 = c;
}

void *func_2() {
int a;
int c;
//event.Skip

/*§Skip§*/
/*§Skip§*/
atomic_store_explicit(&c, 2, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/ );//event.Store

__VERIFIER_HARDWARE(Wmb);
atomic_store_explicit(&a, 1, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/ );//event.Store

atomic_thread_fence(memory_order_seq_cst);
a_2 = a;
c_2 = c;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_t thread_2;
pthread_create(&thread_2, NULL, &func_2, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
int a = atomic_load_explicit(&mem0, memory_order_relaxed);
int b = atomic_load_explicit(&mem1, memory_order_relaxed);
int c = atomic_load_explicit(&mem2, memory_order_relaxed);
assert((((a == 2) && (b == 2)) && (c == 2)));
return 0;
}


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
int x0_0;
int x1_0;
int x1_1;
int x2_1;
int x2_2;
int x3_2;
int x3_3;
int x4_3;
int x4_4;
int x5_4;
int x5_5;
int x6_5;
int x0_6;
int x6_6;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
atomic_int mem3;
atomic_int mem4;
atomic_int mem5;
atomic_int mem6;
void *func_0() {
int x0;
int x1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
atomic_store_explicit(&x0, 2, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/ );//event.Store

__VERIFIER_HARDWARE(Sync-rcu);
atomic_store_explicit(&x1, 1, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/ );//event.Store

atomic_thread_fence(memory_order_seq_cst);
x0_0 = x0;
x1_0 = x1;
}

void *func_1() {
int x1;
int x2;
//event.Skip

/*§Skip§*/
/*§Skip§*/
atomic_store_explicit(&x1, 2, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/ );//event.Store

__VERIFIER_HARDWARE(Sync-rcu);
atomic_store_explicit(&x2, 1, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/ );//event.Store

atomic_thread_fence(memory_order_seq_cst);
x1_1 = x1;
x2_1 = x2;
}

void *func_2() {
int x2;
int x3;
//event.Skip

/*§Skip§*/
/*§Skip§*/
atomic_store_explicit(&x2, 2, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/ );//event.Store

__VERIFIER_HARDWARE(Sync-rcu);
atomic_store_explicit(&x3, 1, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/ );//event.Store

atomic_thread_fence(memory_order_seq_cst);
x2_2 = x2;
x3_2 = x3;
}

void *func_3() {
int x3;
int x4;
//event.Skip

/*§Skip§*/
/*§Skip§*/
atomic_store_explicit(&x3, 2, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/ );//event.Store

__VERIFIER_HARDWARE(Mb);
atomic_store_explicit(&x4, 1, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/ );//event.Store

atomic_thread_fence(memory_order_seq_cst);
x3_3 = x3;
x4_3 = x4;
}

void *func_4() {
int x4;
int x5;
//event.Skip

/*§Skip§*/
/*§Skip§*/
atomic_store_explicit(&x4, 2, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/ );//event.Store

__VERIFIER_HARDWARE(Sync-rcu);
atomic_store_explicit(&x5, 1, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/ );//event.Store

atomic_thread_fence(memory_order_seq_cst);
x4_4 = x4;
x5_4 = x5;
}

void *func_5() {
int x5;
int x6;
//event.Skip

/*§Skip§*/
/*§Skip§*/
atomic_store_explicit(&x5, 2, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/ );//event.Store

__VERIFIER_HARDWARE(Sync-rcu);
atomic_store_explicit(&x6, 1, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/ );//event.Store

atomic_thread_fence(memory_order_seq_cst);
x5_5 = x5;
x6_5 = x6;
}

void *func_6() {
int x0;
int x6;
//event.Skip

/*§Skip§*/
/*§Skip§*/
__VERIFIER_HARDWARE(Rcu-lock);
atomic_store_explicit(&x6, 2, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/ );//event.Store

atomic_store_explicit(&x0, 1, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/ );//event.Store

__VERIFIER_HARDWARE(Rcu-unlock);
atomic_thread_fence(memory_order_seq_cst);
x0_6 = x0;
x6_6 = x6;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
atomic_init(&mem3, 0); //event.Init, 0);
atomic_init(&mem4, 0); //event.Init, 0);
atomic_init(&mem5, 0); //event.Init, 0);
atomic_init(&mem6, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_t thread_2;
pthread_create(&thread_2, NULL, &func_2, NULL);
pthread_t thread_3;
pthread_create(&thread_3, NULL, &func_3, NULL);
pthread_t thread_4;
pthread_create(&thread_4, NULL, &func_4, NULL);
pthread_t thread_5;
pthread_create(&thread_5, NULL, &func_5, NULL);
pthread_t thread_6;
pthread_create(&thread_6, NULL, &func_6, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
pthread_join(thread_3, NULL);
pthread_join(thread_4, NULL);
pthread_join(thread_5, NULL);
pthread_join(thread_6, NULL);
int x0 = atomic_load_explicit(&mem0, memory_order_relaxed);
int x1 = atomic_load_explicit(&mem1, memory_order_relaxed);
int x2 = atomic_load_explicit(&mem2, memory_order_relaxed);
int x3 = atomic_load_explicit(&mem3, memory_order_relaxed);
int x4 = atomic_load_explicit(&mem4, memory_order_relaxed);
int x5 = atomic_load_explicit(&mem5, memory_order_relaxed);
int x6 = atomic_load_explicit(&mem6, memory_order_relaxed);
assert((((((((x0 == 2) && (x1 == 2)) && (x2 == 2)) && (x3 == 2)) && (x4 == 2)) && (x5 == 2)) && (x6 == 2)));
return 0;
}


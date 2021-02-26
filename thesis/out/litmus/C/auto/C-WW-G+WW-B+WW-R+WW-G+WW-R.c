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
int x0_4;
int x4_4;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
atomic_int mem3;
atomic_int mem4;
void *func_0() {
int x0;
int x1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
x0 = 2;

__VERIFIER_HARDWARE(Sync-rcu);
x1 = 1;

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
x1 = 2;

__VERIFIER_HARDWARE(Mb);
x2 = 1;

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
__VERIFIER_HARDWARE(Rcu-lock);
x2 = 2;

x3 = 1;

__VERIFIER_HARDWARE(Rcu-unlock);
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
x3 = 2;

__VERIFIER_HARDWARE(Sync-rcu);
x4 = 1;

atomic_thread_fence(memory_order_seq_cst);
x3_3 = x3;
x4_3 = x4;
}

void *func_4() {
int x0;
int x4;
//event.Skip

/*§Skip§*/
/*§Skip§*/
__VERIFIER_HARDWARE(Rcu-lock);
x4 = 2;

x0 = 1;

__VERIFIER_HARDWARE(Rcu-unlock);
atomic_thread_fence(memory_order_seq_cst);
x0_4 = x0;
x4_4 = x4;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
atomic_init(&mem3, 0); //event.Init, 0);
atomic_init(&mem4, 0); //event.Init, 0);
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
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
pthread_join(thread_3, NULL);
pthread_join(thread_4, NULL);
int x0 = atomic_load_explicit(&mem0, memory_order_relaxed);
int x1 = atomic_load_explicit(&mem1, memory_order_relaxed);
int x2 = atomic_load_explicit(&mem2, memory_order_relaxed);
int x3 = atomic_load_explicit(&mem3, memory_order_relaxed);
int x4 = atomic_load_explicit(&mem4, memory_order_relaxed);
assert((((((x0 == 2) && (x1 == 2)) && (x2 == 2)) && (x3 == 2)) && (x4 == 2)));
return 0;
}


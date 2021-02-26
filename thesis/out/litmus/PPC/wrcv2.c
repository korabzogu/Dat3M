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
int r9_0;
int r1_0;
int r2_1;
int r5_1;
int r9_1;
int r1_1;
int r2_2;
int r5_2;
int r6_2;
int r1_2;
atomic_int mem0;
atomic_int mem1;
void *func_0() {
int r9;
//event.Skip

/*§Skip§*/
r9 = 1;//event.Local

atomic_store_explicit(&mem0, r9, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
r9_0 = r9;
}

void *func_1() {
int r5;
int r9;
//event.Skip

/*§Skip§*/
/*§Skip§*/
r9 = 1;//event.Local

r5 = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

__VERIFIER_HARDWARE(Lwsync);
atomic_store_explicit(&mem1, r9, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
r5_1 = r5;
r9_1 = r9;
}

void *func_2() {
int r5;
int r6;
//event.Skip

/*§Skip§*/
/*§Skip§*/
r5 = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

__VERIFIER_HARDWARE(Lwsync);
r6 = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
r5_2 = r5;
r6_2 = r6;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_t thread_2;
pthread_create(&thread_2, NULL, &func_2, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
assert((((r5_1 == 1) && (r5_2 == 1)) && (r6_2 == 0)));
return 0;
}


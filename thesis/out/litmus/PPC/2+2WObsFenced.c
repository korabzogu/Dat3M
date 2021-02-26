#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int r2_0;
int r3_0;
int r1_0;
int r2_1;
int r3_1;
int r1_1;
int r2_2;
int r3_2;
int r4_2;
int r1_2;
int r2_3;
int r3_3;
int r4_3;
int r1_3;
atomic_int em0;
atomic_int em1;
void *func_0() {
int r3;
int r1;
//event.Skip

/*§Skip§*/
r1 = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

__VERIFIER_HARDWARE(NULL);
r3 = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
r3_0 = r3;
r1_0 = r1;
}

void *func_1() {
int r3;
int r1;
//event.Skip

/*§Skip§*/
r1 = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

__VERIFIER_HARDWARE(NULL);
r3 = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
r3_1 = r3;
r1_1 = r1;
}

void *func_2() {
int r3;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
r1 = 2;//event.Local

mem0 = r1;

r3 = 1;//event.Local

mem1 = r3;

atomic_thread_fence(memory_order_seq_cst);
r3_2 = r3;
r1_2 = r1;
}

void *func_3() {
int r3;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
r1 = 2;//event.Local

mem1 = r1;

r3 = 1;//event.Local

mem0 = r3;

atomic_thread_fence(memory_order_seq_cst);
r3_3 = r3;
r1_3 = r1;
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
pthread_t thread_3;
pthread_create(&thread_3, NULL, &func_3, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
pthread_join(thread_3, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
assert(((((r1_0 == 1) && (r3_0 == 2)) && (r1_1 == 1)) && (r3_1 == 2)));
return 0;
}


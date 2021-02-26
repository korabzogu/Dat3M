#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int r2_0;
int r1_0;
int r2_1;
int r3_1;
int r4_1;
int r1_1;
int r2_2;
int r3_2;
int r4_2;
int r5_2;
int r1_2;
atomic_int em0;
atomic_int em1;
void *func_0() {
int r1;
//event.Skip

/*§Skip§*/
r1 = 2;//event.Local

mem0 = r1;

atomic_thread_fence(memory_order_seq_cst);
r1_0 = r1;
}

void *func_1() {
int r3;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
r1 = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

r3 = (r1 ^ r1) /* IEXPRBIN */;//event.Local

r3 = (r3 + 1) /* IEXPRBIN */;//event.Local

mem1 = r3;

atomic_thread_fence(memory_order_seq_cst);
r3_1 = r3;
r1_1 = r1;
}

void *func_2() {
int r3;
int r4;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
r1 = 2;//event.Local

mem1 = r1;

r3 = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

r4 = (r3 ^ r3) /* IEXPRBIN */;//event.Local

r4 = (r4 + 1) /* IEXPRBIN */;//event.Local

mem0 = r4;

atomic_thread_fence(memory_order_seq_cst);
r3_2 = r3;
r4_2 = r4;
r1_2 = r1;
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
assert(((((x == 2) && (y == 2)) && (r1_1 == 2)) && (r3_2 == 2)));
return 0;
}

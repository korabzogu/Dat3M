#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int r2_0;
int r4_0;
int r5_0;
int r6_0;
int r2_1;
int r4_1;
int r5_1;
int r6_1;
atomic_int em0;
atomic_int em1;
void *func_0() {
int r2;
int r6;
//event.Skip

r6 = 1;//event.Local

/*§Skip§*/
/*§Skip§*/
r2 = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

mem0 = r6;

atomic_thread_fence(memory_order_seq_cst);
r2_0 = r2;
r6_0 = r6;
}

void *func_1() {
int r2;
int r6;
//event.Skip

r6 = 1;//event.Local

/*§Skip§*/
/*§Skip§*/
r2 = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

mem1 = r6;

atomic_thread_fence(memory_order_seq_cst);
r2_1 = r2;
r6_1 = r6;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
assert(((r2_0 == 1) && (r2_1 == 1)));
return 0;
}


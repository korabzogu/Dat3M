#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int X0_0;
int X1_0;
int X2_0;
int X3_0;
int X4_0;
int X5_0;
int X6_0;
int X0_1;
int X1_1;
int X2_1;
int X3_1;
atomic_int mem0;
atomic_int mem1;
void *func_0() {
int X0;
int X2;
int X3;
int X5;
int X6;
//event.Skip

/*§Skip§*/
/*§Skip§*/
X0 = 1;//event.Local

mem0 = X0;

X2 = 2;//event.Local

mem0 = X2;

X3 = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

X5 = 1;//event.Local

mem1 = X5;

X6 = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
X0_0 = X0;
X2_0 = X2;
X3_0 = X3;
X5_0 = X5;
X6_0 = X6;
}

void *func_1() {
int X0;
int X2;
//event.Skip

/*§Skip§*/
/*§Skip§*/
X0 = 2;//event.Local

mem1 = X0;

X2 = atomic_load_explicit(&mem0, memory_order_acquire);//event.Load

atomic_thread_fence(memory_order_seq_cst);
X0_1 = X0;
X2_1 = X2;
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
assert((((((x == 2) && (y == 2)) && (X6_0 == 2)) && (X3_0 == 0)) && (X2_1 == 0)));
return 0;
}


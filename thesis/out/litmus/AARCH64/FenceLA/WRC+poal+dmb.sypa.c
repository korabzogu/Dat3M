#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int X0_0;
int X1_0;
int X0_1;
int X1_1;
int X2_1;
int X3_1;
int X0_2;
int X1_2;
int X2_2;
int X3_2;
atomic_int em0;
atomic_int em1;
void *func_0() {
int X0;
//event.Skip

/*§Skip§*/
X0 = 1;//event.Local

mem0 = X0;

atomic_thread_fence(memory_order_seq_cst);
X0_0 = X0;
}

void *func_1() {
int X0;
int X2;
//event.Skip

/*§Skip§*/
/*§Skip§*/
X0 = atomic_load_explicit(&mem0, memory_order_acquire);//event.Load

X2 = 1;//event.Local

mem1 = X2;

atomic_thread_fence(memory_order_seq_cst);
X0_1 = X0;
X2_1 = X2;
}

void *func_2() {
int X0;
int X2;
//event.Skip

/*§Skip§*/
/*§Skip§*/
X0 = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

// TODO: atomic_thread_fence(memory_order_release); DMB event.FenceOpt

X2 = atomic_load_explicit(&mem0, memory_order_acquire);//event.Load

atomic_thread_fence(memory_order_seq_cst);
X0_2 = X0;
X2_2 = X2;
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
assert((((X0_1 == 1) && (X0_2 == 1)) && (X2_2 == 0)));
return 0;
}

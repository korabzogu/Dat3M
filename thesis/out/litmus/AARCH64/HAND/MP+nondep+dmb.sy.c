#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int X1_0;
int X2_0;
int X3_0;
int X4_0;
int X0_1;
int X1_1;
int X3_1;
int X4_1;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
void *func_0() {
int X2;
int X3;
//event.Skip

/*§Skip§*/
/*§Skip§*/
mem0 = mem2;

X2 = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

X3 = 1;//event.Local

X2 = X3;

atomic_thread_fence(memory_order_seq_cst);
X2_0 = X2;
X3_0 = X3;
}

void *func_1() {
int X0;
int X4;
//event.Skip

/*§Skip§*/
/*§Skip§*/
X0 = atomic_load_explicit(&mem2, memory_order_relaxed);//event.Load

// TODO: atomic_thread_fence(memory_order_release); DMB event.FenceOpt

X4 = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
X0_1 = X0;
X4_1 = X4;
}

int main() {
atomic_init(&mem0, &mem1); //event.Init, mem1);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem2, memory_order_relaxed);
int z = atomic_load_explicit(&mem1, memory_order_relaxed);
assert((((X0_1 == 1) && (X4_1 == mem1)) && (X2_0 == mem2)));
return 0;
}


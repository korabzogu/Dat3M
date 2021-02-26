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
int X8_0;
int X0_0;
int X1_0;
int X2_0;
int X3_0;
int X4_0;
int X5_0;
int X6_0;
int X7_0;
int X0_1;
int X1_1;
int X2_1;
int X3_1;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
atomic_int mem3;
void *func_0() {
int X8;
int X0;
int X2;
int X4;
int X6;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
X0 = 1;//event.Local

mem0 = X0;

X2 = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

if(X2 != 0){
goto LC00;//event.CondJump
}

LC00://event.Label

X4 = atomic_load_explicit(&mem2, memory_order_relaxed);//event.Load

X6 = 1;//event.Local

mem3 = X6;

X8 = atomic_load_explicit(&mem3, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
X8_0 = X8;
X0_0 = X0;
X2_0 = X2;
X4_0 = X4;
X6_0 = X6;
}

void *func_1() {
int X0;
int X2;
//event.Skip

/*§Skip§*/
/*§Skip§*/
X0 = 2;//event.Local

mem3 = X0;

X2 = atomic_load_explicit(&mem0, memory_order_acquire);//event.Load

atomic_thread_fence(memory_order_seq_cst);
X0_1 = X0;
X2_1 = X2;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
atomic_init(&mem3, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int a = atomic_load_explicit(&mem3, memory_order_relaxed);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
int z = atomic_load_explicit(&mem2, memory_order_relaxed);
assert(((((a == 2) && (x == 1)) && (X8_0 == 2)) && (X2_1 == 0)));
return 0;
}


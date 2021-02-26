#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int X0_0;
int X1_0;
int X2_0;
int X3_0;
int X8_1;
int X9_1;
int X0_1;
int X1_1;
int DUMMY_REG_1495_1;
int X2_1;
int X3_1;
int X4_1;
int X5_1;
int X6_1;
int X7_1;
atomic_int em0;
atomic_int em1;
atomic_int em2;
void *func_0() {
int X0;
int X2;
//event.Skip

/*§Skip§*/
/*§Skip§*/
X0 = 2;//event.Local

mem0 = X0;

// TODO: atomic_thread_fence(memory_order_release); DMB event.FenceOpt

X2 = 1;//event.Local

mem1 = X2;

atomic_thread_fence(memory_order_seq_cst);
X0_0 = X0;
X2_0 = X2;
}

void *func_1() {
int X8;
int X9;
int X0;
int DUMMY_REG_1495;
int X2;
int X3;
int X5;
int X6;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
X0 = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

X2 = (X0 ^ X0) /* IEXPRBIN */;//event.Local

X3 = 1;//event.Local

DUMMY_REG_1495 = (mem2 + X2) /* IEXPRBIN */;//event.Local

DUMMY_REG_1495 = X3;

X5 = atomic_load_explicit(&mem2, memory_order_relaxed);//event.Load

if(X5 != 0){
goto LC00;//event.CondJump
}

LC00://event.Label

X6 = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

X8 = 1;//event.Local

mem0 = X8;

X9 = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
X8_1 = X8;
X9_1 = X9;
X0_1 = X0;
DUMMY_REG_1495_1 = DUMMY_REG_1495;
X2_1 = X2;
X3_1 = X3;
X5_1 = X5;
X6_1 = X6;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
int z = atomic_load_explicit(&mem2, memory_order_relaxed);
assert((((((((x == 2) && (y == 1)) && (z == 1)) && (X0_1 == 1)) && (X5_1 == 1)) && (X6_1 == 0)) && (X9_1 == 1)));
return 0;
}


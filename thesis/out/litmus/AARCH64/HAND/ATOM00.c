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
int X0_0;
int X1_0;
int X0_1;
int X1_1;
int X2_1;
int X3_1;
int X4_1;
int X5_1;
atomic_int mem0;
atomic_int mem1;
void *func_0() {
int X0;
//event.Skip

/*§Skip§*/
X0 = 1;//event.Local

mem1 = X0;

atomic_thread_fence(memory_order_seq_cst);
X0_0 = X0;
}

void *func_1() {
int X1;
int X2;
int X3;
int X4;
//event.Skip

/*§Skip§*/
/*§Skip§*/
X1 = 2;//event.Local

X2 = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

mem1 = X1;

if(X3 != 0){
goto Fail1;//event.CondJump
}

if(True){
goto Exit1;//event.CondJump
}

Fail1://event.Label

X4 = 0;//event.Local

mem0 = X4;

Exit1://event.Label

atomic_thread_fence(memory_order_seq_cst);
X1_1 = X1;
X2_1 = X2;
X3_1 = X3;
X4_1 = X4;
}

int main() {
atomic_init(&mem0, 1); //event.Init, 1);
atomic_init(&mem1, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int x = atomic_load_explicit(&mem1, memory_order_relaxed);
int ok = atomic_load_explicit(&mem0, memory_order_relaxed);
assert((((ok == 1) && (x == 2)) && (X2_1 == 0)));
return 0;
}


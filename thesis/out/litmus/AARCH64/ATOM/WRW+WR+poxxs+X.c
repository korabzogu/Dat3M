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
int X2_0;
int X3_0;
int X4_0;
int X5_0;
int X0_1;
int X1_1;
int X2_1;
int X3_1;
int X4_1;
int X5_1;
int X6_1;
int X7_1;
int X0_2;
int X1_2;
int X2_2;
int X3_2;
int X4_2;
int X5_2;
int X6_2;
int X7_2;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
void *func_0() {
int X1;
int X2;
int X3;
int X4;
//event.Skip

/*§Skip§*/
/*§Skip§*/
X1 = 1;//event.Local

X2 = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

atomic_store_explicit(&mem1, X1, memory_order_relaxed );//event.Store

if(X3 != 0){
goto Fail0;//event.CondJump
}

if(True){
goto Exit0;//event.CondJump
}

Fail0://event.Label

X4 = 0;//event.Local

atomic_store_explicit(&mem0, X4, memory_order_relaxed );//event.Store

Exit0://event.Label

atomic_thread_fence(memory_order_seq_cst);
X1_0 = X1;
X2_0 = X2;
X3_0 = X3;
X4_0 = X4;
}

void *func_1() {
int X1;
int X2;
int X4;
int X5;
int X6;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
X1 = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

atomic_store_explicit(&mem1, X1, memory_order_relaxed );//event.Store

if(X2 != 0){
goto Fail1;//event.CondJump
}

X4 = 1;//event.Local

X5 = atomic_load_explicit(&mem2, memory_order_relaxed);//event.Load

atomic_store_explicit(&mem2, X4, memory_order_relaxed );//event.Store

if(X2 != 0){
goto Fail1;//event.CondJump
}

if(True){
goto Exit1;//event.CondJump
}

Fail1://event.Label

X6 = 0;//event.Local

atomic_store_explicit(&mem0, X6, memory_order_relaxed );//event.Store

Exit1://event.Label

atomic_thread_fence(memory_order_seq_cst);
X1_1 = X1;
X2_1 = X2;
X4_1 = X4;
X5_1 = X5;
X6_1 = X6;
}

void *func_2() {
int X1;
int X2;
int X3;
int X5;
int X6;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
X1 = 2;//event.Local

X2 = atomic_load_explicit(&mem2, memory_order_relaxed);//event.Load

atomic_store_explicit(&mem2, X1, memory_order_relaxed );//event.Store

if(X3 != 0){
goto Fail2;//event.CondJump
}

X5 = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

atomic_store_explicit(&mem1, X5, memory_order_relaxed );//event.Store

if(X3 != 0){
goto Fail2;//event.CondJump
}

if(True){
goto Exit2;//event.CondJump
}

Fail2://event.Label

X6 = 0;//event.Local

atomic_store_explicit(&mem0, X6, memory_order_relaxed );//event.Store

Exit2://event.Label

atomic_thread_fence(memory_order_seq_cst);
X1_2 = X1;
X2_2 = X2;
X3_2 = X3;
X5_2 = X5;
X6_2 = X6;
}

int main() {
atomic_init(&mem0, 1); //event.Init, 1);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_t thread_2;
pthread_create(&thread_2, NULL, &func_2, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
int x = atomic_load_explicit(&mem1, memory_order_relaxed);
int y = atomic_load_explicit(&mem2, memory_order_relaxed);
int ok = atomic_load_explicit(&mem0, memory_order_relaxed);
assert(((((((((ok == 1) && (x == 1)) && (y == 2)) && (X2_0 == 0)) && (X1_1 == 1)) && (X5_1 == 0)) && (X2_2 == 1)) && (X5_2 == 0)));
return 0;
}


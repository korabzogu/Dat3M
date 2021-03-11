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

extern void __VERIFIER_fence(char * str);
enum fence{After_atomic,Before_atomic,Isync,Lwsync,Mb,Mfence,Rcu_lock,Rcu_unlock,Rmb,Sync,Sync_rcu,Wmb,Ish };
int X8_0;
int X0_0;
int X1_0;
int X2_0;
int X3_0;
int X4_0;
int X5_0;
int X6_0;
int X7_0;
int X8_1;
int X0_1;
int X1_1;
int X2_1;
int X3_1;
int X4_1;
int X5_1;
int X6_1;
int X7_1;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
void *func_0() {
int X1;
int X2;
int X3;
int X5;
int X6;
int X7;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
X1 = 2;//event.Local

X2 = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

atomic_store_explicit(&mem1, X1, memory_order_relaxed );//event.Store

if((X3)!=(0)){
goto Fail0;//event.CondJump
}

X5 = 1;//event.Local

X6 = atomic_load_explicit(&mem2, memory_order_relaxed);//event.Load

atomic_store_explicit(&mem2, X5, memory_order_relaxed );//event.Store

if((X3)!=(0)){
goto Fail0;//event.CondJump
}

if(true/* BConst */){
goto Exit0;//event.CondJump
}

Fail0://event.Label

X7 = 0;//event.Local

atomic_store_explicit(&mem0, X7, memory_order_relaxed );//event.Store

Exit0://event.Label

atomic_thread_fence(memory_order_seq_cst);
X1_0 = X1;
X2_0 = X2;
X3_0 = X3;
X5_0 = X5;
X6_0 = X6;
X7_0 = X7;
}

void *func_1() {
int X1;
int X2;
int X3;
int X5;
int X6;
int X7;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
X1 = 2;//event.Local

X2 = atomic_load_explicit(&mem2, memory_order_relaxed);//event.Load

atomic_store_explicit(&mem2, X1, memory_order_relaxed );//event.Store

if((X3)!=(0)){
goto Fail1;//event.CondJump
}

X5 = 1;//event.Local

X6 = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

atomic_store_explicit(&mem1, X5, memory_order_relaxed );//event.Store

if((X3)!=(0)){
goto Fail1;//event.CondJump
}

if(true/* BConst */){
goto Exit1;//event.CondJump
}

Fail1://event.Label

X7 = 0;//event.Local

atomic_store_explicit(&mem0, X7, memory_order_relaxed );//event.Store

Exit1://event.Label

atomic_thread_fence(memory_order_seq_cst);
X1_1 = X1;
X2_1 = X2;
X3_1 = X3;
X5_1 = X5;
X6_1 = X6;
X7_1 = X7;
}

int main() {
atomic_init(&mem0, 1); //event.Init, 1);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int x = atomic_load_explicit(&mem1, memory_order_relaxed);
int y = atomic_load_explicit(&mem2, memory_order_relaxed);
int ok = atomic_load_explicit(&mem0, memory_order_relaxed);
assert(!(((((((ok == 1) && (x == 2)) && (y == 2)) && (X2_0 == 1)) && (X6_0 == 0)) && (X2_1 == 1)) && (X6_1 == 0)));
return 0;
}


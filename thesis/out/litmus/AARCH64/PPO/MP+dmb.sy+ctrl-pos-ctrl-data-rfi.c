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
int X0_0;
int X1_0;
int X2_0;
int X3_0;
int X8_1;
int X9_1;
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
atomic_int mem3;
void *func_0() {
int X0;
int X2;
//event.Skip

/*§Skip§*/
/*§Skip§*/
X0 = 2;//event.Local

atomic_store_explicit(&mem0, X0, memory_order_relaxed );//event.Store

// TODO: atomic_thread_fence(memory_order_release); DMB event.FenceOpt

X2 = 1;//event.Local

atomic_store_explicit(&mem1, X2, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
X0_0 = X0;
X2_0 = X2;
}

void *func_1() {
int X9;
int X0;
int X2;
int X4;
int X5;
int X7;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
X0 = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

if((X0)!=(0)){
goto LC00;//event.CondJump
}

LC00://event.Label

X2 = atomic_load_explicit(&mem2, memory_order_relaxed);//event.Load

X4 = atomic_load_explicit(&mem2, memory_order_relaxed);//event.Load

if((X4)!=(0)){
goto LC01;//event.CondJump
}

LC01://event.Label

X5 = atomic_load_explicit(&mem3, memory_order_relaxed);//event.Load

X7 = (X5 ^ X5) /* IEXPRBIN */;//event.Local

X7 = (X7 + 1) /* IEXPRBIN */;//event.Local

atomic_store_explicit(&mem0, X7, memory_order_relaxed );//event.Store

X9 = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
X9_1 = X9;
X0_1 = X0;
X2_1 = X2;
X4_1 = X4;
X5_1 = X5;
X7_1 = X7;
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
assert(((((x == 2) && (y == 1)) && (X0_1 == 1)) && (X9_1 == 1)));
return 0;
}


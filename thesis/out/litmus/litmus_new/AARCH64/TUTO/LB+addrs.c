/* File converted to C from litmus */
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
int X4_0;
int DUMMY_REG_2148_0;
int X0_1;
int X1_1;
int X2_1;
int X3_1;
int X4_1;
int DUMMY_REG_2149_1;
atomic_int mem0;
atomic_int mem1;
void *func_0() {
int X0;
int X2;
int X3;
int DUMMY_REG_2148;
//event.Skip

/*§Skip§*/
/*§Skip§*/
X0 = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

X2 = (X0 ^ X0) /* IEXPRBIN */;//event.Local

X3 = 1;//event.Local

DUMMY_REG_2148 = (mem1 + X2) /* IEXPRBIN */;//event.Local

atomic_store_explicit(&DUMMY_REG_2148, X3, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
X0_0 = X0;
X2_0 = X2;
X3_0 = X3;
DUMMY_REG_2148_0 = DUMMY_REG_2148;
}

void *func_1() {
int X0;
int X2;
int X3;
int DUMMY_REG_2149;
//event.Skip

/*§Skip§*/
/*§Skip§*/
X0 = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

X2 = (X0 ^ X0) /* IEXPRBIN */;//event.Local

X3 = 1;//event.Local

DUMMY_REG_2149 = (mem0 + X2) /* IEXPRBIN */;//event.Local

atomic_store_explicit(&DUMMY_REG_2149, X3, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
X0_1 = X0;
X2_1 = X2;
X3_1 = X3;
DUMMY_REG_2149_1 = DUMMY_REG_2149;
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
assert(!((X0_0 == 1) && (X0_1 == 1)));
return 0;
}


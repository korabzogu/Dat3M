/*<customTag0> File converted to C from litmus </customTag>*/
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
int DUMMY_REG_695_1;
int DUMMY_REG_696_1;
int X10_1;
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
int X0;
int X2;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag0>X0</customTag> = 1;//event.Local

atomic_store_explicit(&<customTag0>X1</customTag>, <customTag0>X0</customTag>, memory_order_relaxed );//event.Store

// TODO: atomic_thread_fence(memory_order_release); DMB event.FenceOpt

<customTag0>X2</customTag> = 1;//event.Local

atomic_store_explicit(&<customTag0>X3</customTag>, <customTag0>X2</customTag>, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
X0_0 = X0;
X2_0 = X2;
}

void *func_1() {
int X8;
int X9;
int DUMMY_REG_695;
int DUMMY_REG_696;
int X0;
int X2;
int X3;
int X4;
int X6;
int X7;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag1>X0</customTag> = atomic_load_explicit(&<customTag1>X1</customTag>, memory_order_relaxed);//event.Load

<customTag1>X2</customTag> = atomic_load_explicit(&<customTag1>X1</customTag>, memory_order_relaxed);//event.Load

<customTag1>X3</customTag> = (<customTag1>X2</customTag> ^ <customTag1>X2</customTag>) /* IEXPRBIN */;//event.Local

<customTag1>DUMMY_REG_695</customTag> = (<customTag1>X5</customTag> + <customTag1>X3</customTag>) /* IEXPRBIN */;//event.Local

<customTag1>X4</customTag> = atomic_load_explicit(&<customTag1>DUMMY_REG_695</customTag>, memory_order_relaxed);//event.Load

<customTag1>X6</customTag> = 1;//event.Local

atomic_store_explicit(&<customTag1>X5</customTag>, <customTag1>X6</customTag>, memory_order_relaxed );//event.Store

<customTag1>X7</customTag> = atomic_load_explicit(&<customTag1>X5</customTag>, memory_order_relaxed);//event.Load

<customTag1>X8</customTag> = (<customTag1>X7</customTag> ^ <customTag1>X7</customTag>) /* IEXPRBIN */;//event.Local

<customTag1>DUMMY_REG_696</customTag> = (<customTag1>X10</customTag> + <customTag1>X8</customTag>) /* IEXPRBIN */;//event.Local

<customTag1>X9</customTag> = atomic_load_explicit(&<customTag1>DUMMY_REG_696</customTag>, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
X8_1 = X8;
X9_1 = X9;
DUMMY_REG_695_1 = DUMMY_REG_695;
DUMMY_REG_696_1 = DUMMY_REG_696;
X0_1 = X0;
X2_1 = X2;
X3_1 = X3;
X4_1 = X4;
X6_1 = X6;
X7_1 = X7;
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
assert(!((((((((x == 1) && (y == 1)) && (z == 1)) && (<customAssertionTag1>X0</customAssertionTag> == 1)) && (<customAssertionTag1>X2</customAssertionTag> == 1)) && (<customAssertionTag1>X4</customAssertionTag> == 0)) && (<customAssertionTag1>X7</customAssertionTag> == 1)) && (<customAssertionTag1>X9</customAssertionTag> == 0)));
return 0;
}


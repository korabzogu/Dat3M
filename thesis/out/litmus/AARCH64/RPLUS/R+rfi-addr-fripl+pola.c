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
int DUMMY_REG_2172_0;
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
void *func_0() {
int DUMMY_REG_2172;
int X0;
int X2;
int X3;
int X4;
int X6;
int X7;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag0>X0</customTag> = 1;//event.Local

atomic_store_explicit(&<customTag0>X1</customTag>, <customTag0>X0</customTag>, memory_order_relaxed );//event.Store

<customTag0>X2</customTag> = atomic_load_explicit(&<customTag0>X1</customTag>, memory_order_relaxed);//event.Load

<customTag0>X3</customTag> = (<customTag0>X2</customTag> ^ <customTag0>X2</customTag>) /* IEXPRBIN */;//event.Local

<customTag0>DUMMY_REG_2172</customTag> = (<customTag0>X5</customTag> + <customTag0>X3</customTag>) /* IEXPRBIN */;//event.Local

<customTag0>X4</customTag> = atomic_load_explicit(&<customTag0>DUMMY_REG_2172</customTag>, memory_order_relaxed);//event.Load

<customTag0>X6</customTag> = 1;//event.Local

atomic_store_explicit(&<customTag0>X5</customTag>, <customTag0>X6</customTag>, memory_order_release );//event.Store

<customTag0>X7</customTag> = atomic_load_explicit(&<customTag0>X5</customTag>, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
DUMMY_REG_2172_0 = DUMMY_REG_2172;
X0_0 = X0;
X2_0 = X2;
X3_0 = X3;
X4_0 = X4;
X6_0 = X6;
X7_0 = X7;
}

void *func_1() {
int X0;
int X2;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>X0</customTag> = 2;//event.Local

atomic_store_explicit(&<customTag1>X1</customTag>, <customTag1>X0</customTag>, memory_order_release );//event.Store

<customTag1>X2</customTag> = atomic_load_explicit(&<customTag1>X3</customTag>, memory_order_acquire);//event.Load

atomic_thread_fence(memory_order_seq_cst);
X0_1 = X0;
X2_1 = X2;
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
assert(!((((((x == 1) && (y == 2)) && (<customAssertionTag0>X7</customAssertionTag> == 2)) && (<customAssertionTag0>X2</customAssertionTag> == 1)) && (<customAssertionTag0>X4</customAssertionTag> == 0)) && (<customAssertionTag1>X2</customAssertionTag> == 0)));
return 0;
}


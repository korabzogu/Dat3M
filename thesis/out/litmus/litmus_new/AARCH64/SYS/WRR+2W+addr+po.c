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
int X0_1;
int X1_1;
int X2_1;
int DUMMY_REG_8_1;
int X3_1;
int X4_1;
int X0_2;
int X1_2;
int X2_2;
int X3_2;
atomic_int mem0;
atomic_int mem1;
void *func_0() {
int X0;
//event.Skip

/*§Skip§*/
<customTag0>X0</customTag> = 2;//event.Local

atomic_store_explicit(&<customTag0>X1</customTag>, <customTag0>X0</customTag>, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
X0_0 = X0;
}

void *func_1() {
int X0;
int X2;
int DUMMY_REG_8;
int X3;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>X0</customTag> = atomic_load_explicit(&<customTag1>X1</customTag>, memory_order_relaxed);//event.Load

<customTag1>X2</customTag> = (<customTag1>X0</customTag> ^ <customTag1>X0</customTag>) /* IEXPRBIN */;//event.Local

<customTag1>DUMMY_REG_8</customTag> = (<customTag1>X4</customTag> + <customTag1>X2</customTag>) /* IEXPRBIN */;//event.Local

<customTag1>X3</customTag> = atomic_load_explicit(&<customTag1>DUMMY_REG_8</customTag>, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
X0_1 = X0;
X2_1 = X2;
DUMMY_REG_8_1 = DUMMY_REG_8;
X3_1 = X3;
}

void *func_2() {
int X0;
int X2;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag2>X0</customTag> = 1;//event.Local

atomic_store_explicit(&<customTag2>X1</customTag>, <customTag2>X0</customTag>, memory_order_relaxed );//event.Store

<customTag2>X2</customTag> = 1;//event.Local

atomic_store_explicit(&<customTag2>X3</customTag>, <customTag2>X2</customTag>, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
X0_2 = X0;
X2_2 = X2;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_t thread_2;
pthread_create(&thread_2, NULL, &func_2, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
assert(!(((x == 2) && (<customAssertionTag1>X0</customAssertionTag> == 2)) && (<customAssertionTag1>X3</customAssertionTag> == 0)));
return 0;
}


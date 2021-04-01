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
int X10_1;
int X12_1;
int X0_1;
int DUMMY_REG_231_1;
int X1_1;
int DUMMY_REG_232_1;
int X11_1;
int X2_1;
int X3_1;
int X4_1;
int X5_1;
int X6_1;
int X7_1;
int X0_2;
int X1_2;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
atomic_int mem3;
atomic_int mem4;
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
int X0;
int DUMMY_REG_231;
int DUMMY_REG_232;
int X11;
int X2;
int X4;
int X5;
int X7;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag1>X0</customTag> = atomic_load_explicit(&<customTag1>X1</customTag>, memory_order_relaxed);//event.Load

if((<customTag1>X0</customTag>)!=(0)){
goto LC00;//event.CondJump
}

LC00://event.Label

<customTag1>X2</customTag> = atomic_load_explicit(&<customTag1>X3</customTag>, memory_order_relaxed);//event.Load

<customTag1>X4</customTag> = (<customTag1>X2</customTag> ^ <customTag1>X2</customTag>) /* IEXPRBIN */;//event.Local

<customTag1>X5</customTag> = 1;//event.Local

<customTag1>DUMMY_REG_231</customTag> = (<customTag1>X6</customTag> + <customTag1>X4</customTag>) /* IEXPRBIN */;//event.Local

atomic_store_explicit(&<customTag1>DUMMY_REG_231</customTag>, <customTag1>X5</customTag>, memory_order_relaxed );//event.Store

<customTag1>X7</customTag> = atomic_load_explicit(&<customTag1>X6</customTag>, memory_order_relaxed);//event.Load

<customTag1>X8</customTag> = (<customTag1>X7</customTag> ^ <customTag1>X7</customTag>) /* IEXPRBIN */;//event.Local

<customTag1>DUMMY_REG_232</customTag> = (<customTag1>X10</customTag> + <customTag1>X8</customTag>) /* IEXPRBIN */;//event.Local

<customTag1>X9</customTag> = atomic_load_explicit(&<customTag1>DUMMY_REG_232</customTag>, memory_order_relaxed);//event.Load

if((<customTag1>X9</customTag>)!=(0)){
goto LC01;//event.CondJump
}

LC01://event.Label

// TODO: atomic_thread_fence(memory_order_release); ISB event.FenceOpt

<customTag1>X11</customTag> = atomic_load_explicit(&<customTag1>X12</customTag>, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
X8_1 = X8;
X9_1 = X9;
X0_1 = X0;
DUMMY_REG_231_1 = DUMMY_REG_231;
DUMMY_REG_232_1 = DUMMY_REG_232;
X11_1 = X11;
X2_1 = X2;
X4_1 = X4;
X5_1 = X5;
X7_1 = X7;
}

void *func_2() {
int X0;
//event.Skip

/*§Skip§*/
<customTag2>X0</customTag> = 2;//event.Local

atomic_store_explicit(&<customTag2>X1</customTag>, <customTag2>X0</customTag>, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
X0_2 = X0;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
atomic_init(&mem3, 0); //event.Init, 0);
atomic_init(&mem4, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_t thread_2;
pthread_create(&thread_2, NULL, &func_2, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
int a = atomic_load_explicit(&mem3, memory_order_relaxed);
int b = atomic_load_explicit(&mem4, memory_order_relaxed);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
int z = atomic_load_explicit(&mem2, memory_order_relaxed);
assert(!((((((a == 2) && (x == 1)) && (y == 1)) && (<customAssertionTag1>X0</customAssertionTag> == 1)) && (<customAssertionTag1>X7</customAssertionTag> == 2)) && (<customAssertionTag1>X11</customAssertionTag> == 0)));
return 0;
}


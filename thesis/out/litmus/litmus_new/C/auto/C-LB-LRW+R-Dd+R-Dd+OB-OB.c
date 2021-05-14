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
int r3_0;
int x1_0;
int x2_0;
int u0_0;
int r1_0;
int r3_1;
int x1_1;
int x3_1;
int DUMMY_REG_2359_1;
int r1_1;
int DUMMY_REG_2360_2;
int x2_2;
int r1_2;
int x3_3;
int u0_3;
int r1_3;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
atomic_int mem3;
atomic_int mem4;
atomic_int mem5;
void *func_0() {
int r3;
int x1;
int x2;
int u0;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag0>r3</customTag> = <customTag0>x2</customTag>;//event.Local

<customTag0>r1</customTag> = READ_ONCE(<customTag0>u0</customTag>);

atomic_store_explicit(&<customTag0>x1</customTag>, <customTag0>r3</customTag>, memory_order_release );//event.Store

atomic_thread_fence(memory_order_seq_cst);
r3_0 = r3;
x1_0 = x1;
x2_0 = x2;
u0_0 = u0;
r1_0 = r1;
}

void *func_1() {
int r3;
int x1;
int x3;
int DUMMY_REG_2359;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>r3</customTag> = <customTag1>x3</customTag>;//event.Local

<customTag1>DUMMY_REG_2359</customTag> = atomic_load_explicit(&<customTag1>x1</customTag>, memory_order_relaxed);//event.Load

<customTag1>r1</customTag> = <customTag1>DUMMY_REG_2359</customTag>;//event.Local

atomic_store_explicit(&<customTag1>r1</customTag>, <customTag1>r3</customTag>, memory_order_release );//event.Store

atomic_thread_fence(memory_order_seq_cst);
r3_1 = r3;
x1_1 = x1;
x3_1 = x3;
DUMMY_REG_2359_1 = DUMMY_REG_2359;
r1_1 = r1;
}

void *func_2() {
int DUMMY_REG_2360;
int x2;
int r1;
//event.Skip

/*§Skip§*/
<customTag2>DUMMY_REG_2360</customTag> = atomic_load_explicit(&<customTag2>x2</customTag>, memory_order_relaxed);//event.Load

<customTag2>r1</customTag> = <customTag2>DUMMY_REG_2360</customTag>;//event.Local

__VERIFIER_fence(Mb);
WRITE_ONCE(&<customTag2>r1</customTag>, 1);
atomic_thread_fence(memory_order_seq_cst);
DUMMY_REG_2360_2 = DUMMY_REG_2360;
x2_2 = x2;
r1_2 = r1;
}

void *func_3() {
int x3;
int u0;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag3>r1</customTag> = READ_ONCE(<customTag3>x3</customTag>);

__VERIFIER_fence(Mb);
WRITE_ONCE(&<customTag3>u0</customTag>, 1);
atomic_thread_fence(memory_order_seq_cst);
x3_3 = x3;
u0_3 = u0;
r1_3 = r1;
}

int main() {
atomic_init(&mem0, &mem1); //event.Init, mem1);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, &mem3); //event.Init, mem3);
atomic_init(&mem3, 0); //event.Init, 0);
atomic_init(&mem4, 0); //event.Init, 0);
atomic_init(&mem5, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_t thread_2;
pthread_create(&thread_2, NULL, &func_2, NULL);
pthread_t thread_3;
pthread_create(&thread_3, NULL, &func_3, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
pthread_join(thread_3, NULL);
int y1 = atomic_load_explicit(&mem1, memory_order_relaxed);
int x1 = atomic_load_explicit(&mem0, memory_order_relaxed);
int y2 = atomic_load_explicit(&mem3, memory_order_relaxed);
int x2 = atomic_load_explicit(&mem2, memory_order_relaxed);
int u0 = atomic_load_explicit(&mem4, memory_order_relaxed);
int x3 = atomic_load_explicit(&mem5, memory_order_relaxed);
assert(!((((<customAssertionTag0>r1</customAssertionTag> == 1) && (<customAssertionTag1>r1</customAssertionTag> == mem2)) && (<customAssertionTag2>r1</customAssertionTag> == mem5)) && (<customAssertionTag3>r1</customAssertionTag> == 1)));
return 0;
}


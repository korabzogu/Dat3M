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
int x0_0;
int x1_0;
int x2_0;
int r1_0;
int r4_1;
int DUMMY_REG_3174_1;
int x1_1;
int y2_1;
int r1_1;
int x2_2;
int x3_2;
int r1_2;
int x3_3;
int x4_3;
int r1_3;
int x4_4;
int x5_4;
int r1_4;
int x0_5;
int x5_5;
int r1_5;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
atomic_int mem3;
atomic_int mem4;
atomic_int mem5;
atomic_int mem6;
void *func_0() {
int r3;
int x0;
int x1;
int x2;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag0>r3</customTag> = <customTag0>x2</customTag>;//event.Local

__VERIFIER_fence(Rcu_lock);
<customTag0>r1</customTag> = READ_ONCE(<customTag0>x0</customTag>);

atomic_store_explicit(&<customTag0>x1</customTag>, <customTag0>r3</customTag>, memory_order_release );//event.Store

__VERIFIER_fence(Rcu_unlock);
atomic_thread_fence(memory_order_seq_cst);
r3_0 = r3;
x0_0 = x0;
x1_0 = x1;
x2_0 = x2;
r1_0 = r1;
}

void *func_1() {
int r4;
int DUMMY_REG_3174;
int x1;
int y2;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>r4</customTag> = <customTag1>y2</customTag>;//event.Local

<customTag1>DUMMY_REG_3174</customTag> = atomic_load_explicit(&<customTag1>x1</customTag>, memory_order_relaxed);//event.Load

<customTag1>r1</customTag> = <customTag1>DUMMY_REG_3174</customTag>;//event.Local

<customTag1>r4</customTag> = (<customTag1>r1</customTag>)!=(<customTag1>r4</customTag>);//event.Local

if(<customTag1>r4</customTag>) {
WRITE_ONCE(&<customTag1>r1</customTag>, 1);
} else {}

WRITE_ONCE(&<customTag1>r1</customTag>, 1);
//event.Skip

//event.Skip

atomic_thread_fence(memory_order_seq_cst);
r4_1 = r4;
DUMMY_REG_3174_1 = DUMMY_REG_3174;
x1_1 = x1;
y2_1 = y2;
r1_1 = r1;
}

void *func_2() {
int x2;
int x3;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
__VERIFIER_fence(Rcu_lock);
<customTag2>r1</customTag> = READ_ONCE(<customTag2>x2</customTag>);

WRITE_ONCE(&<customTag2>x3</customTag>, 1);
__VERIFIER_fence(Rcu_unlock);
atomic_thread_fence(memory_order_seq_cst);
x2_2 = x2;
x3_2 = x3;
r1_2 = r1;
}

void *func_3() {
int x3;
int x4;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
__VERIFIER_fence(Rcu_lock);
<customTag3>r1</customTag> = READ_ONCE(<customTag3>x3</customTag>);

WRITE_ONCE(&<customTag3>x4</customTag>, 1);
__VERIFIER_fence(Rcu_unlock);
atomic_thread_fence(memory_order_seq_cst);
x3_3 = x3;
x4_3 = x4;
r1_3 = r1;
}

void *func_4() {
int x4;
int x5;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
__VERIFIER_fence(Rcu_lock);
<customTag4>r1</customTag> = READ_ONCE(<customTag4>x4</customTag>);

WRITE_ONCE(&<customTag4>x5</customTag>, 1);
__VERIFIER_fence(Rcu_unlock);
atomic_thread_fence(memory_order_seq_cst);
x4_4 = x4;
x5_4 = x5;
r1_4 = r1;
}

void *func_5() {
int x0;
int x5;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
__VERIFIER_fence(Rcu_lock);
<customTag5>r1</customTag> = READ_ONCE(<customTag5>x5</customTag>);

WRITE_ONCE(&<customTag5>x0</customTag>, 1);
__VERIFIER_fence(Rcu_unlock);
atomic_thread_fence(memory_order_seq_cst);
x0_5 = x0;
x5_5 = x5;
r1_5 = r1;
}

int main() {
atomic_init(&mem0, &mem1); //event.Init, mem1);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
atomic_init(&mem3, 0); //event.Init, 0);
atomic_init(&mem4, 0); //event.Init, 0);
atomic_init(&mem5, 0); //event.Init, 0);
atomic_init(&mem6, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_t thread_2;
pthread_create(&thread_2, NULL, &func_2, NULL);
pthread_t thread_3;
pthread_create(&thread_3, NULL, &func_3, NULL);
pthread_t thread_4;
pthread_create(&thread_4, NULL, &func_4, NULL);
pthread_t thread_5;
pthread_create(&thread_5, NULL, &func_5, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
pthread_join(thread_3, NULL);
pthread_join(thread_4, NULL);
pthread_join(thread_5, NULL);
int x0 = atomic_load_explicit(&mem2, memory_order_relaxed);
int x1 = atomic_load_explicit(&mem0, memory_order_relaxed);
int y2 = atomic_load_explicit(&mem1, memory_order_relaxed);
int x2 = atomic_load_explicit(&mem3, memory_order_relaxed);
int x3 = atomic_load_explicit(&mem4, memory_order_relaxed);
int x4 = atomic_load_explicit(&mem5, memory_order_relaxed);
int x5 = atomic_load_explicit(&mem6, memory_order_relaxed);
assert(!((((((<customAssertionTag0>r1</customAssertionTag> == 1) && (<customAssertionTag1>r1</customAssertionTag> == mem3)) && (<customAssertionTag2>r1</customAssertionTag> == 1)) && (<customAssertionTag3>r1</customAssertionTag> == 1)) && (<customAssertionTag4>r1</customAssertionTag> == 1)) && (<customAssertionTag5>r1</customAssertionTag> == 1)));
return 0;
}


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
int x0_0;
int x1_0;
int r1_0;
int x1_1;
int x2_1;
int r1_1;
int x2_2;
int x3_2;
int r1_2;
int r3_3;
int x3_3;
int x4_3;
int x5_3;
int r1_3;
int r4_4;
int DUMMY_REG_2418_4;
int x4_4;
int y5_4;
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
int x0;
int x1;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag0>r1</customTag> = READ_ONCE(<customTag0>x0</customTag>);

__VERIFIER_fence(Sync_rcu);
WRITE_ONCE(&<customTag0>x1</customTag>, 1);
atomic_thread_fence(memory_order_seq_cst);
x0_0 = x0;
x1_0 = x1;
r1_0 = r1;
}

void *func_1() {
int x1;
int x2;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>r1</customTag> = READ_ONCE(<customTag1>x1</customTag>);

__VERIFIER_fence(Sync_rcu);
WRITE_ONCE(&<customTag1>x2</customTag>, 1);
atomic_thread_fence(memory_order_seq_cst);
x1_1 = x1;
x2_1 = x2;
r1_1 = r1;
}

void *func_2() {
int x2;
int x3;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag2>r1</customTag> = READ_ONCE(<customTag2>x2</customTag>);

__VERIFIER_fence(Sync_rcu);
WRITE_ONCE(&<customTag2>x3</customTag>, 1);
atomic_thread_fence(memory_order_seq_cst);
x2_2 = x2;
x3_2 = x3;
r1_2 = r1;
}

void *func_3() {
int r3;
int x3;
int x4;
int x5;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag3>r3</customTag> = <customTag3>x5</customTag>;//event.Local

__VERIFIER_fence(Rcu_lock);
<customTag3>r1</customTag> = READ_ONCE(<customTag3>x3</customTag>);

atomic_store_explicit(&<customTag3>x4</customTag>, <customTag3>r3</customTag>, memory_order_release );//event.Store

__VERIFIER_fence(Rcu_unlock);
atomic_thread_fence(memory_order_seq_cst);
r3_3 = r3;
x3_3 = x3;
x4_3 = x4;
x5_3 = x5;
r1_3 = r1;
}

void *func_4() {
int r4;
int DUMMY_REG_2418;
int x4;
int y5;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag4>r4</customTag> = <customTag4>y5</customTag>;//event.Local

__VERIFIER_fence(Rcu_lock);
<customTag4>DUMMY_REG_2418</customTag> = atomic_load_explicit(&<customTag4>x4</customTag>, memory_order_relaxed);//event.Load

<customTag4>r1</customTag> = <customTag4>DUMMY_REG_2418</customTag>;//event.Local

<customTag4>r4</customTag> = (<customTag4>r1</customTag>)!=(<customTag4>r4</customTag>);//event.Local

if(<customTag4>r4</customTag>) {
WRITE_ONCE(&<customTag4>r1</customTag>, 1);
} else {}

WRITE_ONCE(&<customTag4>r1</customTag>, 1);
//event.Skip

//event.Skip

__VERIFIER_fence(Rcu_unlock);
atomic_thread_fence(memory_order_seq_cst);
r4_4 = r4;
DUMMY_REG_2418_4 = DUMMY_REG_2418;
x4_4 = x4;
y5_4 = y5;
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
int x1 = atomic_load_explicit(&mem3, memory_order_relaxed);
int x2 = atomic_load_explicit(&mem4, memory_order_relaxed);
int x3 = atomic_load_explicit(&mem5, memory_order_relaxed);
int x4 = atomic_load_explicit(&mem0, memory_order_relaxed);
int y5 = atomic_load_explicit(&mem1, memory_order_relaxed);
int x5 = atomic_load_explicit(&mem6, memory_order_relaxed);
assert(!((((((<customAssertionTag0>r1</customAssertionTag> == 1) && (<customAssertionTag1>r1</customAssertionTag> == 1)) && (<customAssertionTag2>r1</customAssertionTag> == 1)) && (<customAssertionTag3>r1</customAssertionTag> == 1)) && (<customAssertionTag4>r1</customAssertionTag> == mem6)) && (<customAssertionTag5>r1</customAssertionTag> == 1)));
return 0;
}


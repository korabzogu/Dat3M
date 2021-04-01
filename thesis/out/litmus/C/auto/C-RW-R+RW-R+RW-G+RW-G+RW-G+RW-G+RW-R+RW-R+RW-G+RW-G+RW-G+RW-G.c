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
int x3_3;
int x4_3;
int r1_3;
int x4_4;
int x5_4;
int r1_4;
int x5_5;
int x6_5;
int r1_5;
int x6_6;
int x7_6;
int r1_6;
int x8_7;
int x7_7;
int r1_7;
int x8_8;
int x9_8;
int r1_8;
int x9_9;
int x10_9;
int r1_9;
int x10_10;
int x11_10;
int r1_10;
int x0_11;
int x11_11;
int r1_11;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
atomic_int mem3;
atomic_int mem4;
atomic_int mem5;
atomic_int mem6;
atomic_int mem7;
atomic_int mem8;
atomic_int mem9;
atomic_int mem10;
atomic_int mem11;
void *func_0() {
int x0;
int x1;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
__VERIFIER_fence(Rcu_lock);
<customTag0>r1</customTag> = READ_ONCE(<customTag0>x0</customTag>);

WRITE_ONCE(&<customTag0>x1</customTag>, 1);
__VERIFIER_fence(Rcu_unlock);
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
__VERIFIER_fence(Rcu_lock);
<customTag1>r1</customTag> = READ_ONCE(<customTag1>x1</customTag>);

WRITE_ONCE(&<customTag1>x2</customTag>, 1);
__VERIFIER_fence(Rcu_unlock);
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
int x3;
int x4;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag3>r1</customTag> = READ_ONCE(<customTag3>x3</customTag>);

__VERIFIER_fence(Sync_rcu);
WRITE_ONCE(&<customTag3>x4</customTag>, 1);
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
<customTag4>r1</customTag> = READ_ONCE(<customTag4>x4</customTag>);

__VERIFIER_fence(Sync_rcu);
WRITE_ONCE(&<customTag4>x5</customTag>, 1);
atomic_thread_fence(memory_order_seq_cst);
x4_4 = x4;
x5_4 = x5;
r1_4 = r1;
}

void *func_5() {
int x5;
int x6;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag5>r1</customTag> = READ_ONCE(<customTag5>x5</customTag>);

__VERIFIER_fence(Sync_rcu);
WRITE_ONCE(&<customTag5>x6</customTag>, 1);
atomic_thread_fence(memory_order_seq_cst);
x5_5 = x5;
x6_5 = x6;
r1_5 = r1;
}

void *func_6() {
int x6;
int x7;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
__VERIFIER_fence(Rcu_lock);
<customTag6>r1</customTag> = READ_ONCE(<customTag6>x6</customTag>);

WRITE_ONCE(&<customTag6>x7</customTag>, 1);
__VERIFIER_fence(Rcu_unlock);
atomic_thread_fence(memory_order_seq_cst);
x6_6 = x6;
x7_6 = x7;
r1_6 = r1;
}

void *func_7() {
int x8;
int x7;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
__VERIFIER_fence(Rcu_lock);
<customTag7>r1</customTag> = READ_ONCE(<customTag7>x7</customTag>);

WRITE_ONCE(&<customTag7>x8</customTag>, 1);
__VERIFIER_fence(Rcu_unlock);
atomic_thread_fence(memory_order_seq_cst);
x8_7 = x8;
x7_7 = x7;
r1_7 = r1;
}

void *func_8() {
int x8;
int x9;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag8>r1</customTag> = READ_ONCE(<customTag8>x8</customTag>);

__VERIFIER_fence(Sync_rcu);
WRITE_ONCE(&<customTag8>x9</customTag>, 1);
atomic_thread_fence(memory_order_seq_cst);
x8_8 = x8;
x9_8 = x9;
r1_8 = r1;
}

void *func_9() {
int x9;
int x10;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag9>r1</customTag> = READ_ONCE(<customTag9>x9</customTag>);

__VERIFIER_fence(Sync_rcu);
WRITE_ONCE(&<customTag9>x10</customTag>, 1);
atomic_thread_fence(memory_order_seq_cst);
x9_9 = x9;
x10_9 = x10;
r1_9 = r1;
}

void *func_10() {
int x10;
int x11;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag10>r1</customTag> = READ_ONCE(<customTag10>x10</customTag>);

__VERIFIER_fence(Sync_rcu);
WRITE_ONCE(&<customTag10>x11</customTag>, 1);
atomic_thread_fence(memory_order_seq_cst);
x10_10 = x10;
x11_10 = x11;
r1_10 = r1;
}

void *func_11() {
int x0;
int x11;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag11>r1</customTag> = READ_ONCE(<customTag11>x11</customTag>);

__VERIFIER_fence(Sync_rcu);
WRITE_ONCE(&<customTag11>x0</customTag>, 1);
atomic_thread_fence(memory_order_seq_cst);
x0_11 = x0;
x11_11 = x11;
r1_11 = r1;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
atomic_init(&mem3, 0); //event.Init, 0);
atomic_init(&mem4, 0); //event.Init, 0);
atomic_init(&mem5, 0); //event.Init, 0);
atomic_init(&mem6, 0); //event.Init, 0);
atomic_init(&mem7, 0); //event.Init, 0);
atomic_init(&mem8, 0); //event.Init, 0);
atomic_init(&mem9, 0); //event.Init, 0);
atomic_init(&mem10, 0); //event.Init, 0);
atomic_init(&mem11, 0); //event.Init, 0);
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
pthread_t thread_6;
pthread_create(&thread_6, NULL, &func_6, NULL);
pthread_t thread_7;
pthread_create(&thread_7, NULL, &func_7, NULL);
pthread_t thread_8;
pthread_create(&thread_8, NULL, &func_8, NULL);
pthread_t thread_9;
pthread_create(&thread_9, NULL, &func_9, NULL);
pthread_t thread_10;
pthread_create(&thread_10, NULL, &func_10, NULL);
pthread_t thread_11;
pthread_create(&thread_11, NULL, &func_11, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
pthread_join(thread_3, NULL);
pthread_join(thread_4, NULL);
pthread_join(thread_5, NULL);
pthread_join(thread_6, NULL);
pthread_join(thread_7, NULL);
pthread_join(thread_8, NULL);
pthread_join(thread_9, NULL);
pthread_join(thread_10, NULL);
pthread_join(thread_11, NULL);
int x8 = atomic_load_explicit(&mem8, memory_order_relaxed);
int x9 = atomic_load_explicit(&mem9, memory_order_relaxed);
int x10 = atomic_load_explicit(&mem10, memory_order_relaxed);
int x0 = atomic_load_explicit(&mem0, memory_order_relaxed);
int x1 = atomic_load_explicit(&mem1, memory_order_relaxed);
int x11 = atomic_load_explicit(&mem11, memory_order_relaxed);
int x2 = atomic_load_explicit(&mem2, memory_order_relaxed);
int x3 = atomic_load_explicit(&mem3, memory_order_relaxed);
int x4 = atomic_load_explicit(&mem4, memory_order_relaxed);
int x5 = atomic_load_explicit(&mem5, memory_order_relaxed);
int x6 = atomic_load_explicit(&mem6, memory_order_relaxed);
int x7 = atomic_load_explicit(&mem7, memory_order_relaxed);
assert(!((((((((((((<customAssertionTag0>r1</customAssertionTag> == 1) && (<customAssertionTag1>r1</customAssertionTag> == 1)) && (<customAssertionTag2>r1</customAssertionTag> == 1)) && (<customAssertionTag3>r1</customAssertionTag> == 1)) && (<customAssertionTag4>r1</customAssertionTag> == 1)) && (<customAssertionTag5>r1</customAssertionTag> == 1)) && (<customAssertionTag6>r1</customAssertionTag> == 1)) && (<customAssertionTag7>r1</customAssertionTag> == 1)) && (<customAssertionTag8>r1</customAssertionTag> == 1)) && (<customAssertionTag9>r1</customAssertionTag> == 1)) && (<customAssertionTag10>r1</customAssertionTag> == 1)) && (<customAssertionTag11>r1</customAssertionTag> == 1)));
return 0;
}


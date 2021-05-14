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
int a_0;
int b_0;
int b_1;
int c_1;
int r1_1;
int r2_2;
int c_2;
int d_2;
int r3_3;
int d_3;
int e_3;
int r4_4;
int e_4;
int f_4;
int a_5;
int r5_5;
int r6_5;
int f_5;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
atomic_int mem3;
atomic_int mem4;
atomic_int mem5;
void *func_0() {
int a;
int b;
//event.Skip

/*§Skip§*/
/*§Skip§*/
WRITE_ONCE(&<customTag0>a</customTag>, 1);
__VERIFIER_fence(Sync_rcu);
WRITE_ONCE(&<customTag0>b</customTag>, 1);
atomic_thread_fence(memory_order_seq_cst);
a_0 = a;
b_0 = b;
}

void *func_1() {
int b;
int c;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>r1</customTag> = READ_ONCE(<customTag1>b</customTag>);

__VERIFIER_fence(Sync_rcu);
WRITE_ONCE(&<customTag1>c</customTag>, 1);
atomic_thread_fence(memory_order_seq_cst);
b_1 = b;
c_1 = c;
r1_1 = r1;
}

void *func_2() {
int r2;
int c;
int d;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag2>r2</customTag> = READ_ONCE(<customTag2>c</customTag>);

__VERIFIER_fence(Sync_rcu);
WRITE_ONCE(&<customTag2>d</customTag>, 1);
atomic_thread_fence(memory_order_seq_cst);
r2_2 = r2;
c_2 = c;
d_2 = d;
}

void *func_3() {
int r3;
int d;
int e;
//event.Skip

/*§Skip§*/
/*§Skip§*/
__VERIFIER_fence(Rcu_lock);
<customTag3>r3</customTag> = READ_ONCE(<customTag3>d</customTag>);

WRITE_ONCE(&<customTag3>e</customTag>, 1);
__VERIFIER_fence(Rcu_unlock);
atomic_thread_fence(memory_order_seq_cst);
r3_3 = r3;
d_3 = d;
e_3 = e;
}

void *func_4() {
int r4;
int e;
int f;
//event.Skip

/*§Skip§*/
/*§Skip§*/
__VERIFIER_fence(Rcu_lock);
<customTag4>r4</customTag> = READ_ONCE(<customTag4>e</customTag>);

WRITE_ONCE(&<customTag4>f</customTag>, 1);
__VERIFIER_fence(Rcu_unlock);
atomic_thread_fence(memory_order_seq_cst);
r4_4 = r4;
e_4 = e;
f_4 = f;
}

void *func_5() {
int a;
int r5;
int r6;
int f;
//event.Skip

/*§Skip§*/
/*§Skip§*/
__VERIFIER_fence(Rcu_lock);
<customTag5>r5</customTag> = READ_ONCE(<customTag5>f</customTag>);

<customTag5>r6</customTag> = READ_ONCE(<customTag5>a</customTag>);

__VERIFIER_fence(Rcu_unlock);
atomic_thread_fence(memory_order_seq_cst);
a_5 = a;
r5_5 = r5;
r6_5 = r6;
f_5 = f;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
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
int a = atomic_load_explicit(&mem0, memory_order_relaxed);
int b = atomic_load_explicit(&mem1, memory_order_relaxed);
int c = atomic_load_explicit(&mem2, memory_order_relaxed);
int d = atomic_load_explicit(&mem3, memory_order_relaxed);
int e = atomic_load_explicit(&mem4, memory_order_relaxed);
int f = atomic_load_explicit(&mem5, memory_order_relaxed);
assert(!((((((<customAssertionTag1>r1</customAssertionTag> == 1) && (<customAssertionTag2>r2</customAssertionTag> == 1)) && (<customAssertionTag3>r3</customAssertionTag> == 1)) && (<customAssertionTag4>r4</customAssertionTag> == 1)) && (<customAssertionTag5>r5</customAssertionTag> == 1)) && (<customAssertionTag5>r6</customAssertionTag> == 0)));
return 0;
}


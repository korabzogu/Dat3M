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
int c_0;
int v_0;
int w_0;
int x_0;
int y_0;
int r1_0;
int r2_1;
int r3_1;
int r4_1;
int c_1;
int v_1;
int r1_1;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
atomic_int mem3;
atomic_int mem4;
atomic_int mem5;
void *func_0() {
int c;
int v;
int w;
int x;
int y;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
atomic_store_explicit(&<customTag0>w</customTag>, <customTag0>y</customTag>, memory_order_release );//event.Store

__VERIFIER_fence(Sync_rcu);
<customTag0>r1</customTag> = READ_ONCE(<customTag0>c</customTag>);

if((<customTag0>r1</customTag>)==(<customTag0>x</customTag>)) {
WRITE_ONCE(&<customTag0>c</customTag>, 0);
__VERIFIER_fence(Sync_rcu);
WRITE_ONCE(&<customTag0>x</customTag>, 0);
} else {WRITE_ONCE(&<customTag0>x</customTag>, 0);
}

WRITE_ONCE(&<customTag0>c</customTag>, 0);
__VERIFIER_fence(Sync_rcu);
WRITE_ONCE(&<customTag0>x</customTag>, 0);
//event.Skip

WRITE_ONCE(&<customTag0>x</customTag>, 0);
//event.Skip

atomic_thread_fence(memory_order_seq_cst);
c_0 = c;
v_0 = v;
w_0 = w;
x_0 = x;
y_0 = y;
r1_0 = r1;
}

void *func_1() {
int r2;
int r3;
int r4;
int c;
int v;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
__VERIFIER_fence(Rcu_lock);
<customTag1>r1</customTag> = READ_ONCE(<customTag1>c</customTag>);

if((<customTag1>r1</customTag>)==(0)) {
<customTag1>r1</customTag> = READ_ONCE(<customTag1>v</customTag>);

} else {}

<customTag1>r1</customTag> = READ_ONCE(<customTag1>v</customTag>);

//event.Skip

//event.Skip

<customTag1>r2</customTag> = atomic_load_explicit(&<customTag1>r1</customTag>, memory_order_relaxed);//event.Load

atomic_store_explicit(&<customTag1>c</customTag>, <customTag1>r2</customTag>, memory_order_release );//event.Store

__VERIFIER_fence(Rcu_unlock);
__VERIFIER_fence(Rcu_lock);
<customTag1>r3</customTag> = READ_ONCE(<customTag1>c</customTag>);

if((<customTag1>r3</customTag>)==(0)) {
<customTag1>r3</customTag> = READ_ONCE(<customTag1>v</customTag>);

} else {}

<customTag1>r3</customTag> = READ_ONCE(<customTag1>v</customTag>);

//event.Skip

//event.Skip

<customTag1>r4</customTag> = atomic_load_explicit(&<customTag1>r3</customTag>, memory_order_relaxed);//event.Load

atomic_store_explicit(&<customTag1>c</customTag>, <customTag1>r4</customTag>, memory_order_release );//event.Store

__VERIFIER_fence(Rcu_unlock);
atomic_thread_fence(memory_order_seq_cst);
r2_1 = r2;
r3_1 = r3;
r4_1 = r4;
c_1 = c;
v_1 = v;
r1_1 = r1;
}

int main() {
atomic_init(&mem0, 1); //event.Init, 1);
atomic_init(&mem1, &mem0); //event.Init, mem0);
atomic_init(&mem2, &mem1); //event.Init, mem1);
atomic_init(&mem3, &mem2); //event.Init, mem2);
atomic_init(&mem4, &mem3); //event.Init, mem3);
atomic_init(&mem5, &mem3); //event.Init, mem3);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int c = atomic_load_explicit(&mem5, memory_order_relaxed);
int v = atomic_load_explicit(&mem4, memory_order_relaxed);
int w = atomic_load_explicit(&mem3, memory_order_relaxed);
int x = atomic_load_explicit(&mem2, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
int z = atomic_load_explicit(&mem0, memory_order_relaxed);
assert(!((((<customAssertionTag1>r1</customAssertionTag> == 0) || (<customAssertionTag1>r2</customAssertionTag> == 0)) || (<customAssertionTag1>r3</customAssertionTag> == 0)) || (<customAssertionTag1>r4</customAssertionTag> == 0)));
return 0;
}


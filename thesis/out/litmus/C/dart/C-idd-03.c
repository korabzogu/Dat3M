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
int r2_0;
int a_0;
int b_0;
int x_0;
int y_0;
int r0_0;
int r1_0;
int x_1;
int y_1;
int b_2;
int y_2;
int r0_2;
int r1_2;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
atomic_int mem3;
void *func_0() {
int r2;
int a;
int b;
int x;
int y;
int r0;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>y</customTag>, memory_order_relaxed);//event.Load

<customTag0>r1</customTag> = <customTag0>r0</customTag>;//event.Local

if((<customTag0>r0</customTag>)==(4)) {
atomic_store_explicit(&<customTag0>a</customTag>, 1, memory_order_relaxed );//event.Store

} else {}

atomic_store_explicit(&<customTag0>a</customTag>, 1, memory_order_relaxed );//event.Store

//event.Skip

//event.Skip

<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>x</customTag>, memory_order_relaxed);//event.Load

<customTag0>r2</customTag> = <customTag0>r0</customTag>;//event.Local

if((<customTag0>r0</customTag>)==(1)) {
atomic_store_explicit(&<customTag0>b</customTag>, 1, memory_order_relaxed );//event.Store

} else {}

atomic_store_explicit(&<customTag0>b</customTag>, 1, memory_order_relaxed );//event.Store

//event.Skip

//event.Skip

atomic_thread_fence(memory_order_seq_cst);
r2_0 = r2;
a_0 = a;
b_0 = b;
x_0 = x;
y_0 = y;
r0_0 = r0;
r1_0 = r1;
}

void *func_1() {
int x;
int y;
//event.Skip

/*§Skip§*/
/*§Skip§*/
atomic_store_explicit(&<customTag1>x</customTag>, 3, memory_order_relaxed );//event.Store

__VERIFIER_fence(Mb);
atomic_store_explicit(&<customTag1>y</customTag>, 4, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
x_1 = x;
y_1 = y;
}

void *func_2() {
int b;
int y;
int r0;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag2>r0</customTag> = atomic_load_explicit(&<customTag2>b</customTag>, memory_order_relaxed);//event.Load

__VERIFIER_fence(Mb);
<customTag2>r1</customTag> = atomic_load_explicit(&<customTag2>y</customTag>, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
b_2 = b;
y_2 = y;
r0_2 = r0;
r1_2 = r1;
}

int main() {
atomic_init(&mem0, 1); //event.Init, 1);
atomic_init(&mem1, 2); //event.Init, 2);
atomic_init(&mem2, 0); //event.Init, 0);
atomic_init(&mem3, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_t thread_2;
pthread_create(&thread_2, NULL, &func_2, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
int a = atomic_load_explicit(&mem2, memory_order_relaxed);
int b = atomic_load_explicit(&mem3, memory_order_relaxed);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
assert(!((((<customAssertionTag0>r1</customAssertionTag> == 4) && (<customAssertionTag0>r2</customAssertionTag> == 1)) && (<customAssertionTag2>r0</customAssertionTag> == 1)) && (<customAssertionTag2>r1</customAssertionTag> == 2)));
return 0;
}


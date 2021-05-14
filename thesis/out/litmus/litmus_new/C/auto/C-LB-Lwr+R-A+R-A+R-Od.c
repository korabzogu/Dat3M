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
int x1_0;
int u0_0;
int x1_1;
int x2_1;
int r1_1;
int r3_2;
int x2_2;
int x3_2;
int u0_2;
int r1_2;
int r2_3;
int x3_3;
int r1_3;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
atomic_int mem3;
atomic_int mem4;
void *func_0() {
int x1;
int u0;
//event.Skip

/*§Skip§*/
/*§Skip§*/
atomic_store_explicit(&<customTag0>u0</customTag>, 3, memory_order_seq_cst /* TODO use usual C assign */ );//event.Store

atomic_store_explicit(&<customTag0>x1</customTag>, 1, memory_order_release );//event.Store

atomic_thread_fence(memory_order_seq_cst);
x1_0 = x1;
u0_0 = u0;
}

void *func_1() {
int x1;
int x2;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>r1</customTag> = atomic_load_explicit(&<customTag1>x1</customTag>, memory_order_acquire);//event.Load

atomic_store_explicit(&<customTag1>x2</customTag>, 1, memory_order_release );//event.Store

atomic_thread_fence(memory_order_seq_cst);
x1_1 = x1;
x2_1 = x2;
r1_1 = r1;
}

void *func_2() {
int r3;
int x2;
int x3;
int u0;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag2>r3</customTag> = <customTag2>u0</customTag>;//event.Local

<customTag2>r1</customTag> = atomic_load_explicit(&<customTag2>x2</customTag>, memory_order_acquire);//event.Load

atomic_store_explicit(&<customTag2>x3</customTag>, <customTag2>r3</customTag>, memory_order_release );//event.Store

atomic_thread_fence(memory_order_seq_cst);
r3_2 = r3;
x2_2 = x2;
x3_2 = x3;
u0_2 = u0;
r1_2 = r1;
}

void *func_3() {
int r2;
int x3;
int r1;
//event.Skip

/*§Skip§*/
<customTag3>r1</customTag> = READ_ONCE(<customTag3>x3</customTag>);

<customTag3>r2</customTag> = atomic_load_explicit(&<customTag3>r1</customTag>, memory_order_seq_cst /* TODO use usual C assign */);//event.Load

atomic_thread_fence(memory_order_seq_cst);
r2_3 = r2;
x3_3 = x3;
r1_3 = r1;
}

int main() {
atomic_init(&mem0, &mem1); //event.Init, mem1);
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
pthread_t thread_3;
pthread_create(&thread_3, NULL, &func_3, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
pthread_join(thread_3, NULL);
int x1 = atomic_load_explicit(&mem3, memory_order_relaxed);
int y3 = atomic_load_explicit(&mem1, memory_order_relaxed);
int x2 = atomic_load_explicit(&mem4, memory_order_relaxed);
int x3 = atomic_load_explicit(&mem0, memory_order_relaxed);
int u0 = atomic_load_explicit(&mem2, memory_order_relaxed);
assert(!((((<customAssertionTag3>r2</customAssertionTag> == 0) && (<customAssertionTag1>r1</customAssertionTag> == 1)) && (<customAssertionTag2>r1</customAssertionTag> == 1)) && (<customAssertionTag3>r1</customAssertionTag> == mem2)));
return 0;
}


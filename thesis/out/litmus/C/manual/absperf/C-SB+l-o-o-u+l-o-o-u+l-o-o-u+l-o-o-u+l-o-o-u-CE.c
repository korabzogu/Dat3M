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
int x0_0;
int sl_0;
int x1_0;
int r1_0;
int r2_1;
int sl_1;
int x1_1;
int x2_1;
int r1_1;
int r2_2;
int sl_2;
int x2_2;
int x3_2;
int r1_2;
int r2_3;
int sl_3;
int x3_3;
int x4_3;
int r1_3;
int r2_4;
int x0_4;
int sl_4;
int x4_4;
int r1_4;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
atomic_int mem3;
atomic_int mem4;
atomic_int mem5;
void *func_0() {
int r2;
int x0;
int sl;
int x1;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
 atomic_store(<customTag0>r2</customTag>, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ sl,0,1));

WRITE_ONCE(&<customTag0>x0</customTag>, 1);
<customTag0>r1</customTag> = READ_ONCE(<customTag0>x1</customTag>);

atomic_store_explicit(&<customTag0>sl</customTag>, 0, memory_order_release );//event.Store

atomic_thread_fence(memory_order_seq_cst);
r2_0 = r2;
x0_0 = x0;
sl_0 = sl;
x1_0 = x1;
r1_0 = r1;
}

void *func_1() {
int r2;
int sl;
int x1;
int x2;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
 atomic_store(<customTag1>r2</customTag>, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ sl,0,1));

WRITE_ONCE(&<customTag1>x1</customTag>, 1);
<customTag1>r1</customTag> = READ_ONCE(<customTag1>x2</customTag>);

atomic_store_explicit(&<customTag1>sl</customTag>, 0, memory_order_release );//event.Store

atomic_thread_fence(memory_order_seq_cst);
r2_1 = r2;
sl_1 = sl;
x1_1 = x1;
x2_1 = x2;
r1_1 = r1;
}

void *func_2() {
int r2;
int sl;
int x2;
int x3;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
 atomic_store(<customTag2>r2</customTag>, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ sl,0,1));

WRITE_ONCE(&<customTag2>x2</customTag>, 1);
<customTag2>r1</customTag> = READ_ONCE(<customTag2>x3</customTag>);

atomic_store_explicit(&<customTag2>sl</customTag>, 0, memory_order_release );//event.Store

atomic_thread_fence(memory_order_seq_cst);
r2_2 = r2;
sl_2 = sl;
x2_2 = x2;
x3_2 = x3;
r1_2 = r1;
}

void *func_3() {
int r2;
int sl;
int x3;
int x4;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
 atomic_store(<customTag3>r2</customTag>, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ sl,0,1));

WRITE_ONCE(&<customTag3>x3</customTag>, 1);
<customTag3>r1</customTag> = READ_ONCE(<customTag3>x4</customTag>);

atomic_store_explicit(&<customTag3>sl</customTag>, 0, memory_order_release );//event.Store

atomic_thread_fence(memory_order_seq_cst);
r2_3 = r2;
sl_3 = sl;
x3_3 = x3;
x4_3 = x4;
r1_3 = r1;
}

void *func_4() {
int r2;
int x0;
int sl;
int x4;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
 atomic_store(<customTag4>r2</customTag>, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ sl,0,1));

WRITE_ONCE(&<customTag4>x4</customTag>, 1);
<customTag4>r1</customTag> = READ_ONCE(<customTag4>x0</customTag>);

atomic_store_explicit(&<customTag4>sl</customTag>, 0, memory_order_release );//event.Store

atomic_thread_fence(memory_order_seq_cst);
r2_4 = r2;
x0_4 = x0;
sl_4 = sl;
x4_4 = x4;
r1_4 = r1;
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
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
pthread_join(thread_3, NULL);
pthread_join(thread_4, NULL);
int x0 = atomic_load_explicit(&mem1, memory_order_relaxed);
int sl = atomic_load_explicit(&mem0, memory_order_relaxed);
int x1 = atomic_load_explicit(&mem2, memory_order_relaxed);
int x2 = atomic_load_explicit(&mem3, memory_order_relaxed);
int x3 = atomic_load_explicit(&mem4, memory_order_relaxed);
int x4 = atomic_load_explicit(&mem5, memory_order_relaxed);
assert(!((((((((((<customAssertionTag0>r1</customAssertionTag> == 0) && (<customAssertionTag0>r2</customAssertionTag> == 0)) && (<customAssertionTag1>r1</customAssertionTag> == 0)) && (<customAssertionTag1>r2</customAssertionTag> == 0)) && (<customAssertionTag2>r1</customAssertionTag> == 0)) && (<customAssertionTag2>r2</customAssertionTag> == 0)) && (<customAssertionTag3>r1</customAssertionTag> == 0)) && (<customAssertionTag3>r2</customAssertionTag> == 0)) && (<customAssertionTag4>r1</customAssertionTag> == 0)) && (<customAssertionTag4>r2</customAssertionTag> == 0)));
return 0;
}


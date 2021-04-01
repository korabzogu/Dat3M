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
int lck_0;
int x_0;
int y_0;
int complex_mode_0;
int r1_0;
int r3_1;
int r4_1;
int lck_1;
int x_1;
int y_1;
int complex_mode_1;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
atomic_int mem3;
void *func_0() {
int r2;
int lck;
int x;
int y;
int complex_mode;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag0>r2</customTag> = 0;//event.Local

WRITE_ONCE(&<customTag0>lck</customTag>, 1);
<customTag0>r1</customTag> = atomic_load_explicit(&<customTag0>complex_mode</customTag>, memory_order_acquire);//event.Load

if((<customTag0>r1</customTag>)==(0)) {
<customTag0>r2</customTag> = READ_ONCE(<customTag0>x</customTag>);

WRITE_ONCE(&<customTag0>y</customTag>, 1);
} else {}

<customTag0>r2</customTag> = READ_ONCE(<customTag0>x</customTag>);

WRITE_ONCE(&<customTag0>y</customTag>, 1);
//event.Skip

//event.Skip

atomic_store_explicit(&<customTag0>lck</customTag>, 0, memory_order_release );//event.Store

atomic_thread_fence(memory_order_seq_cst);
r2_0 = r2;
lck_0 = lck;
x_0 = x;
y_0 = y;
complex_mode_0 = complex_mode;
r1_0 = r1;
}

void *func_1() {
int r3;
int r4;
int lck;
int x;
int y;
int complex_mode;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag1>r4</customTag> = 0;//event.Local

WRITE_ONCE(&<customTag1>complex_mode</customTag>, 1);
__VERIFIER_fence(Mb);
<customTag1>r3</customTag> = READ_ONCE(<customTag1>lck</customTag>);

if((<customTag1>r3</customTag>)==(0)) {
__VERIFIER_fence(Rmb);
WRITE_ONCE(&<customTag1>x</customTag>, 1);
<customTag1>r4</customTag> = READ_ONCE(<customTag1>y</customTag>);

} else {}

__VERIFIER_fence(Rmb);
WRITE_ONCE(&<customTag1>x</customTag>, 1);
<customTag1>r4</customTag> = READ_ONCE(<customTag1>y</customTag>);

//event.Skip

//event.Skip

atomic_thread_fence(memory_order_seq_cst);
r3_1 = r3;
r4_1 = r4;
lck_1 = lck;
x_1 = x;
y_1 = y;
complex_mode_1 = complex_mode;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
atomic_init(&mem3, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int lck = atomic_load_explicit(&mem0, memory_order_relaxed);
int x = atomic_load_explicit(&mem2, memory_order_relaxed);
int y = atomic_load_explicit(&mem3, memory_order_relaxed);
int complex_mode = atomic_load_explicit(&mem1, memory_order_relaxed);
assert(!(((<customAssertionTag0>r1</customAssertionTag> == 0) && (<customAssertionTag1>r3</customAssertionTag> == 0)) && ((<customAssertionTag0>r2</customAssertionTag> == 1) && (<customAssertionTag1>r4</customAssertionTag> == 0))));
return 0;
}


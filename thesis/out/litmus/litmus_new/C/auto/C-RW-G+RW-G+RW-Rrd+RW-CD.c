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
int r3_2;
int x0_2;
int x2_2;
int x3_2;
int r1_2;
int r4_3;
int DUMMY_REG_2370_3;
int y0_3;
int x3_3;
int r1_3;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
atomic_int mem3;
atomic_int mem4;
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
int r3;
int x0;
int x2;
int x3;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag2>r3</customTag> = <customTag2>x0</customTag>;//event.Local

__VERIFIER_fence(Rcu_lock);
<customTag2>r1</customTag> = READ_ONCE(<customTag2>x2</customTag>);

atomic_store_explicit(&<customTag2>x3</customTag>, <customTag2>r3</customTag>, memory_order_release );//event.Store

__VERIFIER_fence(Rcu_unlock);
atomic_thread_fence(memory_order_seq_cst);
r3_2 = r3;
x0_2 = x0;
x2_2 = x2;
x3_2 = x3;
r1_2 = r1;
}

void *func_3() {
int r4;
int DUMMY_REG_2370;
int y0;
int x3;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag3>r4</customTag> = <customTag3>y0</customTag>;//event.Local

<customTag3>DUMMY_REG_2370</customTag> = atomic_load_explicit(&<customTag3>x3</customTag>, memory_order_relaxed);//event.Load

<customTag3>r1</customTag> = <customTag3>DUMMY_REG_2370</customTag>;//event.Local

<customTag3>r4</customTag> = (<customTag3>r1</customTag>)!=(<customTag3>r4</customTag>);//event.Local

if(<customTag3>r4</customTag>) {
WRITE_ONCE(&<customTag3>r1</customTag>, 1);
} else {}

WRITE_ONCE(&<customTag3>r1</customTag>, 1);
//event.Skip

//event.Skip

atomic_thread_fence(memory_order_seq_cst);
r4_3 = r4;
DUMMY_REG_2370_3 = DUMMY_REG_2370;
y0_3 = y0;
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
int y0 = atomic_load_explicit(&mem1, memory_order_relaxed);
int x0 = atomic_load_explicit(&mem2, memory_order_relaxed);
int x1 = atomic_load_explicit(&mem3, memory_order_relaxed);
int x2 = atomic_load_explicit(&mem4, memory_order_relaxed);
int x3 = atomic_load_explicit(&mem0, memory_order_relaxed);
assert(!((((<customAssertionTag0>r1</customAssertionTag> == 1) && (<customAssertionTag1>r1</customAssertionTag> == 1)) && (<customAssertionTag2>r1</customAssertionTag> == 1)) && (<customAssertionTag3>r1</customAssertionTag> == mem2)));
return 0;
}


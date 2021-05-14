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
int x1_0;
int v0_0;
int u0_0;
int r2_1;
int x1_1;
int r1_1;
int DUMMY_REG_2468_1;
int r2_2;
int v0_2;
int u0_2;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
atomic_int mem3;
void *func_0() {
int r3;
int x1;
int v0;
int u0;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag0>r3</customTag> = <customTag0>v0</customTag>;//event.Local

WRITE_ONCE(&<customTag0>u0</customTag>, 3);
atomic_store_explicit(&<customTag0>x1</customTag>, <customTag0>r3</customTag>, memory_order_release );//event.Store

atomic_thread_fence(memory_order_seq_cst);
r3_0 = r3;
x1_0 = x1;
v0_0 = v0;
u0_0 = u0;
}

void *func_1() {
int r2;
int x1;
int r1;
int DUMMY_REG_2468;
//event.Skip

/*§Skip§*/
<customTag1>DUMMY_REG_2468</customTag> = atomic_load_explicit(&<customTag1>x1</customTag>, memory_order_relaxed);//event.Load

<customTag1>r1</customTag> = <customTag1>DUMMY_REG_2468</customTag>;//event.Local

<customTag1>r2</customTag> = READ_ONCE(<customTag1>r1</customTag>);

atomic_thread_fence(memory_order_seq_cst);
r2_1 = r2;
x1_1 = x1;
r1_1 = r1;
DUMMY_REG_2468_1 = DUMMY_REG_2468;
}

void *func_2() {
int r2;
int v0;
int u0;
//event.Skip

/*§Skip§*/
/*§Skip§*/
WRITE_ONCE(&<customTag2>v0</customTag>, 1);
__VERIFIER_fence(Mb);
<customTag2>r2</customTag> = READ_ONCE(<customTag2>u0</customTag>);

atomic_thread_fence(memory_order_seq_cst);
r2_2 = r2;
v0_2 = v0;
u0_2 = u0;
}

int main() {
atomic_init(&mem0, &mem1); //event.Init, mem1);
atomic_init(&mem1, 0); //event.Init, 0);
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
int y1 = atomic_load_explicit(&mem1, memory_order_relaxed);
int x1 = atomic_load_explicit(&mem0, memory_order_relaxed);
int v0 = atomic_load_explicit(&mem3, memory_order_relaxed);
int u0 = atomic_load_explicit(&mem2, memory_order_relaxed);
assert(!(((<customAssertionTag1>r2</customAssertionTag> == 0) && (<customAssertionTag2>r2</customAssertionTag> == 0)) && (<customAssertionTag1>r1</customAssertionTag> == mem3)));
return 0;
}


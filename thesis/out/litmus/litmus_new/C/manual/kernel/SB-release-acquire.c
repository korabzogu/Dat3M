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
int u_0;
int x_0;
int y_0;
int r0_0;
int r1_0;
int v_1;
int x_1;
int y_1;
int r0_1;
int r1_1;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
atomic_int mem3;
void *func_0() {
int u;
int x;
int y;
int r0;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
WRITE_ONCE(&<customTag0>x</customTag>, 1);
atomic_store_explicit(&<customTag0>u</customTag>, 1, memory_order_release );//event.Store

<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>u</customTag>, memory_order_acquire);//event.Load

<customTag0>r1</customTag> = READ_ONCE(<customTag0>y</customTag>);

atomic_thread_fence(memory_order_seq_cst);
u_0 = u;
x_0 = x;
y_0 = y;
r0_0 = r0;
r1_0 = r1;
}

void *func_1() {
int v;
int x;
int y;
int r0;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
WRITE_ONCE(&<customTag1>y</customTag>, 1);
atomic_store_explicit(&<customTag1>v</customTag>, 1, memory_order_release );//event.Store

<customTag1>r0</customTag> = atomic_load_explicit(&<customTag1>v</customTag>, memory_order_acquire);//event.Load

<customTag1>r1</customTag> = READ_ONCE(<customTag1>x</customTag>);

atomic_thread_fence(memory_order_seq_cst);
v_1 = v;
x_1 = x;
y_1 = y;
r0_1 = r0;
r1_1 = r1;
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
int u = atomic_load_explicit(&mem2, memory_order_relaxed);
int v = atomic_load_explicit(&mem3, memory_order_relaxed);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
assert(!((<customAssertionTag0>r1</customAssertionTag> == 0) && (<customAssertionTag1>r1</customAssertionTag> == 0)));
return 0;
}


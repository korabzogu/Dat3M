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
int X0_0;
int X1_0;
int X3_0;
int X9_1;
int X0_1;
int X3_1;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
void *func_0() {
int X0;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag0>X0</customTag> = 1;//event.Local

atomic_store_explicit(&<customTag0>X1</customTag>, <customTag0>X0</customTag>, memory_order_relaxed );//event.Store

atomic_store_explicit(&<customTag0>X3</customTag>, <customTag0>X1</customTag>, memory_order_release );//event.Store

atomic_thread_fence(memory_order_seq_cst);
X0_0 = X0;
}

void *func_1() {
int X9;
int X0;
//event.Skip

/*§Skip§*/
<customTag1>X9</customTag> = -1;//event.Local

<customTag1>X0</customTag> = atomic_load_explicit(&<customTag1>X3</customTag>, memory_order_relaxed);//event.Load

<customTag1>X9</customTag> = atomic_load_explicit(&<customTag1>X0</customTag>, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
X9_1 = X9;
X0_1 = X0;
}

int main() {
atomic_init(&mem0, &mem1); //event.Init, mem1);
atomic_init(&mem1, -1); //event.Init, -1);
atomic_init(&mem2, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int x = atomic_load_explicit(&mem2, memory_order_relaxed);
int y = atomic_load_explicit(&mem0, memory_order_relaxed);
int z = atomic_load_explicit(&mem1, memory_order_relaxed);
assert(!((<customAssertionTag1>X0</customAssertionTag> == mem2) && (<customAssertionTag1>X9</customAssertionTag> == 0)));
return 0;
}


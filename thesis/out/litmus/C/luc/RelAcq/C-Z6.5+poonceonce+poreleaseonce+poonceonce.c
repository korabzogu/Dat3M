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
int x_0;
int y_0;
int y_1;
int z_1;
int x_2;
int z_2;
int r0_2;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
void *func_0() {
int x;
int y;
//event.Skip

/*§Skip§*/
/*§Skip§*/
WRITE_ONCE(&<customTag0>x</customTag>, 1);
WRITE_ONCE(&<customTag0>y</customTag>, 1);
atomic_thread_fence(memory_order_seq_cst);
x_0 = x;
y_0 = y;
}

void *func_1() {
int y;
int z;
//event.Skip

/*§Skip§*/
/*§Skip§*/
atomic_store_explicit(&<customTag1>y</customTag>, 2, memory_order_release );//event.Store

WRITE_ONCE(&<customTag1>z</customTag>, 1);
atomic_thread_fence(memory_order_seq_cst);
y_1 = y;
z_1 = z;
}

void *func_2() {
int x;
int z;
int r0;
//event.Skip

/*§Skip§*/
/*§Skip§*/
WRITE_ONCE(&<customTag2>z</customTag>, 2);
<customTag2>r0</customTag> = READ_ONCE(<customTag2>x</customTag>);

atomic_thread_fence(memory_order_seq_cst);
x_2 = x;
z_2 = z;
r0_2 = r0;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_t thread_2;
pthread_create(&thread_2, NULL, &func_2, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
int z = atomic_load_explicit(&mem2, memory_order_relaxed);
assert(!(((y == 2) && (z == 2)) && (<customAssertionTag2>r0</customAssertionTag> == 0)));
return 0;
}


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
int s_0;
int y_0;
int r1_0;
int r2_1;
int r3_1;
int s_1;
int y_1;
atomic_int mem0;
atomic_int mem1;
void *func_0() {
int s;
int y;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
atomic_store_explicit(&<customTag0>s</customTag>, 1, memory_order_release );//event.Store

<customTag0>r1</customTag> = atomic_load_explicit(&<customTag0>s</customTag>, memory_order_acquire);//event.Load

WRITE_ONCE(&<customTag0>y</customTag>, 1);
atomic_thread_fence(memory_order_seq_cst);
s_0 = s;
y_0 = y;
r1_0 = r1;
}

void *func_1() {
int r2;
int r3;
int s;
int y;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>r2</customTag> = READ_ONCE(<customTag1>y</customTag>);

__VERIFIER_fence(Rmb);
<customTag1>r3</customTag> = READ_ONCE(<customTag1>s</customTag>);

atomic_thread_fence(memory_order_seq_cst);
r2_1 = r2;
r3_1 = r3;
s_1 = s;
y_1 = y;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int s = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
assert(!((<customAssertionTag1>r2</customAssertionTag> == 1) && (<customAssertionTag1>r3</customAssertionTag> == 0)));
return 0;
}


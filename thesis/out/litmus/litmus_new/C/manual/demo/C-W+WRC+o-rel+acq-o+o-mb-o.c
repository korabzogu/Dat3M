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
int a_0;
int b_0;
int r2_1;
int b_1;
int c_1;
int r1_1;
int a_2;
int r3_2;
int c_2;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
void *func_0() {
int a;
int b;
//event.Skip

/*§Skip§*/
/*§Skip§*/
WRITE_ONCE(&<customTag0>a</customTag>, 1);
atomic_store_explicit(&<customTag0>b</customTag>, 1, memory_order_release );//event.Store

atomic_thread_fence(memory_order_seq_cst);
a_0 = a;
b_0 = b;
}

void *func_1() {
int r2;
int b;
int c;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>r1</customTag> = atomic_load_explicit(&<customTag1>b</customTag>, memory_order_acquire);//event.Load

<customTag1>r2</customTag> = READ_ONCE(<customTag1>c</customTag>);

atomic_thread_fence(memory_order_seq_cst);
r2_1 = r2;
b_1 = b;
c_1 = c;
r1_1 = r1;
}

void *func_2() {
int a;
int r3;
int c;
//event.Skip

/*§Skip§*/
/*§Skip§*/
WRITE_ONCE(&<customTag2>c</customTag>, 1);
__VERIFIER_fence(Mb);
<customTag2>r3</customTag> = READ_ONCE(<customTag2>a</customTag>);

atomic_thread_fence(memory_order_seq_cst);
a_2 = a;
r3_2 = r3;
c_2 = c;
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
int a = atomic_load_explicit(&mem0, memory_order_relaxed);
int b = atomic_load_explicit(&mem1, memory_order_relaxed);
int c = atomic_load_explicit(&mem2, memory_order_relaxed);
assert(!(((<customAssertionTag1>r1</customAssertionTag> == 1) && (<customAssertionTag1>r2</customAssertionTag> == 0)) && (<customAssertionTag2>r3</customAssertionTag> == 0)));
return 0;
}


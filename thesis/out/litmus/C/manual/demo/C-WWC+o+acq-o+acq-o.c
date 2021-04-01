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
int a_1;
int b_1;
int r1_1;
int a_2;
int b_2;
int r1_2;
atomic_int mem0;
atomic_int mem1;
void *func_0() {
int a;
//event.Skip

/*§Skip§*/
WRITE_ONCE(&<customTag0>a</customTag>, 1);
atomic_thread_fence(memory_order_seq_cst);
a_0 = a;
}

void *func_1() {
int a;
int b;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>r1</customTag> = atomic_load_explicit(&<customTag1>a</customTag>, memory_order_acquire);//event.Load

WRITE_ONCE(&<customTag1>b</customTag>, 1);
atomic_thread_fence(memory_order_seq_cst);
a_1 = a;
b_1 = b;
r1_1 = r1;
}

void *func_2() {
int a;
int b;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag2>r1</customTag> = atomic_load_explicit(&<customTag2>b</customTag>, memory_order_acquire);//event.Load

WRITE_ONCE(&<customTag2>a</customTag>, 2);
atomic_thread_fence(memory_order_seq_cst);
a_2 = a;
b_2 = b;
r1_2 = r1;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
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
assert(!(((<customAssertionTag1>r1</customAssertionTag> == 1) && (<customAssertionTag2>r1</customAssertionTag> == 1)) && (a == 1)));
return 0;
}


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
int x_1;
int y_1;
int r1_1;
int r2_2;
int r3_2;
int r9_2;
int y_2;
int z_2;
int DUMMY_REG_3476_2;
int a_3;
int z_3;
int a_4;
int x_4;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
atomic_int mem3;
void *func_0() {
int x;
//event.Skip

/*§Skip§*/
atomic_store_explicit(&<customTag0>x</customTag>, 1, memory_order_release );//event.Store

atomic_thread_fence(memory_order_seq_cst);
x_0 = x;
}

void *func_1() {
int x;
int y;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>r1</customTag> = atomic_load_explicit(&<customTag1>x</customTag>, memory_order_acquire);//event.Load

atomic_store_explicit(&<customTag1>y</customTag>, 1, memory_order_release );//event.Store

atomic_thread_fence(memory_order_seq_cst);
x_1 = x;
y_1 = y;
r1_1 = r1;
}

void *func_2() {
int r2;
int r3;
int r9;
int y;
int z;
int DUMMY_REG_3476;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag2>DUMMY_REG_3476</customTag> = atomic_load_explicit(&<customTag2>y</customTag>, memory_order_relaxed);//event.Load

<customTag2>r2</customTag> = <customTag2>DUMMY_REG_3476</customTag>;//event.Local

<customTag2>r9</customTag> = (<customTag2>r2</customTag> & 8) /* IEXPRBIN */;//event.Local

<customTag2>r3</customTag> = (<customTag2>z</customTag> + <customTag2>r9</customTag>) /* IEXPRBIN */;//event.Local

WRITE_ONCE(&<customTag2>r3</customTag>, 1);
atomic_thread_fence(memory_order_seq_cst);
r2_2 = r2;
r3_2 = r3;
r9_2 = r9;
y_2 = y;
z_2 = z;
DUMMY_REG_3476_2 = DUMMY_REG_3476;
}

void *func_3() {
int a;
int z;
//event.Skip

/*§Skip§*/
/*§Skip§*/
WRITE_ONCE(&<customTag3>z</customTag>, 2);
__VERIFIER_fence(Wmb);
WRITE_ONCE(&<customTag3>a</customTag>, 1);
atomic_thread_fence(memory_order_seq_cst);
a_3 = a;
z_3 = z;
}

void *func_4() {
int a;
int x;
//event.Skip

/*§Skip§*/
/*§Skip§*/
WRITE_ONCE(&<customTag4>a</customTag>, 2);
__VERIFIER_fence(Wmb);
WRITE_ONCE(&<customTag4>x</customTag>, 2);
atomic_thread_fence(memory_order_seq_cst);
a_4 = a;
x_4 = x;
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
int a = atomic_load_explicit(&mem3, memory_order_relaxed);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
int z = atomic_load_explicit(&mem2, memory_order_relaxed);
assert(!(((((<customAssertionTag1>r1</customAssertionTag> == 1) && (<customAssertionTag2>r2</customAssertionTag> == 1)) && (z == 2)) && (a == 2)) && (x == 1)));
return 0;
}


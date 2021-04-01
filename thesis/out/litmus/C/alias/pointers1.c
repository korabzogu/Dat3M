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
int p_0;
int t_0;
int x0_0;
int x1_0;
int y_0;
int x2_0;
int t_1;
int x1_1;
int x2_1;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
atomic_int mem3;
void *func_0() {
int p;
int t;
int x0;
int x1;
int y;
int x2;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag0>p</customTag> = READ_ONCE(<customTag0>x0</customTag>);

WRITE_ONCE(&<customTag0>x1</customTag>, <customTag0>p</customTag>);
<customTag0>t</customTag> = READ_ONCE(<customTag0>x2</customTag>);

WRITE_ONCE(&<customTag0>y</customTag>, <customTag0>t</customTag>);
atomic_thread_fence(memory_order_seq_cst);
p_0 = p;
t_0 = t;
x0_0 = x0;
x1_0 = x1;
y_0 = y;
x2_0 = x2;
}

void *func_1() {
int t;
int x1;
int x2;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>t</customTag> = READ_ONCE(<customTag1>x1</customTag>);

WRITE_ONCE(&<customTag1>x2</customTag>, <customTag1>t</customTag>);
atomic_thread_fence(memory_order_seq_cst);
t_1 = t;
x1_1 = x1;
x2_1 = x2;
}

int main() {
atomic_init(&mem0, 1); //event.Init, 1);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
atomic_init(&mem3, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int x0 = atomic_load_explicit(&mem0, memory_order_relaxed);
int x1 = atomic_load_explicit(&mem1, memory_order_relaxed);
int y = atomic_load_explicit(&mem3, memory_order_relaxed);
int x2 = atomic_load_explicit(&mem2, memory_order_relaxed);
assert(!(y == 1));
return 0;
}


#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int x_0;
int a_1;
int b_1;
int x_1;
int r1_1;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
void *func_0() {
int x;
//event.Skip

/*§Skip§*/
<customTag0>x</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
x_0 = x;
}

void *func_1() {
int a;
int b;
int x;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag1>r1</customTag> = atomic_load_explicit(&<customTag1>x</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use usual C assign */);//event.Load

<customTag1>a</customTag> = <customTag1>r1</customTag>;

<customTag1>b</customTag> = <customTag1>r1</customTag>;

atomic_thread_fence(memory_order_seq_cst);
a_1 = a;
b_1 = b;
x_1 = x;
r1_1 = r1;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 42); //event.Init, 42);
atomic_init(&mem2, 42); //event.Init, 42);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int a = atomic_load_explicit(&mem1, memory_order_relaxed);
int b = atomic_load_explicit(&mem2, memory_order_relaxed);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
assert(((a == 0) && (b == 1)));
return 0;
}


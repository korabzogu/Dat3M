#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int a_0;
int x_0;
int c_1;
int x_1;
int r1_1;
int r2_2;
int a_2;
int r3_2;
int c_2;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
void *func_0() {
int a;
int x;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag0>a</customTag> = 3;

<customTag0>x</customTag> = 4;

atomic_thread_fence(memory_order_seq_cst);
a_0 = a;
x_0 = x;
}

void *func_1() {
int c;
int x;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>r1</customTag> = atomic_load_explicit(&<customTag1>x</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag1>c</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
c_1 = c;
x_1 = x;
r1_1 = r1;
}

void *func_2() {
int r2;
int a;
int r3;
int c;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag2>r3</customTag> = atomic_load_explicit(&<customTag2>c</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag2>r2</customTag> = atomic_load_explicit(&<customTag2>a</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

atomic_thread_fence(memory_order_seq_cst);
r2_2 = r2;
a_2 = a;
r3_2 = r3;
c_2 = c;
}

int main() {
atomic_init(&mem0, 1); //event.Init, 1);
atomic_init(&mem1, 2); //event.Init, 2);
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
int c = atomic_load_explicit(&mem2, memory_order_relaxed);
int x = atomic_load_explicit(&mem1, memory_order_relaxed);
assert((((<customAssertionTag1>r1</customAssertionTag> == 4) && (<customAssertionTag2>r3</customAssertionTag> == 1)) && (<customAssertionTag2>r2</customAssertionTag> == 1)));
return 0;
}


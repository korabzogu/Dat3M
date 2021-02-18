#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int a_0;
int c_0;
int d_0;
int x_0;
int r2_1;
int a_1;
int r3_1;
int r4_1;
int c_1;
int d_1;
int x_1;
int r1_1;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
atomic_int mem3/* Address */;
void *func_0() {
int a;
int c;
int d;
int x;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag0>a</customTag> = 1;

<customTag0>x</customTag> = 2;

__VERIFIER_HARDWARE(NULL);
<customTag0>c</customTag> = 3;

<customTag0>d</customTag> = 4;

atomic_thread_fence(memory_order_seq_cst);
a_0 = a;
c_0 = c;
d_0 = d;
x_0 = x;
}

void *func_1() {
int r2;
int a;
int r3;
int r4;
int c;
int d;
int x;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag1>r1</customTag> = atomic_load_explicit(&<customTag1>c</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag1>r2</customTag> = atomic_load_explicit(&<customTag1>d</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

__VERIFIER_HARDWARE(NULL);
<customTag1>r3</customTag> = atomic_load_explicit(&<customTag1>a</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag1>r4</customTag> = atomic_load_explicit(&<customTag1>x</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

atomic_thread_fence(memory_order_seq_cst);
r2_1 = r2;
a_1 = a;
r3_1 = r3;
r4_1 = r4;
c_1 = c;
d_1 = d;
x_1 = x;
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
int a = atomic_load_explicit(&mem0, memory_order_relaxed);
int c = atomic_load_explicit(&mem2, memory_order_relaxed);
int d = atomic_load_explicit(&mem3, memory_order_relaxed);
int x = atomic_load_explicit(&mem1, memory_order_relaxed);
assert((((((<customAssertionTag1>r1</customAssertionTag> == 3) && (<customAssertionTag1>r3</customAssertionTag> == 0)) || ((<customAssertionTag1>r1</customAssertionTag> == 3) && (<customAssertionTag1>r4</customAssertionTag> == 0))) || ((<customAssertionTag1>r2</customAssertionTag> == 4) && (<customAssertionTag1>r3</customAssertionTag> == 0))) || ((<customAssertionTag1>r2</customAssertionTag> == 4) && (<customAssertionTag1>r4</customAssertionTag> == 0))));
return 0;
}


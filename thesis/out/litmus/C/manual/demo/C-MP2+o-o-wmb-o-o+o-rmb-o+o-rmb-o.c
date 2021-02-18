#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int a_0;
int b_0;
int c_0;
int d_0;
int r2_1;
int a_1;
int b_1;
int r1_1;
int r2_2;
int c_2;
int d_2;
int r1_2;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
atomic_int mem3/* Address */;
void *func_0() {
int a;
int b;
int c;
int d;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag0>a</customTag> = 1;

<customTag0>c</customTag> = 1;

__VERIFIER_HARDWARE(NULL);
<customTag0>b</customTag> = 1;

<customTag0>d</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
a_0 = a;
b_0 = b;
c_0 = c;
d_0 = d;
}

void *func_1() {
int r2;
int a;
int b;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>r1</customTag> = atomic_load_explicit(&<customTag1>b</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

__VERIFIER_HARDWARE(NULL);
<customTag1>r2</customTag> = atomic_load_explicit(&<customTag1>a</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

atomic_thread_fence(memory_order_seq_cst);
r2_1 = r2;
a_1 = a;
b_1 = b;
r1_1 = r1;
}

void *func_2() {
int r2;
int c;
int d;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag2>r1</customTag> = atomic_load_explicit(&<customTag2>d</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

__VERIFIER_HARDWARE(NULL);
<customTag2>r2</customTag> = atomic_load_explicit(&<customTag2>c</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

atomic_thread_fence(memory_order_seq_cst);
r2_2 = r2;
c_2 = c;
d_2 = d;
r1_2 = r1;
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
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
int a = atomic_load_explicit(&mem0, memory_order_relaxed);
int b = atomic_load_explicit(&mem1, memory_order_relaxed);
int c = atomic_load_explicit(&mem2, memory_order_relaxed);
int d = atomic_load_explicit(&mem3, memory_order_relaxed);
assert((((<customAssertionTag1>r1</customAssertionTag> == 1) && (<customAssertionTag1>r2</customAssertionTag> == 0)) || ((<customAssertionTag2>r1</customAssertionTag> == 1) && (<customAssertionTag2>r2</customAssertionTag> == 0))));
return 0;
}


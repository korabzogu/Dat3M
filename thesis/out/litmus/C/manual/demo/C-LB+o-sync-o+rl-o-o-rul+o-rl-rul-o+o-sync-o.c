#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int a_0;
int b_0;
int r1_0;
int r2_1;
int b_1;
int c_1;
int r3_2;
int c_2;
int d_2;
int a_3;
int r4_3;
int d_3;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
atomic_int mem3/* Address */;
void *func_0() {
int a;
int b;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag0>r1</customTag> = atomic_load_explicit(&<customTag0>a</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

__VERIFIER_HARDWARE(NULL);
<customTag0>b</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
a_0 = a;
b_0 = b;
r1_0 = r1;
}

void *func_1() {
int r2;
int b;
int c;
//event.Skip

/*§Skip§*/
/*§Skip§*/
__VERIFIER_HARDWARE(NULL);
<customTag1>r2</customTag> = atomic_load_explicit(&<customTag1>b</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag1>c</customTag> = 1;

__VERIFIER_HARDWARE(NULL);
atomic_thread_fence(memory_order_seq_cst);
r2_1 = r2;
b_1 = b;
c_1 = c;
}

void *func_2() {
int r3;
int c;
int d;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag2>r3</customTag> = atomic_load_explicit(&<customTag2>c</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

__VERIFIER_HARDWARE(NULL);
__VERIFIER_HARDWARE(NULL);
<customTag2>d</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
r3_2 = r3;
c_2 = c;
d_2 = d;
}

void *func_3() {
int a;
int r4;
int d;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag3>r4</customTag> = atomic_load_explicit(&<customTag3>d</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

__VERIFIER_HARDWARE(NULL);
<customTag3>a</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
a_3 = a;
r4_3 = r4;
d_3 = d;
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
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
pthread_join(thread_3, NULL);
int a = atomic_load_explicit(&mem0, memory_order_relaxed);
int b = atomic_load_explicit(&mem1, memory_order_relaxed);
int c = atomic_load_explicit(&mem2, memory_order_relaxed);
int d = atomic_load_explicit(&mem3, memory_order_relaxed);
assert(((((<customAssertionTag0>r1</customAssertionTag> == 1) && (<customAssertionTag1>r2</customAssertionTag> == 1)) && (<customAssertionTag2>r3</customAssertionTag> == 1)) && (<customAssertionTag3>r4</customAssertionTag> == 1)));
return 0;
}


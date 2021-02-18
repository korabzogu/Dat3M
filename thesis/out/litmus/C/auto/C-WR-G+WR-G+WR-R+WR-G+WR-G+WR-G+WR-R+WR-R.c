#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int r2_0;
int x0_0;
int x1_0;
int r2_1;
int x1_1;
int x2_1;
int r2_2;
int x2_2;
int x3_2;
int r2_3;
int x3_3;
int x4_3;
int r2_4;
int x4_4;
int x5_4;
int r2_5;
int x5_5;
int x6_5;
int r2_6;
int x6_6;
int x7_6;
int r2_7;
int x0_7;
int x7_7;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
atomic_int mem3/* Address */;
atomic_int mem4/* Address */;
atomic_int mem5/* Address */;
atomic_int mem6/* Address */;
atomic_int mem7/* Address */;
void *func_0() {
int r2;
int x0;
int x1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag0>x0</customTag> = 2;

__VERIFIER_HARDWARE(NULL);
<customTag0>r2</customTag> = atomic_load_explicit(&<customTag0>x1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

atomic_thread_fence(memory_order_seq_cst);
r2_0 = r2;
x0_0 = x0;
x1_0 = x1;
}

void *func_1() {
int r2;
int x1;
int x2;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>x1</customTag> = 2;

__VERIFIER_HARDWARE(NULL);
<customTag1>r2</customTag> = atomic_load_explicit(&<customTag1>x2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

atomic_thread_fence(memory_order_seq_cst);
r2_1 = r2;
x1_1 = x1;
x2_1 = x2;
}

void *func_2() {
int r2;
int x2;
int x3;
//event.Skip

/*§Skip§*/
/*§Skip§*/
__VERIFIER_HARDWARE(NULL);
<customTag2>x2</customTag> = 2;

<customTag2>r2</customTag> = atomic_load_explicit(&<customTag2>x3</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

__VERIFIER_HARDWARE(NULL);
atomic_thread_fence(memory_order_seq_cst);
r2_2 = r2;
x2_2 = x2;
x3_2 = x3;
}

void *func_3() {
int r2;
int x3;
int x4;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag3>x3</customTag> = 2;

__VERIFIER_HARDWARE(NULL);
<customTag3>r2</customTag> = atomic_load_explicit(&<customTag3>x4</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

atomic_thread_fence(memory_order_seq_cst);
r2_3 = r2;
x3_3 = x3;
x4_3 = x4;
}

void *func_4() {
int r2;
int x4;
int x5;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag4>x4</customTag> = 2;

__VERIFIER_HARDWARE(NULL);
<customTag4>r2</customTag> = atomic_load_explicit(&<customTag4>x5</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

atomic_thread_fence(memory_order_seq_cst);
r2_4 = r2;
x4_4 = x4;
x5_4 = x5;
}

void *func_5() {
int r2;
int x5;
int x6;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag5>x5</customTag> = 2;

__VERIFIER_HARDWARE(NULL);
<customTag5>r2</customTag> = atomic_load_explicit(&<customTag5>x6</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

atomic_thread_fence(memory_order_seq_cst);
r2_5 = r2;
x5_5 = x5;
x6_5 = x6;
}

void *func_6() {
int r2;
int x6;
int x7;
//event.Skip

/*§Skip§*/
/*§Skip§*/
__VERIFIER_HARDWARE(NULL);
<customTag6>x6</customTag> = 2;

<customTag6>r2</customTag> = atomic_load_explicit(&<customTag6>x7</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

__VERIFIER_HARDWARE(NULL);
atomic_thread_fence(memory_order_seq_cst);
r2_6 = r2;
x6_6 = x6;
x7_6 = x7;
}

void *func_7() {
int r2;
int x0;
int x7;
//event.Skip

/*§Skip§*/
/*§Skip§*/
__VERIFIER_HARDWARE(NULL);
<customTag7>x7</customTag> = 2;

<customTag7>r2</customTag> = atomic_load_explicit(&<customTag7>x0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

__VERIFIER_HARDWARE(NULL);
atomic_thread_fence(memory_order_seq_cst);
r2_7 = r2;
x0_7 = x0;
x7_7 = x7;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
atomic_init(&mem3, 0); //event.Init, 0);
atomic_init(&mem4, 0); //event.Init, 0);
atomic_init(&mem5, 0); //event.Init, 0);
atomic_init(&mem6, 0); //event.Init, 0);
atomic_init(&mem7, 0); //event.Init, 0);
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
pthread_t thread_5;
pthread_create(&thread_5, NULL, &func_5, NULL);
pthread_t thread_6;
pthread_create(&thread_6, NULL, &func_6, NULL);
pthread_t thread_7;
pthread_create(&thread_7, NULL, &func_7, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
pthread_join(thread_3, NULL);
pthread_join(thread_4, NULL);
pthread_join(thread_5, NULL);
pthread_join(thread_6, NULL);
pthread_join(thread_7, NULL);
int x0 = atomic_load_explicit(&mem0, memory_order_relaxed);
int x1 = atomic_load_explicit(&mem1, memory_order_relaxed);
int x2 = atomic_load_explicit(&mem2, memory_order_relaxed);
int x3 = atomic_load_explicit(&mem3, memory_order_relaxed);
int x4 = atomic_load_explicit(&mem4, memory_order_relaxed);
int x5 = atomic_load_explicit(&mem5, memory_order_relaxed);
int x6 = atomic_load_explicit(&mem6, memory_order_relaxed);
int x7 = atomic_load_explicit(&mem7, memory_order_relaxed);
assert(((((((((<customAssertionTag7>r2</customAssertionTag> == 0) && (<customAssertionTag0>r2</customAssertionTag> == 0)) && (<customAssertionTag1>r2</customAssertionTag> == 0)) && (<customAssertionTag2>r2</customAssertionTag> == 0)) && (<customAssertionTag3>r2</customAssertionTag> == 0)) && (<customAssertionTag4>r2</customAssertionTag> == 0)) && (<customAssertionTag5>r2</customAssertionTag> == 0)) && (<customAssertionTag6>r2</customAssertionTag> == 0)));
return 0;
}


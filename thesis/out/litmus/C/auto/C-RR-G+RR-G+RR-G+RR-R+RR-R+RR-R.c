#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int r2_0;
int x0_0;
int x1_0;
int r1_0;
int r2_1;
int x1_1;
int x2_1;
int r1_1;
int r2_2;
int x2_2;
int x3_2;
int r1_2;
int r2_3;
int x3_3;
int x4_3;
int r1_3;
int r2_4;
int x4_4;
int x5_4;
int r1_4;
int r2_5;
int x0_5;
int x5_5;
int r1_5;
int x0_6;
int x1_6;
int x2_6;
int x3_6;
int x4_6;
int x5_6;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
atomic_int mem3/* Address */;
atomic_int mem4/* Address */;
atomic_int mem5/* Address */;
void *func_0() {
int r2;
int x0;
int x1;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag0>r1</customTag> = atomic_load_explicit(&<customTag0>x0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

__VERIFIER_HARDWARE(NULL);
<customTag0>r2</customTag> = atomic_load_explicit(&<customTag0>x1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

atomic_thread_fence(memory_order_seq_cst);
r2_0 = r2;
x0_0 = x0;
x1_0 = x1;
r1_0 = r1;
}

void *func_1() {
int r2;
int x1;
int x2;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>r1</customTag> = atomic_load_explicit(&<customTag1>x1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

__VERIFIER_HARDWARE(NULL);
<customTag1>r2</customTag> = atomic_load_explicit(&<customTag1>x2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

atomic_thread_fence(memory_order_seq_cst);
r2_1 = r2;
x1_1 = x1;
x2_1 = x2;
r1_1 = r1;
}

void *func_2() {
int r2;
int x2;
int x3;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag2>r1</customTag> = atomic_load_explicit(&<customTag2>x2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

__VERIFIER_HARDWARE(NULL);
<customTag2>r2</customTag> = atomic_load_explicit(&<customTag2>x3</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

atomic_thread_fence(memory_order_seq_cst);
r2_2 = r2;
x2_2 = x2;
x3_2 = x3;
r1_2 = r1;
}

void *func_3() {
int r2;
int x3;
int x4;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
__VERIFIER_HARDWARE(NULL);
<customTag3>r1</customTag> = atomic_load_explicit(&<customTag3>x3</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag3>r2</customTag> = atomic_load_explicit(&<customTag3>x4</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

__VERIFIER_HARDWARE(NULL);
atomic_thread_fence(memory_order_seq_cst);
r2_3 = r2;
x3_3 = x3;
x4_3 = x4;
r1_3 = r1;
}

void *func_4() {
int r2;
int x4;
int x5;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
__VERIFIER_HARDWARE(NULL);
<customTag4>r1</customTag> = atomic_load_explicit(&<customTag4>x4</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag4>r2</customTag> = atomic_load_explicit(&<customTag4>x5</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

__VERIFIER_HARDWARE(NULL);
atomic_thread_fence(memory_order_seq_cst);
r2_4 = r2;
x4_4 = x4;
x5_4 = x5;
r1_4 = r1;
}

void *func_5() {
int r2;
int x0;
int x5;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
__VERIFIER_HARDWARE(NULL);
<customTag5>r1</customTag> = atomic_load_explicit(&<customTag5>x5</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag5>r2</customTag> = atomic_load_explicit(&<customTag5>x0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

__VERIFIER_HARDWARE(NULL);
atomic_thread_fence(memory_order_seq_cst);
r2_5 = r2;
x0_5 = x0;
x5_5 = x5;
r1_5 = r1;
}

void *func_6() {
int x0;
int x1;
int x2;
int x3;
int x4;
int x5;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag6>x0</customTag> = 1;

<customTag6>x1</customTag> = 1;

<customTag6>x2</customTag> = 1;

<customTag6>x3</customTag> = 1;

<customTag6>x4</customTag> = 1;

<customTag6>x5</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
x0_6 = x0;
x1_6 = x1;
x2_6 = x2;
x3_6 = x3;
x4_6 = x4;
x5_6 = x5;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
atomic_init(&mem3, 0); //event.Init, 0);
atomic_init(&mem4, 0); //event.Init, 0);
atomic_init(&mem5, 0); //event.Init, 0);
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
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
pthread_join(thread_3, NULL);
pthread_join(thread_4, NULL);
pthread_join(thread_5, NULL);
pthread_join(thread_6, NULL);
int x0 = atomic_load_explicit(&mem0, memory_order_relaxed);
int x1 = atomic_load_explicit(&mem1, memory_order_relaxed);
int x2 = atomic_load_explicit(&mem2, memory_order_relaxed);
int x3 = atomic_load_explicit(&mem3, memory_order_relaxed);
int x4 = atomic_load_explicit(&mem4, memory_order_relaxed);
int x5 = atomic_load_explicit(&mem5, memory_order_relaxed);
assert(((((((((((((<customAssertionTag5>r2</customAssertionTag> == 0) && (<customAssertionTag0>r1</customAssertionTag> == 1)) && (<customAssertionTag0>r2</customAssertionTag> == 0)) && (<customAssertionTag1>r1</customAssertionTag> == 1)) && (<customAssertionTag1>r2</customAssertionTag> == 0)) && (<customAssertionTag2>r1</customAssertionTag> == 1)) && (<customAssertionTag2>r2</customAssertionTag> == 0)) && (<customAssertionTag3>r1</customAssertionTag> == 1)) && (<customAssertionTag3>r2</customAssertionTag> == 0)) && (<customAssertionTag4>r1</customAssertionTag> == 1)) && (<customAssertionTag4>r2</customAssertionTag> == 0)) && (<customAssertionTag5>r1</customAssertionTag> == 1)));
return 0;
}


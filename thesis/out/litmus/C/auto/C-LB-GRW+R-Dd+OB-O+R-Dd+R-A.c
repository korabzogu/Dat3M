#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int r3_0;
int x1_0;
int x2_0;
int u0_0;
int r1_0;
int DUMMY_REG_2308_1;
int x1_1;
int r1_1;
int r3_2;
int x2_2;
int x3_2;
int x4_2;
int r1_2;
int DUMMY_REG_2309_3;
int x3_3;
int r1_3;
int v0_4;
int x4_4;
int r1_4;
int v0_5;
int u0_5;
int r1_5;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
atomic_int mem3/* Address */;
atomic_int mem4/* Address */;
atomic_int mem5/* Address */;
atomic_int mem6/* Address */;
atomic_int mem7/* Address */;
void *func_0() {
int r3;
int x1;
int x2;
int u0;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag0>r3</customTag> = <customTag0>x2</customTag>;//event.Local

<customTag0>r1</customTag> = atomic_load_explicit(&<customTag0>u0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag0>x1</customTag> = <customTag0>r3</customTag>;

atomic_thread_fence(memory_order_seq_cst);
r3_0 = r3;
x1_0 = x1;
x2_0 = x2;
u0_0 = u0;
r1_0 = r1;
}

void *func_1() {
int DUMMY_REG_2308;
int x1;
int r1;
//event.Skip

/*§Skip§*/
<customTag1>DUMMY_REG_2308</customTag> = atomic_load_explicit(&<customTag1>x1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

<customTag1>r1</customTag> = <customTag1>DUMMY_REG_2308</customTag>;//event.Local

__VERIFIER_HARDWARE(NULL);
<customTag1>r1</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
DUMMY_REG_2308_1 = DUMMY_REG_2308;
x1_1 = x1;
r1_1 = r1;
}

void *func_2() {
int r3;
int x2;
int x3;
int x4;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag2>r3</customTag> = <customTag2>x4</customTag>;//event.Local

<customTag2>r1</customTag> = atomic_load_explicit(&<customTag2>x2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag2>x3</customTag> = <customTag2>r3</customTag>;

atomic_thread_fence(memory_order_seq_cst);
r3_2 = r3;
x2_2 = x2;
x3_2 = x3;
x4_2 = x4;
r1_2 = r1;
}

void *func_3() {
int DUMMY_REG_2309;
int x3;
int r1;
//event.Skip

/*§Skip§*/
<customTag3>DUMMY_REG_2309</customTag> = atomic_load_explicit(&<customTag3>x3</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

<customTag3>r1</customTag> = <customTag3>DUMMY_REG_2309</customTag>;//event.Local

<customTag3>r1</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
DUMMY_REG_2309_3 = DUMMY_REG_2309;
x3_3 = x3;
r1_3 = r1;
}

void *func_4() {
int v0;
int x4;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag4>r1</customTag> = atomic_load_explicit(&<customTag4>x4</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

<customTag4>v0</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
v0_4 = v0;
x4_4 = x4;
r1_4 = r1;
}

void *func_5() {
int v0;
int u0;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag5>r1</customTag> = atomic_load_explicit(&<customTag5>v0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

__VERIFIER_HARDWARE(NULL);
<customTag5>u0</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
v0_5 = v0;
u0_5 = u0;
r1_5 = r1;
}

int main() {
atomic_init(&mem0, &mem1); //event.Init, &mem1/* Address */);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, &mem3); //event.Init, &mem3/* Address */);
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
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
pthread_join(thread_3, NULL);
pthread_join(thread_4, NULL);
pthread_join(thread_5, NULL);
int y1 = atomic_load_explicit(&mem1, memory_order_relaxed);
int x1 = atomic_load_explicit(&mem0, memory_order_relaxed);
int y3 = atomic_load_explicit(&mem3, memory_order_relaxed);
int x2 = atomic_load_explicit(&mem5, memory_order_relaxed);
int v0 = atomic_load_explicit(&mem7, memory_order_relaxed);
int x3 = atomic_load_explicit(&mem2, memory_order_relaxed);
int u0 = atomic_load_explicit(&mem4, memory_order_relaxed);
int x4 = atomic_load_explicit(&mem6, memory_order_relaxed);
assert(((((((<customAssertionTag5>r1</customAssertionTag> == 1) && (<customAssertionTag0>r1</customAssertionTag> == 1)) && (<customAssertionTag1>r1</customAssertionTag> == &mem5/* Address */)) && (<customAssertionTag2>r1</customAssertionTag> == 1)) && (<customAssertionTag3>r1</customAssertionTag> == &mem6/* Address */)) && (<customAssertionTag4>r1</customAssertionTag> == 1)));
return 0;
}


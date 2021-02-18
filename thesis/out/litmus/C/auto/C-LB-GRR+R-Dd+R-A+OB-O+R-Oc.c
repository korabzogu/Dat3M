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
int DUMMY_REG_2911_1;
int x1_1;
int r1_1;
int x2_2;
int x3_2;
int r1_2;
int x3_3;
int x4_3;
int r1_3;
int r2_4;
int r4_4;
int v0_4;
int x4_4;
int r1_4;
int v0_5;
int u0_5;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
atomic_int mem3/* Address */;
atomic_int mem4/* Address */;
atomic_int mem5/* Address */;
atomic_int mem6/* Address */;
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
int DUMMY_REG_2911;
int x1;
int r1;
//event.Skip

/*§Skip§*/
<customTag1>DUMMY_REG_2911</customTag> = atomic_load_explicit(&<customTag1>x1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

<customTag1>r1</customTag> = <customTag1>DUMMY_REG_2911</customTag>;//event.Local

<customTag1>r1</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
DUMMY_REG_2911_1 = DUMMY_REG_2911;
x1_1 = x1;
r1_1 = r1;
}

void *func_2() {
int x2;
int x3;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag2>r1</customTag> = atomic_load_explicit(&<customTag2>x2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

__VERIFIER_HARDWARE(NULL);
<customTag2>x3</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
x2_2 = x2;
x3_2 = x3;
r1_2 = r1;
}

void *func_3() {
int x3;
int x4;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag3>r1</customTag> = atomic_load_explicit(&<customTag3>x3</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag3>x4</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
x3_3 = x3;
x4_3 = x4;
r1_3 = r1;
}

void *func_4() {
int r2;
int r4;
int v0;
int x4;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag4>r4</customTag> = 1;//event.Local

<customTag4>r1</customTag> = atomic_load_explicit(&<customTag4>x4</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag4>r4</customTag> = (<customTag4>r1</customTag>)==(<customTag4>r4</customTag>);//event.Local

if(<customTag4>r4</customTag>) {
<customTag4>r2</customTag> = atomic_load_explicit(&<customTag4>v0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag4>r2</customTag> = atomic_load_explicit(&<customTag4>v0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

atomic_thread_fence(memory_order_seq_cst);
r2_4 = r2;
r4_4 = r4;
v0_4 = v0;
x4_4 = x4;
r1_4 = r1;
}

void *func_5() {
int v0;
int u0;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag5>v0</customTag> = 1;

__VERIFIER_HARDWARE(NULL);
<customTag5>u0</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
v0_5 = v0;
u0_5 = u0;
}

int main() {
atomic_init(&mem0, &mem1); //event.Init, &mem1/* Address */);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
atomic_init(&mem3, 0); //event.Init, 0);
atomic_init(&mem4, 0); //event.Init, 0);
atomic_init(&mem5, 0); //event.Init, 0);
atomic_init(&mem6, 0); //event.Init, 0);
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
int x2 = atomic_load_explicit(&mem3, memory_order_relaxed);
int v0 = atomic_load_explicit(&mem6, memory_order_relaxed);
int u0 = atomic_load_explicit(&mem2, memory_order_relaxed);
int x3 = atomic_load_explicit(&mem4, memory_order_relaxed);
int x4 = atomic_load_explicit(&mem5, memory_order_relaxed);
assert(((((((<customAssertionTag4>r2</customAssertionTag> == 0) && (<customAssertionTag0>r1</customAssertionTag> == 1)) && (<customAssertionTag1>r1</customAssertionTag> == &mem3/* Address */)) && (<customAssertionTag2>r1</customAssertionTag> == 1)) && (<customAssertionTag3>r1</customAssertionTag> == 1)) && (<customAssertionTag4>r1</customAssertionTag> == 1)));
return 0;
}


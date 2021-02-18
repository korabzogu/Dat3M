#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int r3_0;
int x0_0;
int x1_0;
int r1_0;
int r4_1;
int y0_1;
int x1_1;
int r1_1;
int DUMMY_REG_3216_1;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
void *func_0() {
int r3;
int x0;
int x1;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag0>r3</customTag> = <customTag0>x0</customTag>;//event.Local

__VERIFIER_HARDWARE(NULL);
<customTag0>r1</customTag> = atomic_load_explicit(&<customTag0>x0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag0>x1</customTag> = <customTag0>r3</customTag>;

__VERIFIER_HARDWARE(NULL);
atomic_thread_fence(memory_order_seq_cst);
r3_0 = r3;
x0_0 = x0;
x1_0 = x1;
r1_0 = r1;
}

void *func_1() {
int r4;
int y0;
int x1;
int r1;
int DUMMY_REG_3216;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>r4</customTag> = <customTag1>y0</customTag>;//event.Local

__VERIFIER_HARDWARE(NULL);
<customTag1>DUMMY_REG_3216</customTag> = atomic_load_explicit(&<customTag1>x1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

<customTag1>r1</customTag> = <customTag1>DUMMY_REG_3216</customTag>;//event.Local

<customTag1>r1</customTag> = 1;

__VERIFIER_HARDWARE(NULL);
atomic_thread_fence(memory_order_seq_cst);
r4_1 = r4;
y0_1 = y0;
x1_1 = x1;
r1_1 = r1;
DUMMY_REG_3216_1 = DUMMY_REG_3216;
}

int main() {
atomic_init(&mem0, &mem1); //event.Init, &mem1/* Address */);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int y0 = atomic_load_explicit(&mem1, memory_order_relaxed);
int x0 = atomic_load_explicit(&mem2, memory_order_relaxed);
int x1 = atomic_load_explicit(&mem0, memory_order_relaxed);
assert(((<customAssertionTag0>r1</customAssertionTag> == 1) && (<customAssertionTag1>r1</customAssertionTag> == &mem2/* Address */)));
return 0;
}


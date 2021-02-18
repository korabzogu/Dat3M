#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int x1_0;
int u0_0;
int r1_0;
int DUMMY_REG_2570_1;
int x1_1;
int x2_1;
int r1_1;
int DUMMY_REG_2571_2;
int x2_2;
int x3_2;
int r1_2;
int DUMMY_REG_2572_3;
int x3_3;
int u0_3;
int r1_3;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
atomic_int mem3/* Address */;
void *func_0() {
int x1;
int u0;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag0>r1</customTag> = atomic_load_explicit(&<customTag0>u0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use usual C assign */);//event.Load

<customTag0>x1</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
x1_0 = x1;
u0_0 = u0;
r1_0 = r1;
}

void *func_1() {
int DUMMY_REG_2570;
int x1;
int x2;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>DUMMY_REG_2570</customTag> = atomic_load_explicit(&<customTag1>x1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

<customTag1>r1</customTag> = <customTag1>DUMMY_REG_2570</customTag>;//event.Local

<customTag1>x2</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
DUMMY_REG_2570_1 = DUMMY_REG_2570;
x1_1 = x1;
x2_1 = x2;
r1_1 = r1;
}

void *func_2() {
int DUMMY_REG_2571;
int x2;
int x3;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag2>DUMMY_REG_2571</customTag> = atomic_load_explicit(&<customTag2>x2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

<customTag2>r1</customTag> = <customTag2>DUMMY_REG_2571</customTag>;//event.Local

<customTag2>x3</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
DUMMY_REG_2571_2 = DUMMY_REG_2571;
x2_2 = x2;
x3_2 = x3;
r1_2 = r1;
}

void *func_3() {
int DUMMY_REG_2572;
int x3;
int u0;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag3>DUMMY_REG_2572</customTag> = atomic_load_explicit(&<customTag3>x3</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

<customTag3>r1</customTag> = <customTag3>DUMMY_REG_2572</customTag>;//event.Local

<customTag3>u0</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
DUMMY_REG_2572_3 = DUMMY_REG_2572;
x3_3 = x3;
u0_3 = u0;
r1_3 = r1;
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
int x1 = atomic_load_explicit(&mem1, memory_order_relaxed);
int x2 = atomic_load_explicit(&mem2, memory_order_relaxed);
int u0 = atomic_load_explicit(&mem0, memory_order_relaxed);
int x3 = atomic_load_explicit(&mem3, memory_order_relaxed);
assert(((((<customAssertionTag0>r1</customAssertionTag> == 1) && (<customAssertionTag1>r1</customAssertionTag> == 1)) && (<customAssertionTag2>r1</customAssertionTag> == 1)) && (<customAssertionTag3>r1</customAssertionTag> == 1)));
return 0;
}


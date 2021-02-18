#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int x_0;
int y_0;
int DUMMY_REG_3467_0;
int r1_0;
int r3_1;
int x_1;
int y_1;
int DUMMY_REG_3468_1;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
void *func_0() {
int x;
int y;
int DUMMY_REG_3467;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag0>DUMMY_REG_3467</customTag> = atomic_load_explicit(&<customTag0>x</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

<customTag0>r1</customTag> = <customTag0>DUMMY_REG_3467</customTag>;//event.Local

<customTag0>y</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
x_0 = x;
y_0 = y;
DUMMY_REG_3467_0 = DUMMY_REG_3467;
r1_0 = r1;
}

void *func_1() {
int r3;
int x;
int y;
int DUMMY_REG_3468;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>DUMMY_REG_3468</customTag> = atomic_load_explicit(&<customTag1>y</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

<customTag1>r3</customTag> = <customTag1>DUMMY_REG_3468</customTag>;//event.Local

<customTag1>x</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
r3_1 = r3;
x_1 = x;
y_1 = y;
DUMMY_REG_3468_1 = DUMMY_REG_3468;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
assert(((<customAssertionTag0>r1</customAssertionTag> == 1) && (<customAssertionTag1>r3</customAssertionTag> == 1)));
return 0;
}


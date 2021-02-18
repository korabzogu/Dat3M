#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int x_0;
int y_0;
int y_1;
int r1_1;
int y_2;
int r1_2;
int r2_3;
int x_3;
int y_3;
int r1_3;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
void *func_0() {
int x;
int y;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag0>x</customTag> = 1;

<customTag0>y</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
x_0 = x;
y_0 = y;
}

void *func_1() {
int y;
int r1;
//event.Skip

/*§Skip§*/
<customTag1>r1</customTag> = atomic_load_explicit(&<customTag1>y</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag1>y</customTag> = 2;

atomic_thread_fence(memory_order_seq_cst);
y_1 = y;
r1_1 = r1;
}


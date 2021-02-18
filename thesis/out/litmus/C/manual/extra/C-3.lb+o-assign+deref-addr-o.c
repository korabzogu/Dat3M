#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int x_0;
int y_0;
int r1_0;
int r3_1;
int r4_1;
int r9_1;
int y_1;
int z_1;
int DUMMY_REG_3469_1;
int r5_2;
int r6_2;
int DUMMY_REG_3470_2;
int r9_2;
int x_2;
int z_2;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
void *func_0() {
int x;
int y;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag0>r1</customTag> = atomic_load_explicit(&<customTag0>x</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag0>y</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
x_0 = x;
y_0 = y;
r1_0 = r1;
}

void *func_1() {
int r3;
int r4;
int r9;
int y;
int z;
int DUMMY_REG_3469;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>DUMMY_REG_3469</customTag> = atomic_load_explicit(&<customTag1>y</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

<customTag1>r3</customTag> = <customTag1>DUMMY_REG_3469</customTag>;//event.Local

<customTag1>r9</customTag> = (<customTag1>r3</customTag> & 8) /* IEXPRBIN */;//event.Local

<customTag1>r4</customTag> = (<customTag1>z</customTag> + <customTag1>r9</customTag>) /* IEXPRBIN */;//event.Local

<customTag1>r4</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
r3_1 = r3;
r4_1 = r4;
r9_1 = r9;
y_1 = y;
z_1 = z;
DUMMY_REG_3469_1 = DUMMY_REG_3469;
}

void *func_2() {
int r5;
int r6;
int DUMMY_REG_3470;
int r9;
int x;
int z;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag2>DUMMY_REG_3470</customTag> = atomic_load_explicit(&<customTag2>z</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

<customTag2>r5</customTag> = <customTag2>DUMMY_REG_3470</customTag>;//event.Local

<customTag2>r9</customTag> = (<customTag2>r5</customTag> & 8) /* IEXPRBIN */;//event.Local

<customTag2>r6</customTag> = (<customTag2>x</customTag> + <customTag2>r9</customTag>) /* IEXPRBIN */;//event.Local

<customTag2>r6</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
r5_2 = r5;
r6_2 = r6;
DUMMY_REG_3470_2 = DUMMY_REG_3470;
r9_2 = r9;
x_2 = x;
z_2 = z;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_t thread_2;
pthread_create(&thread_2, NULL, &func_2, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
int z = atomic_load_explicit(&mem2, memory_order_relaxed);
assert((((<customAssertionTag0>r1</customAssertionTag> == 1) && (<customAssertionTag1>r3</customAssertionTag> == 1)) && (<customAssertionTag2>r5</customAssertionTag> == 1)));
return 0;
}


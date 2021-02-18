#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int r4_0;
int x_0;
int y_0;
int r1_0;
int r2_1;
int r5_1;
int y_1;
int z_1;
int r3_2;
int r6_2;
int x_2;
int z_2;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
void *func_0() {
int r4;
int x;
int y;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag0>r1</customTag> = atomic_load_explicit(&<customTag0>x</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag0>r4</customTag> = (<customTag0>r1</customTag>)!=(0);//event.Local

if(<customTag0>r4</customTag>) {
<customTag0>y</customTag> = 1;

} else {}

<customTag0>y</customTag> = 1;

//event.Skip

//event.Skip

atomic_thread_fence(memory_order_seq_cst);
r4_0 = r4;
x_0 = x;
y_0 = y;
r1_0 = r1;
}

void *func_1() {
int r2;
int r5;
int y;
int z;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>r2</customTag> = atomic_load_explicit(&<customTag1>y</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag1>r5</customTag> = (<customTag1>r2</customTag>)!=(0);//event.Local

if(<customTag1>r5</customTag>) {
<customTag1>z</customTag> = 1;

} else {}

<customTag1>z</customTag> = 1;

//event.Skip

//event.Skip

atomic_thread_fence(memory_order_seq_cst);
r2_1 = r2;
r5_1 = r5;
y_1 = y;
z_1 = z;
}

void *func_2() {
int r3;
int r6;
int x;
int z;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag2>r3</customTag> = atomic_load_explicit(&<customTag2>z</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag2>r6</customTag> = (<customTag2>r3</customTag>)!=(0);//event.Local

if(<customTag2>r6</customTag>) {
<customTag2>x</customTag> = 1;

} else {}

<customTag2>x</customTag> = 1;

//event.Skip

//event.Skip

atomic_thread_fence(memory_order_seq_cst);
r3_2 = r3;
r6_2 = r6;
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
assert((((<customAssertionTag0>r1</customAssertionTag> == 1) && (<customAssertionTag1>r2</customAssertionTag> == 1)) && (<customAssertionTag2>r3</customAssertionTag> == 1)));
return 0;
}


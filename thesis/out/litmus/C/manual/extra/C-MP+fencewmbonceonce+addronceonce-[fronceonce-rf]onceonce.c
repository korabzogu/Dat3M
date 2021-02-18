#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int x_0;
int y_0;
int r2_1;
int r3_1;
int x_1;
int y_1;
int r1000_1;
int r0_1;
int r1_1;
int x_2;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
void *func_0() {
int x;
int y;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag0>x</customTag> = 2;

__VERIFIER_HARDWARE(NULL);
<customTag0>y</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
x_0 = x;
y_0 = y;
}

void *func_1() {
int r2;
int r3;
int x;
int y;
int r1000;
int r0;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>r0</customTag> = atomic_load_explicit(&<customTag1>y</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag1>r1</customTag> = (<customTag1>r0</customTag> & 8) /* IEXPRBIN */;//event.Local

<customTag1>r1000</customTag> = (<customTag1>x</customTag> + <customTag1>r1</customTag>) /* IEXPRBIN */;//event.Local

<customTag1>r2</customTag> = atomic_load_explicit(&<customTag1>r1000</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag1>r3</customTag> = atomic_load_explicit(&<customTag1>x</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

atomic_thread_fence(memory_order_seq_cst);
r2_1 = r2;
r3_1 = r3;
x_1 = x;
y_1 = y;
r1000_1 = r1000;
r0_1 = r0;
r1_1 = r1;
}

void *func_2() {
int x;
//event.Skip

/*§Skip§*/
<customTag2>x</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
x_2 = x;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
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
assert(((((x == 2) && (<customAssertionTag1>r0</customAssertionTag> == 1)) && (<customAssertionTag1>r2</customAssertionTag> == 0)) && (<customAssertionTag1>r3</customAssertionTag> == 1)));
return 0;
}


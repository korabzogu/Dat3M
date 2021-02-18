#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int r2_0;
int x_0;
int y_0;
int r0_0;
int r1_0;
int x_1;
int y_1;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
void *func_0() {
int r2;
int x;
int y;
int r0;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>y</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

<customTag0>r1</customTag> = <customTag0>r0</customTag>;//event.Local

<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>x</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

<customTag0>r2</customTag> = <customTag0>r0</customTag>;//event.Local

atomic_thread_fence(memory_order_seq_cst);
r2_0 = r2;
x_0 = x;
y_0 = y;
r0_0 = r0;
r1_0 = r1;
}

void *func_1() {
int x;
int y;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>x</customTag> = 3;

__VERIFIER_HARDWARE(NULL);
<customTag1>y</customTag> = 4;

atomic_thread_fence(memory_order_seq_cst);
x_1 = x;
y_1 = y;
}

int main() {
atomic_init(&mem0, 1); //event.Init, 1);
atomic_init(&mem1, 2); //event.Init, 2);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
assert(((<customAssertionTag0>r1</customAssertionTag> == 4) && (<customAssertionTag0>r2</customAssertionTag> == 1)));
return 0;
}


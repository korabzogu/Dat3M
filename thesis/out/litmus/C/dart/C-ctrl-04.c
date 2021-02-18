#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int x_0;
int y_0;
int r0_0;
int r1_0;
int x_1;
int y_1;
int r0_1;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
void *func_0() {
int x;
int y;
int r0;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag0>r0</customTag> = 1;//event.Local

<customTag0>r1</customTag> = atomic_load_explicit(&<customTag0>y</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

if((<customTag0>r1</customTag>)==(0)) {
<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>y</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

} else {}

<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>y</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

//event.Skip

//event.Skip

if((<customTag0>r0</customTag>)==(1)) {
<customTag0>x</customTag> = 1;

} else {}

<customTag0>x</customTag> = 1;

//event.Skip

//event.Skip

atomic_thread_fence(memory_order_seq_cst);
x_0 = x;
y_0 = y;
r0_0 = r0;
r1_0 = r1;
}

void *func_1() {
int x;
int y;
int r0;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>r0</customTag> = atomic_load_explicit(&<customTag1>x</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

__VERIFIER_HARDWARE(NULL);
<customTag1>x</customTag> = 2;

__VERIFIER_HARDWARE(NULL);
<customTag1>y</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
x_1 = x;
y_1 = y;
r0_1 = r0;
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
assert((((<customAssertionTag0>r0</customAssertionTag> == 1) && (<customAssertionTag0>r1</customAssertionTag> == 1)) && (<customAssertionTag1>r0</customAssertionTag> == 1)));
return 0;
}


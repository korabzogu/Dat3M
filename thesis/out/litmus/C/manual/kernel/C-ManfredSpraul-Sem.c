#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int r2_0;
int lck_0;
int x_0;
int y_0;
int complex_mode_0;
int r1_0;
int r3_1;
int r4_1;
int lck_1;
int x_1;
int y_1;
int complex_mode_1;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
atomic_int mem3/* Address */;
void *func_0() {
int r2;
int lck;
int x;
int y;
int complex_mode;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag0>lck</customTag> = 1;

__VERIFIER_HARDWARE(NULL);
<customTag0>r1</customTag> = atomic_load_explicit(&<customTag0>complex_mode</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

if((<customTag0>r1</customTag>)==(0)) {
<customTag0>r2</customTag> = atomic_load_explicit(&<customTag0>x</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag0>y</customTag> = 1;

} else {}

<customTag0>r2</customTag> = atomic_load_explicit(&<customTag0>x</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag0>y</customTag> = 1;

//event.Skip

//event.Skip

<customTag0>lck</customTag> = 0;

atomic_thread_fence(memory_order_seq_cst);
r2_0 = r2;
lck_0 = lck;
x_0 = x;
y_0 = y;
complex_mode_0 = complex_mode;
r1_0 = r1;
}

void *func_1() {
int r3;
int r4;
int lck;
int x;
int y;
int complex_mode;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag1>complex_mode</customTag> = 1;

__VERIFIER_HARDWARE(NULL);
<customTag1>r3</customTag> = atomic_load_explicit(&<customTag1>lck</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>r3</customTag>)==(0)) {
__VERIFIER_HARDWARE(NULL);
<customTag1>x</customTag> = 1;

<customTag1>r4</customTag> = atomic_load_explicit(&<customTag1>y</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

__VERIFIER_HARDWARE(NULL);
<customTag1>x</customTag> = 1;

<customTag1>r4</customTag> = atomic_load_explicit(&<customTag1>y</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

atomic_thread_fence(memory_order_seq_cst);
r3_1 = r3;
r4_1 = r4;
lck_1 = lck;
x_1 = x;
y_1 = y;
complex_mode_1 = complex_mode;
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
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int lck = atomic_load_explicit(&mem0, memory_order_relaxed);
int x = atomic_load_explicit(&mem2, memory_order_relaxed);
int y = atomic_load_explicit(&mem3, memory_order_relaxed);
int complex_mode = atomic_load_explicit(&mem1, memory_order_relaxed);
assert((((<customAssertionTag0>r1</customAssertionTag> == 0) && (<customAssertionTag1>r3</customAssertionTag> == 0)) && ((<customAssertionTag0>r2</customAssertionTag> == 1) && (<customAssertionTag1>r4</customAssertionTag> == 0))));
return 0;
}


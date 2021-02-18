#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int c_0;
int v_0;
int w_0;
int x_0;
int y_0;
int r1_0;
int r2_1;
int r3_1;
int r4_1;
int c_1;
int v_1;
int r1_1;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
atomic_int mem3/* Address */;
atomic_int mem4/* Address */;
atomic_int mem5/* Address */;
void *func_0() {
int c;
int v;
int w;
int x;
int y;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag0>w</customTag> = <customTag0>y</customTag>;

__VERIFIER_HARDWARE(NULL);
<customTag0>r1</customTag> = atomic_load_explicit(&<customTag0>c</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>r1</customTag>)==(<customTag0>x</customTag>)) {
<customTag0>c</customTag> = -1;

__VERIFIER_HARDWARE(NULL);
<customTag0>x</customTag> = -1;

} else {<customTag0>x</customTag> = -1;

}

<customTag0>c</customTag> = -1;

__VERIFIER_HARDWARE(NULL);
<customTag0>x</customTag> = -1;

//event.Skip

<customTag0>x</customTag> = -1;

//event.Skip

atomic_thread_fence(memory_order_seq_cst);
c_0 = c;
v_0 = v;
w_0 = w;
x_0 = x;
y_0 = y;
r1_0 = r1;
}

void *func_1() {
int r2;
int r3;
int r4;
int c;
int v;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
__VERIFIER_HARDWARE(NULL);
<customTag1>r1</customTag> = atomic_load_explicit(&<customTag1>c</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>r1</customTag>)==(-1)) {
<customTag1>r1</customTag> = atomic_load_explicit(&<customTag1>v</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>r1</customTag> = atomic_load_explicit(&<customTag1>v</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>r2</customTag> = atomic_load_explicit(&<customTag1>r1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

<customTag1>c</customTag> = <customTag1>r2</customTag>;

__VERIFIER_HARDWARE(NULL);
__VERIFIER_HARDWARE(NULL);
<customTag1>r3</customTag> = atomic_load_explicit(&<customTag1>c</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>r3</customTag>)==(-1)) {
<customTag1>r3</customTag> = atomic_load_explicit(&<customTag1>v</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>r3</customTag> = atomic_load_explicit(&<customTag1>v</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>r4</customTag> = atomic_load_explicit(&<customTag1>r3</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

<customTag1>c</customTag> = <customTag1>r4</customTag>;

__VERIFIER_HARDWARE(NULL);
atomic_thread_fence(memory_order_seq_cst);
r2_1 = r2;
r3_1 = r3;
r4_1 = r4;
c_1 = c;
v_1 = v;
r1_1 = r1;
}

int main() {
atomic_init(&mem0, 1); //event.Init, 1);
atomic_init(&mem1, &mem0); //event.Init, &mem0/* Address */);
atomic_init(&mem2, &mem1); //event.Init, &mem1/* Address */);
atomic_init(&mem3, &mem2); //event.Init, &mem2/* Address */);
atomic_init(&mem4, &mem3); //event.Init, &mem3/* Address */);
atomic_init(&mem5, &mem3); //event.Init, &mem3/* Address */);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int c = atomic_load_explicit(&mem5, memory_order_relaxed);
int v = atomic_load_explicit(&mem4, memory_order_relaxed);
int w = atomic_load_explicit(&mem3, memory_order_relaxed);
int x = atomic_load_explicit(&mem2, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
int z = atomic_load_explicit(&mem0, memory_order_relaxed);
assert(((((<customAssertionTag1>r1</customAssertionTag> == -1) || (<customAssertionTag1>r2</customAssertionTag> == -1)) || (<customAssertionTag1>r3</customAssertionTag> == -1)) || (<customAssertionTag1>r4</customAssertionTag> == -1)));
return 0;
}


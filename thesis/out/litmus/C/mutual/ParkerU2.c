#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int c_0;
int parkCounter_0;
int counter_0;
int cond_0;
int parkCounter_1;
int cond_1;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
void *func_0() {
int c;
int parkCounter;
int counter;
int cond;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag0>c</customTag> = atomic_load_explicit(&<customTag0>cond</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>c</customTag>)==(0)) {
<customTag0>counter</customTag> = atomic_load_explicit(&<customTag0>parkCounter</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag0>parkCounter</customTag> = 0;

<customTag0>c</customTag> = atomic_load_explicit(&<customTag0>cond</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>c</customTag>)==(0)) {
<customTag0>counter</customTag> = atomic_load_explicit(&<customTag0>parkCounter</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag0>parkCounter</customTag> = 0;

<customTag0>c</customTag> = atomic_load_explicit(&<customTag0>cond</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>counter</customTag> = atomic_load_explicit(&<customTag0>parkCounter</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag0>parkCounter</customTag> = 0;

<customTag0>c</customTag> = atomic_load_explicit(&<customTag0>cond</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag0>counter</customTag> = atomic_load_explicit(&<customTag0>parkCounter</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag0>parkCounter</customTag> = 0;

<customTag0>c</customTag> = atomic_load_explicit(&<customTag0>cond</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>c</customTag>)==(0)) {
<customTag0>counter</customTag> = atomic_load_explicit(&<customTag0>parkCounter</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag0>parkCounter</customTag> = 0;

<customTag0>c</customTag> = atomic_load_explicit(&<customTag0>cond</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>counter</customTag> = atomic_load_explicit(&<customTag0>parkCounter</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag0>parkCounter</customTag> = 0;

<customTag0>c</customTag> = atomic_load_explicit(&<customTag0>cond</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

atomic_thread_fence(memory_order_seq_cst);
c_0 = c;
parkCounter_0 = parkCounter;
counter_0 = counter;
cond_0 = cond;
}

void *func_1() {
int parkCounter;
int cond;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>cond</customTag> = 1;

<customTag1>parkCounter</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
parkCounter_1 = parkCounter;
cond_1 = cond;
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
int parkCounter = atomic_load_explicit(&mem1, memory_order_relaxed);
int cond = atomic_load_explicit(&mem0, memory_order_relaxed);
assert((cond == 10));
return 0;
}


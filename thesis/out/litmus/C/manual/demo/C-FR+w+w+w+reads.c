#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int a_0;
int a_1;
int a_2;
int r2_3;
int a_3;
int r3_3;
int r4_3;
int r1_3;
atomic_int mem0/* Address */;
void *func_0() {
int a;
//event.Skip

/*§Skip§*/
<customTag0>a</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
a_0 = a;
}

void *func_1() {
int a;
//event.Skip

/*§Skip§*/
<customTag1>a</customTag> = 2;

atomic_thread_fence(memory_order_seq_cst);
a_1 = a;
}

void *func_2() {
int a;
//event.Skip

/*§Skip§*/
<customTag2>a</customTag> = 3;

atomic_thread_fence(memory_order_seq_cst);
a_2 = a;
}

void *func_3() {
int r2;
int a;
int r3;
int r4;
int r1;
//event.Skip

/*§Skip§*/
<customTag3>r1</customTag> = atomic_load_explicit(&<customTag3>a</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag3>r2</customTag> = atomic_load_explicit(&<customTag3>a</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag3>r3</customTag> = atomic_load_explicit(&<customTag3>a</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag3>r4</customTag> = atomic_load_explicit(&<customTag3>a</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

atomic_thread_fence(memory_order_seq_cst);
r2_3 = r2;
a_3 = a;
r3_3 = r3;
r4_3 = r4;
r1_3 = r1;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_t thread_2;
pthread_create(&thread_2, NULL, &func_2, NULL);
pthread_t thread_3;
pthread_create(&thread_3, NULL, &func_3, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
pthread_join(thread_3, NULL);
int a = atomic_load_explicit(&mem0, memory_order_relaxed);
assert(((((<customAssertionTag3>r1</customAssertionTag> == 0) && (<customAssertionTag3>r2</customAssertionTag> == 1)) && (<customAssertionTag3>r3</customAssertionTag> == 2)) && (<customAssertionTag3>r4</customAssertionTag> == 3)));
return 0;
}


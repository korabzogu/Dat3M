#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int a_0;
int d_0;
int a_1;
int b_1;
int r1_1;
int r2_2;
int b_2;
int d_2;
int r1_2;
int d_3;
int e_3;
int r1_3;
int r2_4;
int a_4;
int e_4;
int r1_4;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
atomic_int mem3/* Address */;
void *func_0() {
int a;
int d;
//event.Skip

/*§Skip§*/
/*§Skip§*/
__VERIFIER_HARDWARE(NULL);
<customTag0>a</customTag> = 1;

<customTag0>d</customTag> = 1;

__VERIFIER_HARDWARE(NULL);
atomic_thread_fence(memory_order_seq_cst);
a_0 = a;
d_0 = d;
}

void *func_1() {
int a;
int b;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>r1</customTag> = atomic_load_explicit(&<customTag1>a</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

__VERIFIER_HARDWARE(NULL);
<customTag1>b</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
a_1 = a;
b_1 = b;
r1_1 = r1;
}

void *func_2() {
int r2;
int b;
int d;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
__VERIFIER_HARDWARE(NULL);
<customTag2>r1</customTag> = atomic_load_explicit(&<customTag2>b</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag2>r2</customTag> = atomic_load_explicit(&<customTag2>d</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

__VERIFIER_HARDWARE(NULL);
atomic_thread_fence(memory_order_seq_cst);
r2_2 = r2;
b_2 = b;
d_2 = d;
r1_2 = r1;
}

void *func_3() {
int d;
int e;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag3>r1</customTag> = atomic_load_explicit(&<customTag3>d</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

__VERIFIER_HARDWARE(NULL);
<customTag3>e</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
d_3 = d;
e_3 = e;
r1_3 = r1;
}

void *func_4() {
int r2;
int a;
int e;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
__VERIFIER_HARDWARE(NULL);
<customTag4>r1</customTag> = atomic_load_explicit(&<customTag4>e</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag4>r2</customTag> = atomic_load_explicit(&<customTag4>a</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

__VERIFIER_HARDWARE(NULL);
atomic_thread_fence(memory_order_seq_cst);
r2_4 = r2;
a_4 = a;
e_4 = e;
r1_4 = r1;
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
pthread_t thread_2;
pthread_create(&thread_2, NULL, &func_2, NULL);
pthread_t thread_3;
pthread_create(&thread_3, NULL, &func_3, NULL);
pthread_t thread_4;
pthread_create(&thread_4, NULL, &func_4, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
pthread_join(thread_3, NULL);
pthread_join(thread_4, NULL);
int a = atomic_load_explicit(&mem0, memory_order_relaxed);
int b = atomic_load_explicit(&mem2, memory_order_relaxed);
int d = atomic_load_explicit(&mem1, memory_order_relaxed);
int e = atomic_load_explicit(&mem3, memory_order_relaxed);
assert(((((((<customAssertionTag1>r1</customAssertionTag> == 1) && (<customAssertionTag2>r1</customAssertionTag> == 1)) && (<customAssertionTag2>r2</customAssertionTag> == 0)) && (<customAssertionTag3>r1</customAssertionTag> == 1)) && (<customAssertionTag4>r1</customAssertionTag> == 1)) && (<customAssertionTag4>r2</customAssertionTag> == 0)));
return 0;
}


#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int a_0;
int b_0;
int r1_0;
int r2_1;
int a_1;
int b_1;
int r1_1;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
void *func_0() {
int a;
int b;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag0>r1</customTag> = atomic_load_explicit(&<customTag0>a</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag0>b</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
a_0 = a;
b_0 = b;
r1_0 = r1;
}

void *func_1() {
int r2;
int a;
int b;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>r2</customTag> = atomic_load_explicit(&<customTag1>b</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag1>a</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
r2_1 = r2;
a_1 = a;
b_1 = b;
r1_1 = r1;
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
int a = atomic_load_explicit(&mem0, memory_order_relaxed);
int b = atomic_load_explicit(&mem1, memory_order_relaxed);
assert(((<customAssertionTag0>r1</customAssertionTag> == 1) && (<customAssertionTag1>r2</customAssertionTag> == 1)));
return 0;
}


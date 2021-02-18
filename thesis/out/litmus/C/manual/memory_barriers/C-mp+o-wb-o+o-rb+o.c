#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int a_0;
int x_0;
int r2_1;
int a_1;
int x_1;
int r1_1;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
void *func_0() {
int a;
int x;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag0>a</customTag> = 1;

__VERIFIER_HARDWARE(NULL);
<customTag0>x</customTag> = 2;

atomic_thread_fence(memory_order_seq_cst);
a_0 = a;
x_0 = x;
}

void *func_1() {
int r2;
int a;
int x;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>r1</customTag> = atomic_load_explicit(&<customTag1>x</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

__VERIFIER_HARDWARE(NULL);
<customTag1>r2</customTag> = atomic_load_explicit(&<customTag1>a</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

atomic_thread_fence(memory_order_seq_cst);
r2_1 = r2;
a_1 = a;
x_1 = x;
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
int x = atomic_load_explicit(&mem1, memory_order_relaxed);
assert(((<customAssertionTag1>r1</customAssertionTag> == 2) && (<customAssertionTag1>r2</customAssertionTag> == 0)));
return 0;
}


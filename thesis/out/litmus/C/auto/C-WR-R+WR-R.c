#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int r2_0;
int x0_0;
int x1_0;
int r2_1;
int x0_1;
int x1_1;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
void *func_0() {
int r2;
int x0;
int x1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
__VERIFIER_HARDWARE(NULL);
<customTag0>x0</customTag> = 2;

<customTag0>r2</customTag> = atomic_load_explicit(&<customTag0>x1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

__VERIFIER_HARDWARE(NULL);
atomic_thread_fence(memory_order_seq_cst);
r2_0 = r2;
x0_0 = x0;
x1_0 = x1;
}

void *func_1() {
int r2;
int x0;
int x1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
__VERIFIER_HARDWARE(NULL);
<customTag1>x1</customTag> = 2;

<customTag1>r2</customTag> = atomic_load_explicit(&<customTag1>x0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

__VERIFIER_HARDWARE(NULL);
atomic_thread_fence(memory_order_seq_cst);
r2_1 = r2;
x0_1 = x0;
x1_1 = x1;
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
int x0 = atomic_load_explicit(&mem0, memory_order_relaxed);
int x1 = atomic_load_explicit(&mem1, memory_order_relaxed);
assert(((<customAssertionTag1>r2</customAssertionTag> == 0) && (<customAssertionTag0>r2</customAssertionTag> == 0)));
return 0;
}


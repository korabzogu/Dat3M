#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int x1_0;
int u0_0;
int r1_0;
int x1_1;
int u0_1;
int r1_1;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
void *func_0() {
int x1;
int u0;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag0>r1</customTag> = atomic_load_explicit(&<customTag0>u0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

__VERIFIER_HARDWARE(NULL);
<customTag0>x1</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
x1_0 = x1;
u0_0 = u0;
r1_0 = r1;
}

void *func_1() {
int x1;
int u0;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>r1</customTag> = atomic_load_explicit(&<customTag1>x1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag1>u0</customTag> = <customTag1>r1</customTag>;

atomic_thread_fence(memory_order_seq_cst);
x1_1 = x1;
u0_1 = u0;
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
int x1 = atomic_load_explicit(&mem1, memory_order_relaxed);
int u0 = atomic_load_explicit(&mem0, memory_order_relaxed);
assert(((<customAssertionTag0>r1</customAssertionTag> == 1) && (<customAssertionTag1>r1</customAssertionTag> == 1)));
return 0;
}


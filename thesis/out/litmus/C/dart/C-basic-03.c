#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int b_0;
int r0_0;
int r1_0;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
void *func_0() {
int b;
int r0;
int r1;
//event.Skip

<customTag0>r1</customTag> = 1;//event.Local

/*§Skip§*/
<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>b</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
b_0 = b;
r0_0 = r0;
r1_0 = r1;
}

int main() {
atomic_init(&mem0, 1); //event.Init, 1);
atomic_init(&mem1, 1); //event.Init, 1);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_join(thread_0, NULL);
int a = atomic_load_explicit(&mem0, memory_order_relaxed);
int b = atomic_load_explicit(&mem1, memory_order_relaxed);
assert(!(((<customAssertionTag0>r0</customAssertionTag> == 1) && (<customAssertionTag0>r1</customAssertionTag> == 1))));
return 0;
}


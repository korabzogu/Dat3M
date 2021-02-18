#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int X0_0;
int X1_0;
int X3_0;
int X9_1;
int X0_1;
int X3_1;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
void *func_0() {
int X0;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag0>X0</customTag> = 1;//event.Local

<customTag0>X1</customTag> = <customTag0>X0</customTag>;

<customTag0>X3</customTag> = <customTag0>X1</customTag>;

atomic_thread_fence(memory_order_seq_cst);
X0_0 = X0;
}

void *func_1() {
int X9;
int X0;
//event.Skip

/*§Skip§*/
<customTag1>X9</customTag> = -1;//event.Local

<customTag1>X0</customTag> = atomic_load_explicit(&<customTag1>X3</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

<customTag1>X9</customTag> = atomic_load_explicit(&<customTag1>X0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
X9_1 = X9;
X0_1 = X0;
}

int main() {
atomic_init(&mem0, &mem1); //event.Init, &mem1/* Address */);
atomic_init(&mem1, -1); //event.Init, -1);
atomic_init(&mem2, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int x = atomic_load_explicit(&mem2, memory_order_relaxed);
int y = atomic_load_explicit(&mem0, memory_order_relaxed);
int z = atomic_load_explicit(&mem1, memory_order_relaxed);
assert(((<customAssertionTag1>X0</customAssertionTag> == &mem2/* Address */) && (<customAssertionTag1>X9</customAssertionTag> == 0)));
return 0;
}


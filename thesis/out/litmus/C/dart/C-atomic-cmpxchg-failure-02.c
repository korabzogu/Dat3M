#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int x_0;
int z_0;
int r0_0;
int r1_0;
int x_1;
int z_1;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
void *func_0() {
int x;
int z;
int r0;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
 atomic_store(<customTag0>r0</customTag>, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ z,2,1));

<customTag0>r1</customTag> = atomic_load_explicit(&<customTag0>x</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
x_0 = x;
z_0 = z;
r0_0 = r0;
r1_0 = r1;
}

void *func_1() {
int x;
int z;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>x</customTag> = 1;

<customTag1>z</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
x_1 = x;
z_1 = z;
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
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int z = atomic_load_explicit(&mem1, memory_order_relaxed);
assert(((<customAssertionTag0>r0</customAssertionTag> == 1) && (<customAssertionTag0>r1</customAssertionTag> == 0)));
return 0;
}


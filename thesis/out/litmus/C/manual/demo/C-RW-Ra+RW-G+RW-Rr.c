#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int x_0;
int y_0;
int r1_0;
int r2_1;
int x_1;
int z_1;
int r3_2;
int y_2;
int z_2;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
void *func_0() {
int x;
int y;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
__VERIFIER_HARDWARE(NULL);
<customTag0>x</customTag> = 1;

<customTag0>r1</customTag> = atomic_load_explicit(&<customTag0>y</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

__VERIFIER_HARDWARE(NULL);
atomic_thread_fence(memory_order_seq_cst);
x_0 = x;
y_0 = y;
r1_0 = r1;
}

void *func_1() {
int r2;
int x;
int z;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>r2</customTag> = atomic_load_explicit(&<customTag1>x</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

__VERIFIER_HARDWARE(NULL);
<customTag1>z</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
r2_1 = r2;
x_1 = x;
z_1 = z;
}

void *func_2() {
int r3;
int y;
int z;
//event.Skip

/*§Skip§*/
/*§Skip§*/
__VERIFIER_HARDWARE(NULL);
<customTag2>r3</customTag> = atomic_load_explicit(&<customTag2>z</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag2>y</customTag> = 1;

__VERIFIER_HARDWARE(NULL);
atomic_thread_fence(memory_order_seq_cst);
r3_2 = r3;
y_2 = y;
z_2 = z;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_t thread_2;
pthread_create(&thread_2, NULL, &func_2, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
int z = atomic_load_explicit(&mem2, memory_order_relaxed);
assert((((<customAssertionTag0>r1</customAssertionTag> == 1) && (<customAssertionTag1>r2</customAssertionTag> == 1)) && (<customAssertionTag2>r3</customAssertionTag> == 1)));
return 0;
}


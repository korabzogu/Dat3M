#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int r2_0;
int x1_0;
int y_0;
int x1_1;
int x2_1;
int r1_1;
int x2_2;
int z_2;
int r1_2;
int y_3;
int z_3;
int r1_3;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
atomic_int mem3/* Address */;
void *func_0() {
int r2;
int x1;
int y;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag0>r2</customTag> = atomic_load_explicit(&<customTag0>y</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag0>x1</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
r2_0 = r2;
x1_0 = x1;
y_0 = y;
}

void *func_1() {
int x1;
int x2;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>r1</customTag> = atomic_load_explicit(&<customTag1>x1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

<customTag1>x2</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
x1_1 = x1;
x2_1 = x2;
r1_1 = r1;
}

void *func_2() {
int x2;
int z;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag2>r1</customTag> = atomic_load_explicit(&<customTag2>x2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

<customTag2>z</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
x2_2 = x2;
z_2 = z;
r1_2 = r1;
}

void *func_3() {
int y;
int z;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag3>r1</customTag> = atomic_load_explicit(&<customTag3>z</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

__VERIFIER_HARDWARE(NULL);
<customTag3>y</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
y_3 = y;
z_3 = z;
r1_3 = r1;
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
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
pthread_join(thread_3, NULL);
int x1 = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
int x2 = atomic_load_explicit(&mem2, memory_order_relaxed);
int z = atomic_load_explicit(&mem3, memory_order_relaxed);
assert(((((<customAssertionTag1>r1</customAssertionTag> == 1) && (<customAssertionTag2>r1</customAssertionTag> == 1)) && (<customAssertionTag0>r2</customAssertionTag> == 1)) && (<customAssertionTag3>r1</customAssertionTag> == 1)));
return 0;
}


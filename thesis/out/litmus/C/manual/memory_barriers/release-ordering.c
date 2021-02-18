#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int r2_0;
int u_0;
int x_0;
int y_0;
int z_0;
int r1_0;
int y_1;
int z_1;
int r3_2;
int u_2;
int x_2;
int x_3;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
atomic_int mem3/* Address */;
void *func_0() {
int r2;
int u;
int x;
int y;
int z;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag0>r1</customTag> = atomic_load_explicit(&<customTag0>z</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag0>u</customTag> = 1;

<customTag0>r2</customTag> = atomic_load_explicit(&<customTag0>x</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag0>y</customTag> = <customTag0>r2</customTag>;

atomic_thread_fence(memory_order_seq_cst);
r2_0 = r2;
u_0 = u;
x_0 = x;
y_0 = y;
z_0 = z;
r1_0 = r1;
}

void *func_1() {
int y;
int z;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>y</customTag> = 3;

__VERIFIER_HARDWARE(NULL);
<customTag1>z</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
y_1 = y;
z_1 = z;
}

void *func_2() {
int r3;
int u;
int x;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag2>r3</customTag> = atomic_load_explicit(&<customTag2>u</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

__VERIFIER_HARDWARE(NULL);
<customTag2>x</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
r3_2 = r3;
u_2 = u;
x_2 = x;
}

void *func_3() {
int x;
//event.Skip

/*§Skip§*/
<customTag3>x</customTag> = 2;

atomic_thread_fence(memory_order_seq_cst);
x_3 = x;
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
int u = atomic_load_explicit(&mem3, memory_order_relaxed);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
int z = atomic_load_explicit(&mem2, memory_order_relaxed);
assert((((((<customAssertionTag0>r1</customAssertionTag> == 1) && (<customAssertionTag0>r2</customAssertionTag> == 2)) && (<customAssertionTag2>r3</customAssertionTag> == 1)) && (x == 2)) && (y == 3)));
return 0;
}


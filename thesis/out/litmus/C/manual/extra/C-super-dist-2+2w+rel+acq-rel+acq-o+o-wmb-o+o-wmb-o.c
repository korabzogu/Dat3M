#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int x_0;
int x_1;
int y_1;
int r1_1;
int r2_2;
int y_2;
int z_2;
int a_3;
int z_3;
int a_4;
int x_4;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
atomic_int mem3/* Address */;
void *func_0() {
int x;
//event.Skip

/*§Skip§*/
<customTag0>x</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
x_0 = x;
}

void *func_1() {
int x;
int y;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>r1</customTag> = atomic_load_explicit(&<customTag1>x</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

<customTag1>y</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
x_1 = x;
y_1 = y;
r1_1 = r1;
}

void *func_2() {
int r2;
int y;
int z;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag2>r2</customTag> = atomic_load_explicit(&<customTag2>y</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

<customTag2>z</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
r2_2 = r2;
y_2 = y;
z_2 = z;
}

void *func_3() {
int a;
int z;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag3>z</customTag> = 2;

__VERIFIER_HARDWARE(NULL);
<customTag3>a</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
a_3 = a;
z_3 = z;
}

void *func_4() {
int a;
int x;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag4>a</customTag> = 2;

__VERIFIER_HARDWARE(NULL);
<customTag4>x</customTag> = 2;

atomic_thread_fence(memory_order_seq_cst);
a_4 = a;
x_4 = x;
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
pthread_t thread_4;
pthread_create(&thread_4, NULL, &func_4, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
pthread_join(thread_3, NULL);
pthread_join(thread_4, NULL);
int a = atomic_load_explicit(&mem3, memory_order_relaxed);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
int z = atomic_load_explicit(&mem2, memory_order_relaxed);
assert((((((<customAssertionTag1>r1</customAssertionTag> == 1) && (<customAssertionTag2>r2</customAssertionTag> == 1)) && (z == 2)) && (a == 2)) && (x == 1)));
return 0;
}


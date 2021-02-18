#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int x_0;
int x_1;
int y_1;
int r1_1;
int y_2;
int z_2;
int r2_3;
int a_3;
int z_3;
int a_4;
int c_4;
int r3_5;
int c_5;
int x_5;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
atomic_int mem3/* Address */;
atomic_int mem4/* Address */;
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
int y;
int z;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag2>y</customTag> = 2;

<customTag2>z</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
y_2 = y;
z_2 = z;
}

void *func_3() {
int r2;
int a;
int z;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag3>r2</customTag> = atomic_load_explicit(&<customTag3>z</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

<customTag3>a</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
r2_3 = r2;
a_3 = a;
z_3 = z;
}

void *func_4() {
int a;
int c;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag4>a</customTag> = 2;

__VERIFIER_HARDWARE(NULL);
<customTag4>c</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
a_4 = a;
c_4 = c;
}

void *func_5() {
int r3;
int c;
int x;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag5>r3</customTag> = atomic_load_explicit(&<customTag5>c</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

<customTag5>x</customTag> = 2;

atomic_thread_fence(memory_order_seq_cst);
r3_5 = r3;
c_5 = c;
x_5 = x;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
atomic_init(&mem3, 0); //event.Init, 0);
atomic_init(&mem4, 0); //event.Init, 0);
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
pthread_t thread_5;
pthread_create(&thread_5, NULL, &func_5, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
pthread_join(thread_3, NULL);
pthread_join(thread_4, NULL);
pthread_join(thread_5, NULL);
int a = atomic_load_explicit(&mem3, memory_order_relaxed);
int c = atomic_load_explicit(&mem4, memory_order_relaxed);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
int z = atomic_load_explicit(&mem2, memory_order_relaxed);
assert(((((((<customAssertionTag1>r1</customAssertionTag> == 1) && (y == 2)) && (<customAssertionTag3>r2</customAssertionTag> == 1)) && (a == 2)) && (<customAssertionTag5>r3</customAssertionTag> == 1)) && (x == 1)));
return 0;
}


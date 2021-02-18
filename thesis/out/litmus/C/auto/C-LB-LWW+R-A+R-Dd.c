#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int x1_0;
int u0_0;
int r3_1;
int x1_1;
int x2_1;
int u0_1;
int r1_1;
int DUMMY_REG_2503_2;
int x2_2;
int r1_2;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
atomic_int mem3/* Address */;
void *func_0() {
int x1;
int u0;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag0>u0</customTag> = 3;

<customTag0>x1</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
x1_0 = x1;
u0_0 = u0;
}

void *func_1() {
int r3;
int x1;
int x2;
int u0;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag1>r3</customTag> = <customTag1>u0</customTag>;//event.Local

<customTag1>r1</customTag> = atomic_load_explicit(&<customTag1>x1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

<customTag1>x2</customTag> = <customTag1>r3</customTag>;

atomic_thread_fence(memory_order_seq_cst);
r3_1 = r3;
x1_1 = x1;
x2_1 = x2;
u0_1 = u0;
r1_1 = r1;
}

void *func_2() {
int DUMMY_REG_2503;
int x2;
int r1;
//event.Skip

/*§Skip§*/
<customTag2>DUMMY_REG_2503</customTag> = atomic_load_explicit(&<customTag2>x2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

<customTag2>r1</customTag> = <customTag2>DUMMY_REG_2503</customTag>;//event.Local

<customTag2>r1</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
DUMMY_REG_2503_2 = DUMMY_REG_2503;
x2_2 = x2;
r1_2 = r1;
}

int main() {
atomic_init(&mem0, &mem1); //event.Init, &mem1/* Address */);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
atomic_init(&mem3, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_t thread_2;
pthread_create(&thread_2, NULL, &func_2, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
int y2 = atomic_load_explicit(&mem1, memory_order_relaxed);
int x1 = atomic_load_explicit(&mem3, memory_order_relaxed);
int x2 = atomic_load_explicit(&mem0, memory_order_relaxed);
int u0 = atomic_load_explicit(&mem2, memory_order_relaxed);
assert((((u0 == 3) && (<customAssertionTag1>r1</customAssertionTag> == 1)) && (<customAssertionTag2>r1</customAssertionTag> == &mem2/* Address */)));
return 0;
}


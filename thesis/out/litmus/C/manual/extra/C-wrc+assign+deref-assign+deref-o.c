#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int y_0;
int r3_1;
int x_1;
int y_1;
int DUMMY_REG_3463_1;
int r2_2;
int x_2;
int DUMMY_REG_3464_2;
int y_2;
int r1_2;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
void *func_0() {
int y;
//event.Skip

/*§Skip§*/
<customTag0>y</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
y_0 = y;
}

void *func_1() {
int r3;
int x;
int y;
int DUMMY_REG_3463;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>DUMMY_REG_3463</customTag> = atomic_load_explicit(&<customTag1>y</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

<customTag1>r3</customTag> = <customTag1>DUMMY_REG_3463</customTag>;//event.Local

<customTag1>x</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
r3_1 = r3;
x_1 = x;
y_1 = y;
DUMMY_REG_3463_1 = DUMMY_REG_3463;
}

void *func_2() {
int r2;
int x;
int DUMMY_REG_3464;
int y;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag2>DUMMY_REG_3464</customTag> = atomic_load_explicit(&<customTag2>x</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

<customTag2>r1</customTag> = <customTag2>DUMMY_REG_3464</customTag>;//event.Local

<customTag2>r2</customTag> = atomic_load_explicit(&<customTag2>y</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

atomic_thread_fence(memory_order_seq_cst);
r2_2 = r2;
x_2 = x;
DUMMY_REG_3464_2 = DUMMY_REG_3464;
y_2 = y;
r1_2 = r1;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
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
assert((((<customAssertionTag1>r3</customAssertionTag> == 1) && (<customAssertionTag2>r1</customAssertionTag> == 1)) && (<customAssertionTag2>r2</customAssertionTag> == 0)));
return 0;
}


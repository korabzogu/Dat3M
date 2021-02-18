#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int a_0;
int x_0;
int r2_1;
int a_1;
int r9_1;
int x_1;
int DUMMY_REG_3466_1;
int r1000_1;
int r1_1;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
void *func_0() {
int a;
int x;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag0>a</customTag> = 3;

<customTag0>x</customTag> = 4;

atomic_thread_fence(memory_order_seq_cst);
a_0 = a;
x_0 = x;
}

void *func_1() {
int r2;
int a;
int r9;
int x;
int DUMMY_REG_3466;
int r1000;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>DUMMY_REG_3466</customTag> = atomic_load_explicit(&<customTag1>x</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

<customTag1>r1</customTag> = <customTag1>DUMMY_REG_3466</customTag>;//event.Local

<customTag1>r9</customTag> = (<customTag1>r1</customTag> & 128) /* IEXPRBIN */;//event.Local

<customTag1>r1000</customTag> = (<customTag1>a</customTag> + <customTag1>r9</customTag>) /* IEXPRBIN */;//event.Local

<customTag1>r2</customTag> = atomic_load_explicit(&<customTag1>r1000</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

atomic_thread_fence(memory_order_seq_cst);
r2_1 = r2;
a_1 = a;
r9_1 = r9;
x_1 = x;
DUMMY_REG_3466_1 = DUMMY_REG_3466;
r1000_1 = r1000;
r1_1 = r1;
}

int main() {
atomic_init(&mem0, 1); //event.Init, 1);
atomic_init(&mem1, 2); //event.Init, 2);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int a = atomic_load_explicit(&mem0, memory_order_relaxed);
int x = atomic_load_explicit(&mem1, memory_order_relaxed);
assert(((<customAssertionTag1>r1</customAssertionTag> == 4) && (<customAssertionTag1>r2</customAssertionTag> == 1)));
return 0;
}


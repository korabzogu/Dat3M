#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int X0_0;
int X1_0;
int X2_0;
int X3_0;
int X0_1;
int X1_1;
int X2_1;
int X3_1;
int X4_1;
int X5_1;
int X6_1;
int X7_1;
int DUMMY_REG_1039_1;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
void *func_0() {
int X0;
int X2;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag0>X0</customTag> = 1;//event.Local

<customTag0>X1</customTag> = <customTag0>X0</customTag>;

// TODO: atomic_thread_fence(memory_order_release); DMB event.FenceOpt

<customTag0>X2</customTag> = 1;//event.Local

<customTag0>X3</customTag> = <customTag0>X2</customTag>;

atomic_thread_fence(memory_order_seq_cst);
X0_0 = X0;
X2_0 = X2;
}

void *func_1() {
int X0;
int X2;
int X3;
int X4;
int X5;
int X6;
int DUMMY_REG_1039;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>X0</customTag> = atomic_load_explicit(&<customTag1>X1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

<customTag1>X2</customTag> = atomic_load_explicit(&<customTag1>X1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

<customTag1>X3</customTag> = 2;//event.Local

<customTag1>X1</customTag> = <customTag1>X3</customTag>;

<customTag1>X4</customTag> = atomic_load_explicit(&<customTag1>X1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

<customTag1>X5</customTag> = (<customTag1>X4</customTag> ^ <customTag1>X4</customTag>) /* IEXPRBIN */;//event.Local

<customTag1>DUMMY_REG_1039</customTag> = (<customTag1>X7</customTag> + <customTag1>X5</customTag>) /* IEXPRBIN */;//event.Local

<customTag1>X6</customTag> = atomic_load_explicit(&<customTag1>DUMMY_REG_1039</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
X0_1 = X0;
X2_1 = X2;
X3_1 = X3;
X4_1 = X4;
X5_1 = X5;
X6_1 = X6;
DUMMY_REG_1039_1 = DUMMY_REG_1039;
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
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
assert(((((((x == 1) && (y == 2)) && (<customAssertionTag1>X0</customAssertionTag> == 1)) && (<customAssertionTag1>X2</customAssertionTag> == 1)) && (<customAssertionTag1>X4</customAssertionTag> == 2)) && (<customAssertionTag1>X6</customAssertionTag> == 0)));
return 0;
}


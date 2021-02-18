#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int X0_0;
int X1_0;
int X2_0;
int X3_0;
int X8_1;
int X9_1;
int X10_1;
int X0_1;
int X1_1;
int X2_1;
int DUMMY_REG_1243_1;
int X3_1;
int X4_1;
int X5_1;
int X6_1;
int X7_1;
int X0_2;
int X1_2;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
atomic_int mem3/* Address */;
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
int X8;
int X9;
int X0;
int X2;
int DUMMY_REG_1243;
int X3;
int X5;
int X6;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag1>X0</customTag> = atomic_load_explicit(&<customTag1>X1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

<customTag1>X2</customTag> = (<customTag1>X0</customTag> ^ <customTag1>X0</customTag>) /* IEXPRBIN */;//event.Local

<customTag1>DUMMY_REG_1243</customTag> = (<customTag1>X4</customTag> + <customTag1>X2</customTag>) /* IEXPRBIN */;//event.Local

<customTag1>X3</customTag> = atomic_load_explicit(&<customTag1>DUMMY_REG_1243</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

<customTag1>X5</customTag> = atomic_load_explicit(&<customTag1>X4</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

if(X5 != 0){
goto LC00;//event.CondJump
}

LC00://event.Label

<customTag1>X6</customTag> = 1;//event.Local

<customTag1>X7</customTag> = <customTag1>X6</customTag>;

<customTag1>X8</customTag> = atomic_load_explicit(&<customTag1>X7</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

if(X8 != 0){
goto LC01;//event.CondJump
}

LC01://event.Label

<customTag1>X9</customTag> = atomic_load_explicit(&<customTag1>X10</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
X8_1 = X8;
X9_1 = X9;
X0_1 = X0;
X2_1 = X2;
DUMMY_REG_1243_1 = DUMMY_REG_1243;
X3_1 = X3;
X5_1 = X5;
X6_1 = X6;
}

void *func_2() {
int X0;
//event.Skip

/*§Skip§*/
<customTag2>X0</customTag> = 2;//event.Local

<customTag2>X1</customTag> = <customTag2>X0</customTag>;

atomic_thread_fence(memory_order_seq_cst);
X0_2 = X0;
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
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
int a = atomic_load_explicit(&mem3, memory_order_relaxed);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
int z = atomic_load_explicit(&mem2, memory_order_relaxed);
assert(((((((a == 2) && (x == 1)) && (y == 1)) && (<customAssertionTag1>X0</customAssertionTag> == 1)) && (<customAssertionTag1>X8</customAssertionTag> == 2)) && (<customAssertionTag1>X9</customAssertionTag> == 0)));
return 0;
}


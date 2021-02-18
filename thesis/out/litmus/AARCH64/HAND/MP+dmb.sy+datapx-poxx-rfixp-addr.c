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
int DUMMY_REG_74_1;
int X9_1;
int X10_1;
int X12_1;
int X0_1;
int X1_1;
int X11_1;
int X2_1;
int X14_1;
int X13_1;
int X4_1;
int X5_1;
int X6_1;
int X7_1;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
atomic_int mem3/* Address */;
atomic_int mem4/* Address */;
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
int DUMMY_REG_74;
int X9;
int X10;
int X0;
int X11;
int X13;
int X4;
int X5;
int X7;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag1>X0</customTag> = atomic_load_explicit(&<customTag1>X1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

<customTag1>X4</customTag> = atomic_load_explicit(&<customTag1>X2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

<customTag1>X2</customTag> = <customTag1>X0</customTag>;

if(X5 != 0){
goto Fail1;//event.CondJump
}

<customTag1>X7</customTag> = 1;//event.Local

<customTag1>X8</customTag> = atomic_load_explicit(&<customTag1>X6</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

<customTag1>X6</customTag> = <customTag1>X7</customTag>;

if(X5 != 0){
goto Fail1;//event.CondJump
}

<customTag1>X9</customTag> = atomic_load_explicit(&<customTag1>X6</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

<customTag1>X10</customTag> = (<customTag1>X9</customTag> ^ <customTag1>X9</customTag>) /* IEXPRBIN */;//event.Local

<customTag1>DUMMY_REG_74</customTag> = (<customTag1>X12</customTag> + <customTag1>X10</customTag>) /* IEXPRBIN */;//event.Local

<customTag1>X11</customTag> = atomic_load_explicit(&<customTag1>DUMMY_REG_74</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

if(True){
goto Exit1;//event.CondJump
}

Fail1://event.Label

<customTag1>X13</customTag> = 0;//event.Local

<customTag1>X14</customTag> = <customTag1>X13</customTag>;

Exit1://event.Label

atomic_thread_fence(memory_order_seq_cst);
X8_1 = X8;
DUMMY_REG_74_1 = DUMMY_REG_74;
X9_1 = X9;
X10_1 = X10;
X0_1 = X0;
X11_1 = X11;
X13_1 = X13;
X4_1 = X4;
X5_1 = X5;
X7_1 = X7;
}

int main() {
atomic_init(&mem0, 1); //event.Init, 1);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
atomic_init(&mem3, 0); //event.Init, 0);
atomic_init(&mem4, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int a = atomic_load_explicit(&mem4, memory_order_relaxed);
int x = atomic_load_explicit(&mem1, memory_order_relaxed);
int y = atomic_load_explicit(&mem2, memory_order_relaxed);
int z = atomic_load_explicit(&mem3, memory_order_relaxed);
int ok = atomic_load_explicit(&mem0, memory_order_relaxed);
assert((((((((ok == 1) && (a == 1)) && (z == 1)) && (<customAssertionTag1>X0</customAssertionTag> == 1)) && (<customAssertionTag1>X8</customAssertionTag> == 0)) && (<customAssertionTag1>X9</customAssertionTag> == 1)) && (<customAssertionTag1>X11</customAssertionTag> == 0)));
return 0;
}


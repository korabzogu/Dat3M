#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int X0_0;
int X1_0;
int X2_0;
int X3_0;
int X4_0;
int X5_0;
int X6_0;
int X0_1;
int X1_1;
int X2_1;
int X3_1;
int X4_1;
int X5_1;
int X6_1;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
void *func_0() {
int X0;
int X2;
int X4;
int X6;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag0>X0</customTag> = 1;//event.Local

<customTag0>X1</customTag> = <customTag0>X0</customTag>;

<customTag0>X2</customTag> = atomic_load_explicit(&<customTag0>X3</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

if(X2 != 0){
goto LC00;//event.CondJump
}

LC00://event.Label

<customTag0>X4</customTag> = 1;//event.Local

<customTag0>X5</customTag> = <customTag0>X4</customTag>;

<customTag0>X6</customTag> = atomic_load_explicit(&<customTag0>X5</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
X0_0 = X0;
X2_0 = X2;
X4_0 = X4;
X6_0 = X6;
}

void *func_1() {
int X0;
int X2;
int X3;
int X4;
int X6;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>X0</customTag> = 2;//event.Local

<customTag1>X1</customTag> = <customTag1>X0</customTag>;

<customTag1>X2</customTag> = atomic_load_explicit(&<customTag1>X1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

<customTag1>X3</customTag> = (<customTag1>X2</customTag> ^ <customTag1>X2</customTag>) /* IEXPRBIN */;//event.Local

<customTag1>X6</customTag> = (<customTag1>X5</customTag> + <customTag1>X3</customTag>) /* IEXPRBIN */;//event.Local

<customTag1>X4</customTag> = atomic_load_explicit(&<customTag1>X6</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

atomic_thread_fence(memory_order_seq_cst);
X0_1 = X0;
X2_1 = X2;
X3_1 = X3;
X4_1 = X4;
X6_1 = X6;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
int z = atomic_load_explicit(&mem2, memory_order_relaxed);
assert((((((x == 1) && (z == 2)) && (<customAssertionTag0>X6</customAssertionTag> == 2)) && (<customAssertionTag1>X2</customAssertionTag> == 2)) && (<customAssertionTag1>X4</customAssertionTag> == 0)));
return 0;
}


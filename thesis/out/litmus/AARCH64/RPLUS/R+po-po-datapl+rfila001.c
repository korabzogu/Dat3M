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
int X7_0;
int X0_1;
int X1_1;
int X2_1;
int X3_1;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
void *func_0() {
int X0;
int X2;
int X4;
int X6;
int X7;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
X0 = 3;//event.Local

mem0/* Address */ = X0;

X2 = atomic_load_explicit(&mem1/* Address *//*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

X4 = atomic_load_explicit(&mem2/* Address *//*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

X6 = (X4 ^ X4) /* IEXPRBIN */;//event.Local

X6 = (X6 + 1) /* IEXPRBIN */;//event.Local

mem0/* Address */ = X6;

X7 = atomic_load_explicit(&mem0/* Address *//*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
X0_0 = X0;
X2_0 = X2;
X4_0 = X4;
X6_0 = X6;
X7_0 = X7;
}

void *func_1() {
int X0;
int X2;
int X3;
//event.Skip

/*§Skip§*/
X0 = 2;//event.Local

mem0/* Address */ = X0;

X2 = atomic_load_explicit(&mem0/* Address *//*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

X3 = atomic_load_explicit(&mem0/* Address *//*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
X0_1 = X0;
X2_1 = X2;
X3_1 = X3;
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
assert(((((x == 3) && (X7_0 == 2)) && (X3_1 == 3)) && (X2_1 == 2)));
return 0;
}


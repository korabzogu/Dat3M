#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int r2_0;
int r3_0;
int r4_0;
int r5_0;
int r6_0;
int r7_0;
int r1_0;
int r2_1;
int r3_1;
int r4_1;
int r1_1;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
void *func_0() {
int r3;
int r4;
int r6;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
r1 = 2;//event.Local

mem0/* Address */ = r1;

r3 = atomic_load_explicit(&mem0/* Address *//*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

r4 = atomic_load_explicit(&mem1/* Address *//*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

r6 = (r4 ^ r4) /* IEXPRBIN */;//event.Local

r6 = (r6 + 1) /* IEXPRBIN */;//event.Local

mem2/* Address */ = r6;

atomic_thread_fence(memory_order_seq_cst);
r3_0 = r3;
r4_0 = r4;
r6_0 = r6;
r1_0 = r1;
}

void *func_1() {
int r3;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
r1 = atomic_load_explicit(&mem2/* Address *//*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

r3 = (r1 ^ r1) /* IEXPRBIN */;//event.Local

r3 = (r3 + 1) /* IEXPRBIN */;//event.Local

mem0/* Address */ = r3;

atomic_thread_fence(memory_order_seq_cst);
r3_1 = r3;
r1_1 = r1;
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
assert((((r3_0 == 2) && (x == 2)) && (r1_1 == 1)));
return 0;
}


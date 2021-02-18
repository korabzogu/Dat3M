#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int r2_0;
int r5_0;
int r6_0;
int r1_0;
int r3_1;
int r4_1;
int r5_1;
int r6_1;
int r2_2;
int r5_2;
int r1_2;
int r2_3;
int r6_3;
int r1_3;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
void *func_0() {
int r2;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
r1 = 1;//event.Local

mem0/* Address */ = r1;

r2 = 2;//event.Local

mem1/* Address */ = r2;

atomic_thread_fence(memory_order_seq_cst);
r2_0 = r2;
r1_0 = r1;
}

void *func_1() {
int r3;
int r4;
//event.Skip

/*§Skip§*/
/*§Skip§*/
r3 = 3;//event.Local

mem1/* Address */ = r3;

r4 = 4;//event.Local

mem0/* Address */ = r4;

atomic_thread_fence(memory_order_seq_cst);
r3_1 = r3;
r4_1 = r4;
}

void *func_2() {
int r2;
int r1;
//event.Skip

/*§Skip§*/
r1 = atomic_load_explicit(&mem0/* Address *//*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

r2 = atomic_load_explicit(&mem0/* Address *//*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
r2_2 = r2;
r1_2 = r1;
}

void *func_3() {
int r2;
int r1;
//event.Skip

/*§Skip§*/
r1 = atomic_load_explicit(&mem1/* Address *//*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

r2 = atomic_load_explicit(&mem1/* Address *//*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
r2_3 = r2;
r1_3 = r1;
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
pthread_t thread_3;
pthread_create(&thread_3, NULL, &func_3, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
pthread_join(thread_3, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
assert(((((r1_2 == 4) && (r2_2 == 1)) && (r1_3 == 2)) && (r2_3 == 3)));
return 0;
}


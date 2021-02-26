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
int r1_1;
int r2_2;
int r3_2;
int r4_2;
int r5_2;
int r1_2;
atomic_int em0;
atomic_int em1;
void *func_0() {
int r3;
int r4;
int r5;
int r6;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
r1 = 2;//event.Local

mem0 = r1;

r3 = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

r4 = 4;//event.Local

mem0 = r4;

r5 = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

//event.Skip

if(r5 == r5){
goto LC00;//event.CondJump
}

LC00://event.Label

r6 = 1;//event.Local

mem1 = r6;

atomic_thread_fence(memory_order_seq_cst);
r3_0 = r3;
r4_0 = r4;
r5_0 = r5;
r6_0 = r6;
r1_0 = r1;
}

void *func_1() {
int r1;
//event.Skip

/*§Skip§*/
r1 = 3;//event.Local

mem0 = r1;

atomic_thread_fence(memory_order_seq_cst);
r1_1 = r1;
}

void *func_2() {
int r3;
int r5;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
r1 = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

r3 = (r1 ^ r1) /* IEXPRBIN */;//event.Local

r3 = (r3 + 1) /* IEXPRBIN */;//event.Local

mem0 = r3;

__VERIFIER_HARDWARE(NULL);
r5 = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
r3_2 = r3;
r5_2 = r5;
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
assert(((((r3_0 == 3) && (r5_0 == 4)) && (r5_2 == 2)) && (r1_2 == 1)));
return 0;
}

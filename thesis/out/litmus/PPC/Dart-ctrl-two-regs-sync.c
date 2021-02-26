#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int r2_0;
int r3_0;
int r4_0;
int r5_0;
int r7_0;
int r9_0;
int r1_0;
int r2_1;
int r3_1;
int r4_1;
int r5_1;
int r1_1;
atomic_int em0;
atomic_int em1;
atomic_int em2;
void *func_0() {
int r4;
int r5;
int r7;
int r9;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
r4 = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

r5 = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

r7 = (r4 + 1) /* IEXPRBIN */;//event.Local

//event.Skip

if(r4 != r5){
goto LC00;//event.CondJump
}

r9 = (r7 ^ r5) /* IEXPRBIN */;//event.Local

mem2 = r9;

LC00://event.Label

atomic_thread_fence(memory_order_seq_cst);
r4_0 = r4;
r5_0 = r5;
r7_0 = r7;
r9_0 = r9;
}

void *func_1() {
int r4;
int r5;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
r4 = atomic_load_explicit(&mem2, memory_order_relaxed);//event.Load

r5 = 1;//event.Local

__VERIFIER_HARDWARE(NULL);
mem0 = r5;

mem1 = r5;

atomic_thread_fence(memory_order_seq_cst);
r4_1 = r4;
r5_1 = r5;
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
assert((((r4_0 == 1) && (r5_0 == 1)) && (r4_1 == 3)));
return 0;
}


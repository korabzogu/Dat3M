#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int r2_0;
int r3_0;
int r4_0;
int r1_0;
int r2_1;
int r3_1;
int r4_1;
int r5_1;
int r6_1;
int r7_1;
int r8_1;
int r9_1;
int r1_1;
atomic_int em0;
atomic_int em1;
atomic_int em2;
void *func_0() {
int r3;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
r1 = 1;//event.Local

mem0 = r1;

__VERIFIER_HARDWARE(NULL);
r3 = 1;//event.Local

mem1 = r3;

atomic_thread_fence(memory_order_seq_cst);
r3_0 = r3;
r1_0 = r1;
}

void *func_1() {
int r3;
int r4;
int r6;
int r7;
int r8;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
r1 = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

r3 = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

//event.Skip

if(r3 == r3){
goto LC00;//event.CondJump
}

LC00://event.Label

r4 = 1;//event.Local

mem2 = r4;

r6 = atomic_load_explicit(&mem2, memory_order_relaxed);//event.Load

r7 = atomic_load_explicit(&mem2, memory_order_relaxed);//event.Load

//event.Skip

if(r7 == r7){
goto LC01;//event.CondJump
}

LC01://event.Label

__VERIFIER_HARDWARE(NULL);
r8 = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
r3_1 = r3;
r4_1 = r4;
r6_1 = r6;
r7_1 = r7;
r8_1 = r8;
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
assert(((r1_1 == 1) && (r8_1 == 0)));
return 0;
}


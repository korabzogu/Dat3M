#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int r2_0;
int r3_0;
int r4_0;
int r5_0;
int r1_0;
int r2_1;
int r3_1;
int r4_1;
int r1_1;
atomic_int em0;
atomic_int em1;
void *func_0() {
int r3;
int r4;
int r5;
//event.Skip

/*§Skip§*/
/*§Skip§*/
r4 = 0;//event.Local

r3 = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

r4 = (r3 + 1) /* IEXPRBIN */;//event.Local

r5 = 2;//event.Local

//event.Skip

if(r4 != r5){
goto LC00;//event.CondJump
}

mem1 = r5;

LC00://event.Label

atomic_thread_fence(memory_order_seq_cst);
r3_0 = r3;
r4_0 = r4;
r5_0 = r5;
}

void *func_1() {
int r3;
int r4;
//event.Skip

/*§Skip§*/
/*§Skip§*/
r3 = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

__VERIFIER_HARDWARE(NULL);
r4 = 1;//event.Local

mem0 = r4;

atomic_thread_fence(memory_order_seq_cst);
r3_1 = r3;
r4_1 = r4;
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
assert(((r3_0 == 1) && (r3_1 == 2)));
return 0;
}


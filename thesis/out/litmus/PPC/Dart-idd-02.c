#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int r2_0;
int r3_0;
int r4_0;
int r0_0;
int r1_0;
int r2_1;
int r3_1;
int r4_1;
int r0_1;
atomic_int em0;
atomic_int em1;
void *func_0() {
int r2;
int r0;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
r0 = 1;//event.Local

r1 = 1;//event.Local

r2 = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

//event.Skip

if(r1 != r1){
goto LC00;//event.CondJump
}

r1 = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

LC00://event.Label

//event.Skip

if(r1 != r0){
goto LC01;//event.CondJump
}

mem0 = r0;

LC01://event.Label

atomic_thread_fence(memory_order_seq_cst);
r2_0 = r2;
r0_0 = r0;
r1_0 = r1;
}

void *func_1() {
int r2;
int r0;
//event.Skip

/*§Skip§*/
/*§Skip§*/
r0 = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

__VERIFIER_HARDWARE(NULL);
r2 = 1;//event.Local

mem1 = r2;

atomic_thread_fence(memory_order_seq_cst);
r2_1 = r2;
r0_1 = r0;
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
assert(((((r0_0 == 1) && (r1_0 == 1)) && (r2_0 == 1)) && (r0_1 == 1)));
return 0;
}

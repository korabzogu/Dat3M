#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

void reach_error() {
assert(0);
}
void __VERIFIER_assert(int cond) {
if(!cond) {
reach_error();
}
}

extern void __VERIFIER_HARDWARE(char * str);
int r2_0;
int r3_0;
int r4_0;
int r1_0;
int r2_1;
int r3_1;
int r4_1;
int r1_1;
atomic_int mem0;
atomic_int mem1;
void *func_0() {
int r3;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
r1 = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

//event.Skip

if(r1 == r1){
goto LC00;//event.CondJump
}

LC00://event.Label

r3 = 1;//event.Local

mem1 = r3;

atomic_thread_fence(memory_order_seq_cst);
r3_0 = r3;
r1_0 = r1;
}

void *func_1() {
int r3;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
r1 = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

r3 = (r1 ^ r1) /* IEXPRBIN */;//event.Local

r3 = (r3 + 1) /* IEXPRBIN */;//event.Local

mem0 = r3;

atomic_thread_fence(memory_order_seq_cst);
r3_1 = r3;
r1_1 = r1;
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
assert(((r1_0 == 1) && (r1_1 == 1)));
return 0;
}


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

extern void __VERIFIER_fence(char * str);
enum fence{After_atomic,Before_atomic,Isync,Lwsync,Mb,Mfence,Rcu_lock,Rcu_unlock,Rmb,Sync,Sync_rcu,Wmb,Ish };
int r2_0;
int r3_0;
int r4_0;
int r1_0;
int r2_1;
int r10_1;
int r3_1;
int r4_1;
int r11_1;
int r5_1;
int r6_1;
int r7_1;
int r8_1;
int r9_1;
int r1_1;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
atomic_int mem3;
void *func_0() {
int r3;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
r1 = atomic_load_explicit(&mem0, memory_order_relaxed);//event.Load

r3 = (r1 ^ r1) /* IEXPRBIN */;//event.Local

r3 = (r3 + 1) /* IEXPRBIN */;//event.Local

atomic_store_explicit(&mem1, r3, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
r3_0 = r3;
r1_0 = r1;
}

void *func_1() {
int r10;
int r3;
int r5;
int r6;
int r7;
int r9;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
r1 = atomic_load_explicit(&mem1, memory_order_relaxed);//event.Load

//event.Skip

if((r1)==(r1)){
goto LC00;//event.CondJump
}

LC00://event.Label

r3 = 1;//event.Local

atomic_store_explicit(&mem2, r3, memory_order_relaxed );//event.Store

r5 = atomic_load_explicit(&mem2, memory_order_relaxed);//event.Load

r6 = atomic_load_explicit(&mem2, memory_order_relaxed);//event.Load

//event.Skip

if((r6)==(r6)){
goto LC01;//event.CondJump
}

LC01://event.Label

r7 = 1;//event.Local

atomic_store_explicit(&mem3, r7, memory_order_relaxed );//event.Store

r9 = atomic_load_explicit(&mem3, memory_order_relaxed);//event.Load

r10 = 1;//event.Local

atomic_store_explicit(&mem0, r10, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
r10_1 = r10;
r3_1 = r3;
r5_1 = r5;
r6_1 = r6;
r7_1 = r7;
r9_1 = r9;
r1_1 = r1;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
atomic_init(&mem3, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int a = atomic_load_explicit(&mem0, memory_order_relaxed);
int x = atomic_load_explicit(&mem1, memory_order_relaxed);
int y = atomic_load_explicit(&mem2, memory_order_relaxed);
int z = atomic_load_explicit(&mem3, memory_order_relaxed);
assert(!((r1_0 == 1) && (r1_1 == 1)));
return 0;
}


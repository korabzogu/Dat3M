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
enum fence{After_atomic,Before_atomic,Isync,Lwsync,Mb,Mfence,Rcu_lock,Rcu_unlock,Rmb,Sync,Sync_rcu,Wmb,Ish };
int r2_0;
int x0_0;
int sl_0;
int x1_0;
int r1_0;
int r2_1;
int sl_1;
int x1_1;
int x2_1;
int r1_1;
int r2_2;
int sl_2;
int x2_2;
int x3_2;
int r1_2;
int r2_3;
int sl_3;
int x3_3;
int x4_3;
int r1_3;
int r2_4;
int x0_4;
int sl_4;
int x4_4;
int r1_4;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
atomic_int mem3;
atomic_int mem4;
atomic_int mem5;

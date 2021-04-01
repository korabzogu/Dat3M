/*<customTag0> File converted to C from litmus </customTag>*/
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
int gbl_0;
int r2_0;
int r10_0;
int gbl_held_0;
int lcl_held_0;
int r12_0;
int r11_0;
int lcl_0;
int nfcla_0;
int r1_0;
int gbl_1;
int r10_1;
int r2_1;
int gbl_held_1;
int lcl_held_1;
int r11_1;
int lcl_1;
int nfcla_1;
int gbl_2;
int r10_2;
int r2_2;
int gbl_held_2;
int lcl_held_2;
int r11_2;
int lcl_2;
int nfcla_2;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
atomic_int mem3;
atomic_int mem4;

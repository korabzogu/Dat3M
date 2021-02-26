#include <assert.h>
void reach_error() {
assert(0);
}
void __VERIFIER_assert(int cond) {
if(!cond) {
reach_error();
}
}
#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int s_0;
int rlock_0;
int x_0;
int s_1;
int x_1;
int r0_1;
int r1_1;
atomic_int mem0;
atomic_int mem1;

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
int r2_0;
int x_0;
int l_0;
int r1_0;
int r2_1;
int x_1;
int l_1;
int r1_1;
atomic_int mem0;
atomic_int mem1;

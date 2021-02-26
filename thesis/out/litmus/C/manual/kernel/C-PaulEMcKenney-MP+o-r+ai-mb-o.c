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
int x_0;
int y_0;
int r0_0;
int DUMMY_REG_3461_1;
int x_1;
int y_1;
int r1_1;
atomic_int mem0;
atomic_int mem1;

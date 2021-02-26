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
int x_0;
int r0_0;
int r1_0;
atomic_int mem0;
void *func_0() {
int x;
int r0;
int r1;
//event.Skip

/*§Skip§*/
r0 = 0;//event.Local

r1 = 0;//event.Local

if(r0 || r1) {
x = 1;

} else {}

x = 1;

//event.Skip

//event.Skip

atomic_thread_fence(memory_order_seq_cst);
x_0 = x;
r0_0 = r0;
r1_0 = r1;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_join(thread_0, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
assert((x == 1));
return 0;
}


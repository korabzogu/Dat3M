#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int x_0;
int r1_0;
int x_1;
atomic_int mem0/* Address */;
void *func_0() {
int x;
int r1;
//event.Skip

/*§Skip§*/
<customTag0>x</customTag> = 1;

<customTag0>r1</customTag> = atomic_load_explicit(&<customTag0>x</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

atomic_thread_fence(memory_order_seq_cst);
x_0 = x;
r1_0 = r1;
}

void *func_1() {
int x;
//event.Skip

/*§Skip§*/
<customTag1>x</customTag> = 2;

atomic_thread_fence(memory_order_seq_cst);
x_1 = x;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
assert(((<customAssertionTag0>r1</customAssertionTag> == 2) && (x == 1)));
return 0;
}


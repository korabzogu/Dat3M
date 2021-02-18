#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int x_0;
int r2_1;
int x_1;
int y_1;
int r1_1;
int r4_2;
int x_2;
int y_2;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
void *func_0() {
int x;
//event.Skip

/*§Skip§*/
<customTag0>x</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
x_0 = x;
}

void *func_1() {
int r2;
int x;
int y;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
__VERIFIER_HARDWARE(NULL);
<customTag1>r1</customTag> = atomic_load_explicit(&<customTag1>x</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag1>r2</customTag> = atomic_load_explicit(&<customTag1>y</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

__VERIFIER_HARDWARE(NULL);
atomic_thread_fence(memory_order_seq_cst);
r2_1 = r2;
x_1 = x;
y_1 = y;
r1_1 = r1;
}

void *func_2() {
int r4;
int x;
int y;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag2>y</customTag> = 1;

__VERIFIER_HARDWARE(NULL);
<customTag2>r4</customTag> = atomic_load_explicit(&<customTag2>x</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

atomic_thread_fence(memory_order_seq_cst);
r4_2 = r4;
x_2 = x;
y_2 = y;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_t thread_2;
pthread_create(&thread_2, NULL, &func_2, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
assert((((<customAssertionTag1>r1</customAssertionTag> == 1) && (<customAssertionTag1>r2</customAssertionTag> == 0)) && (<customAssertionTag2>r4</customAssertionTag> == 0)));
return 0;
}


#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int x_0;
int x_1;
int y_1;
int r0_1;
int x_2;
int y_2;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
void *func_0() {
int x;
//event.Skip

/*§Skip§*/
<customTag0>x</customTag> = 2;

atomic_thread_fence(memory_order_seq_cst);
x_0 = x;
}

void *func_1() {
int x;
int y;
int r0;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>r0</customTag> = atomic_load_explicit(&<customTag1>x</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag1>y</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
x_1 = x;
y_1 = y;
r0_1 = r0;
}

void *func_2() {
int x;
int y;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag2>y</customTag> = 2;

<customTag2>x</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
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
assert((((x == 2) && (y == 2)) && (<customAssertionTag1>r0</customAssertionTag> == 2)));
return 0;
}


#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int s_0;
int t_0;
int y_0;
int r1_0;
int r2_1;
int r3_1;
int s_1;
int y_1;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
void *func_0() {
int s;
int t;
int y;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag0>s</customTag> = 1;

<customTag0>r1</customTag> = atomic_load_explicit(&<customTag0>t</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

<customTag0>y</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
s_0 = s;
t_0 = t;
y_0 = y;
r1_0 = r1;
}

void *func_1() {
int r2;
int r3;
int s;
int y;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>r2</customTag> = atomic_load_explicit(&<customTag1>y</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

__VERIFIER_HARDWARE(NULL);
<customTag1>r3</customTag> = atomic_load_explicit(&<customTag1>s</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

atomic_thread_fence(memory_order_seq_cst);
r2_1 = r2;
r3_1 = r3;
s_1 = s;
y_1 = y;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int s = atomic_load_explicit(&mem0, memory_order_relaxed);
int t = atomic_load_explicit(&mem1, memory_order_relaxed);
int y = atomic_load_explicit(&mem2, memory_order_relaxed);
assert(((<customAssertionTag1>r2</customAssertionTag> == 1) && (<customAssertionTag1>r3</customAssertionTag> == 0)));
return 0;
}


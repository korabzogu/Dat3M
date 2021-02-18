#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int a_0;
int a_1;
int b_1;
int a_2;
int b_2;
int c_2;
int r2_3;
int a_3;
int c_3;
int r1_3;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
void *func_0() {
int a;
//event.Skip

/*§Skip§*/
<customTag0>a</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
a_0 = a;
}

void *func_1() {
int a;
int b;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>a</customTag> = 2;

__VERIFIER_HARDWARE(NULL);
<customTag1>b</customTag> = 1;

atomic_thread_fence(memory_order_seq_cst);
a_1 = a;
b_1 = b;
}

void *func_2() {
int a;
int b;
int c;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
__VERIFIER_HARDWARE(NULL);
<customTag2>b</customTag> = 2;

<customTag2>c</customTag> = 1;

__VERIFIER_HARDWARE(NULL);
atomic_thread_fence(memory_order_seq_cst);
a_2 = a;
b_2 = b;
c_2 = c;
}

void *func_3() {
int r2;
int a;
int c;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag3>r1</customTag> = atomic_load_explicit(&<customTag3>c</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(<customTag3>r1</customTag>) {
<customTag3>r2</customTag> = atomic_load_explicit(&<customTag3>a</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag3>r2</customTag> = atomic_load_explicit(&<customTag3>a</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

atomic_thread_fence(memory_order_seq_cst);
r2_3 = r2;
a_3 = a;
c_3 = c;
r1_3 = r1;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_t thread_2;
pthread_create(&thread_2, NULL, &func_2, NULL);
pthread_t thread_3;
pthread_create(&thread_3, NULL, &func_3, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
pthread_join(thread_3, NULL);
int a = atomic_load_explicit(&mem0, memory_order_relaxed);
int b = atomic_load_explicit(&mem1, memory_order_relaxed);
int c = atomic_load_explicit(&mem2, memory_order_relaxed);
assert(((((a == 2) && (b == 2)) && (<customAssertionTag3>r1</customAssertionTag> == 1)) && (<customAssertionTag3>r2</customAssertionTag> == 0)));
return 0;
}


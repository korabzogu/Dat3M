#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int x0_0;
int x1_0;
int DUMMY_REG_3462_1;
int x1_1;
int r2_2;
int r3_2;
int x0_2;
int x1_2;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
void *func_0() {
int x0;
int x1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag0>x0</customTag> = 2;

<customTag0>x1</customTag> = 2;

atomic_thread_fence(memory_order_seq_cst);
x0_0 = x0;
x1_0 = x1;
}

void *func_1() {
int DUMMY_REG_3462;
int x1;
//event.Skip

/*§Skip§*/
atomic_fetch_add(DUMMY_REG_3462,1);

atomic_thread_fence(memory_order_seq_cst);
DUMMY_REG_3462_1 = DUMMY_REG_3462;
x1_1 = x1;
}

void *func_2() {
int r2;
int r3;
int x0;
int x1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag2>r3</customTag> = 0;//event.Local

<customTag2>r2</customTag> = atomic_load_explicit(&<customTag2>x1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

<customTag2>r3</customTag> = atomic_load_explicit(&<customTag2>x0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

atomic_thread_fence(memory_order_seq_cst);
r2_2 = r2;
r3_2 = r3;
x0_2 = x0;
x1_2 = x1;
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
int x0 = atomic_load_explicit(&mem0, memory_order_relaxed);
int x1 = atomic_load_explicit(&mem1, memory_order_relaxed);
assert(((!((<customAssertionTag2>r2</customAssertionTag> == 0)) && !((<customAssertionTag2>r2</customAssertionTag> == 1))) && (<customAssertionTag2>r3</customAssertionTag> == 0)));
return 0;
}


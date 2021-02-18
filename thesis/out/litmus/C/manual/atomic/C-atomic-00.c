#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int x_0;
int y_0;
int DUMMY_REG_3454_0;
int r0_0;
int x_1;
int y_1;
int DUMMY_REG_3455_1;
int r1_1;
int x_2;
int y_2;
int DUMMY_REG_3457_2;
int DUMMY_REG_3456_2;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
void *func_0() {
int x;
int y;
int DUMMY_REG_3454;
int r0;
//event.Skip

/*§Skip§*/
/*§Skip§*/
atomic_fetch_add(DUMMY_REG_3454,1);

<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>y</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
x_0 = x;
y_0 = y;
DUMMY_REG_3454_0 = DUMMY_REG_3454;
r0_0 = r0;
}

void *func_1() {
int x;
int y;
int DUMMY_REG_3455;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
atomic_fetch_add(DUMMY_REG_3455,1);

<customTag1>r1</customTag> = atomic_load_explicit(&<customTag1>x</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
x_1 = x;
y_1 = y;
DUMMY_REG_3455_1 = DUMMY_REG_3455;
r1_1 = r1;
}

void *func_2() {
int x;
int y;
int DUMMY_REG_3457;
int DUMMY_REG_3456;
//event.Skip

/*§Skip§*/
/*§Skip§*/
atomic_fetch_add(DUMMY_REG_3456,2);

atomic_fetch_add(DUMMY_REG_3457,2);

atomic_thread_fence(memory_order_seq_cst);
x_2 = x;
y_2 = y;
DUMMY_REG_3457_2 = DUMMY_REG_3457;
DUMMY_REG_3456_2 = DUMMY_REG_3456;
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
assert(((<customAssertionTag0>r0</customAssertionTag> == 0) && (<customAssertionTag1>r1</customAssertionTag> == 0)));
return 0;
}


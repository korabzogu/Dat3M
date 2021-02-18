#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int x_0;
int r1_0;
int r2_1;
int x_1;
atomic_int mem0/* Address */;
void *func_0() {
int x;
int r1;
//event.Skip

<customTag0>r1</customTag> = 0;//event.Local

/*§Skip§*/
atomic_fetch_sub(r1,1);

atomic_thread_fence(memory_order_seq_cst);
x_0 = x;
r1_0 = r1;
}

void *func_1() {
int r2;
int x;
//event.Skip

<customTag1>r2</customTag> = 0;//event.Local

/*§Skip§*/
atomic_fetch_sub(r2,1);

atomic_thread_fence(memory_order_seq_cst);
r2_1 = r2;
x_1 = x;
}

int main() {
atomic_init(&mem0, 2); //event.Init, 2);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
assert(((x != 0) || (<customAssertionTag0>r1</customAssertionTag> == <customAssertionTag1>r2</customAssertionTag>)));
return 0;
}


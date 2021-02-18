#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int x_0;
int r0_0;
int x_1;
atomic_int mem0/* Address */;
void *func_0() {
int x;
int r0;
//event.Skip

/*§Skip§*/
 atomic_store(<customTag0>r0</customTag>, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ x,0,1));

atomic_thread_fence(memory_order_seq_cst);
x_0 = x;
r0_0 = r0;
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
assert((x == 1));
return 0;
}


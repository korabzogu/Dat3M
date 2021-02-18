#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int x_0;
int r0_0;
atomic_int mem0/* Address */;
void *func_0() {
int x;
int r0;
//event.Skip

/*§Skip§*/
<customTag0>r0</customTag> = 0;//event.Local

 atomic_store(<customTag0>r0</customTag>, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ x,r0,r0));

atomic_thread_fence(memory_order_seq_cst);
x_0 = x;
r0_0 = r0;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_join(thread_0, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
assert(!(((<customAssertionTag0>r0</customAssertionTag> == 0) && (x == 0))));
return 0;
}


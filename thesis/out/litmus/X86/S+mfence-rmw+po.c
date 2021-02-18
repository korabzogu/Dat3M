#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int EAX_0;
int EAX_1;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
void *func_0() {
int EAX;
//event.Skip

atomic_store_explicit(&&mem0/* Address */, 2, memory_order_relaxed );//event.Store

__VERIFIER_HARDWARE(NULL);
<customTag0>EAX</customTag> = 1;//event.Local

__VERIFIER_TSO_XCHG(&&mem1/* Address */,&<customTag0>EAX</customTag>);
atomic_thread_fence(memory_order_seq_cst);
EAX_0 = EAX;
}

void *func_1() {
int EAX;
//event.Skip

<customTag1>EAX</customTag> = atomic_load_explicit(&&mem1/* Address *//*com.dat3m.dartagnan.program.memory.Address*/, memory_order_relaxed);//event.Load

atomic_store_explicit(&&mem0/* Address */, 1, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
EAX_1 = EAX;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
assert(!(((<customAssertionTag0>EAX</customAssertionTag> == 0) && (((<customAssertionTag1>EAX</customAssertionTag> == 0) && ((x == 1) || (x == 2))) || ((<customAssertionTag1>EAX</customAssertionTag> == 1) && (x == 1))))));
return 0;
}


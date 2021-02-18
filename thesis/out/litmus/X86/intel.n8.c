#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int EBX_0;
int EAX_0;
int EDX_1;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
void *func_0() {
int EBX;
int EAX;
//event.Skip

<customTag0>EAX</customTag> = 1;//event.Local

__VERIFIER_TSO_XCHG(&&mem0/* Address */,&<customTag0>EAX</customTag>);
<customTag0>EBX</customTag> = atomic_load_explicit(&&mem1/* Address *//*com.dat3m.dartagnan.program.memory.Address*/, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
EBX_0 = EBX;
EAX_0 = EAX;
}

void *func_1() {
int EDX;
//event.Skip

atomic_store_explicit(&&mem1/* Address */, 1, memory_order_relaxed );//event.Store

<customTag1>EDX</customTag> = atomic_load_explicit(&&mem0/* Address *//*com.dat3m.dartagnan.program.memory.Address*/, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
EDX_1 = EDX;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 1); //event.Init, 1);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int b = atomic_load_explicit(&mem1, memory_order_relaxed);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
assert(((<customAssertionTag0>EAX</customAssertionTag> == 0) && (<customAssertionTag1>EDX</customAssertionTag> == 0)));
return 0;
}


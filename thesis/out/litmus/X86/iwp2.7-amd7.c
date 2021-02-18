#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int EAX_0;
int EBX_1;
int EDX_2;
int ECX_2;
int ESI_3;
int EDI_3;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
void *func_0() {
int EAX;
//event.Skip

<customTag0>EAX</customTag> = 1;//event.Local

__VERIFIER_TSO_XCHG(&&mem0/* Address */,&<customTag0>EAX</customTag>);
atomic_thread_fence(memory_order_seq_cst);
EAX_0 = EAX;
}

void *func_1() {
int EBX;
//event.Skip

<customTag1>EBX</customTag> = 1;//event.Local

__VERIFIER_TSO_XCHG(&&mem1/* Address */,&<customTag1>EBX</customTag>);
atomic_thread_fence(memory_order_seq_cst);
EBX_1 = EBX;
}

void *func_2() {
int EDX;
int ECX;
//event.Skip

<customTag2>ECX</customTag> = atomic_load_explicit(&&mem0/* Address *//*com.dat3m.dartagnan.program.memory.Address*/, memory_order_relaxed);//event.Load

<customTag2>EDX</customTag> = atomic_load_explicit(&&mem1/* Address *//*com.dat3m.dartagnan.program.memory.Address*/, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
EDX_2 = EDX;
ECX_2 = ECX;
}

void *func_3() {
int ESI;
int EDI;
//event.Skip

<customTag3>ESI</customTag> = atomic_load_explicit(&&mem1/* Address *//*com.dat3m.dartagnan.program.memory.Address*/, memory_order_relaxed);//event.Load

<customTag3>EDI</customTag> = atomic_load_explicit(&&mem0/* Address *//*com.dat3m.dartagnan.program.memory.Address*/, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
ESI_3 = ESI;
EDI_3 = EDI;
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
pthread_t thread_3;
pthread_create(&thread_3, NULL, &func_3, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
pthread_join(thread_3, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
assert(((((<customAssertionTag2>ECX</customAssertionTag> == 1) && (<customAssertionTag2>EDX</customAssertionTag> == 0)) && (<customAssertionTag3>ESI</customAssertionTag> == 1)) && (<customAssertionTag3>EDI</customAssertionTag> == 0)));
return 0;
}


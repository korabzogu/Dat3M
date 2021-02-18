#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int EBX_0;
int ECX_0;
int EAX_0;
atomic_int mem0/* Address */;
void *func_0() {
int EBX;
int ECX;
int EAX;
//event.Skip

EAX = atomic_load_explicit(&&mem0/* Address *//*com.dat3m.dartagnan.program.memory.Address*/, memory_order_relaxed);//event.Load

atomic_store_explicit(&&mem0/* Address */, 1, memory_order_relaxed );//event.Store

EBX = atomic_load_explicit(&&mem0/* Address *//*com.dat3m.dartagnan.program.memory.Address*/, memory_order_relaxed);//event.Load

ECX = atomic_load_explicit(&&mem0/* Address *//*com.dat3m.dartagnan.program.memory.Address*/, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
EBX_0 = EBX;
ECX_0 = ECX;
EAX_0 = EAX;
}

void *func_1() {
//event.Skip

atomic_store_explicit(&&mem0/* Address */, 2, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
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
assert(((((((((((((((EAX_0 == 0) && (EBX_0 == 0)) && (ECX_0 == 0)) && (x == 1)) || ((((EAX_0 == 0) && (EBX_0 == 0)) && (ECX_0 == 0)) && (x == 2))) || ((((EAX_0 == 0) && (EBX_0 == 1)) && (ECX_0 == 0)) && (x == 1))) || ((((EAX_0 == 0) && (EBX_0 == 1)) && (ECX_0 == 0)) && (x == 2))) || ((((EAX_0 == 0) && (EBX_0 == 2)) && (ECX_0 == 0)) && (x == 1))) || ((((EAX_0 == 0) && (EBX_0 == 2)) && (ECX_0 == 0)) && (x == 2))) || ((((EAX_0 == 1) && (EBX_0 == 0)) && (ECX_0 == 0)) && (x == 1))) || ((((EAX_0 == 1) && (EBX_0 == 0)) && (ECX_0 == 0)) && (x == 2))) || ((((EAX_0 == 1) && (EBX_0 == 2)) && (ECX_0 == 0)) && (x == 1))) || ((((EAX_0 == 2) && (EBX_0 == 1)) && (ECX_0 == 0)) && (x == 1))) || ((((EAX_0 == 2) && (EBX_0 == 2)) && (ECX_0 == 0)) && (x == 1))));
return 0;
}


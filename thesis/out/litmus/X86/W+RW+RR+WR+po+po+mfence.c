#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int EAX_1;
int EBX_2;
int EAX_2;
int EAX_3;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
void *func_0() {
//event.Skip

atomic_store_explicit(&&mem0/* Address */, 1, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
}

void *func_1() {
int EAX;
//event.Skip

EAX = atomic_load_explicit(&&mem0/* Address *//*com.dat3m.dartagnan.program.memory.Address*/, memory_order_relaxed);//event.Load

atomic_store_explicit(&&mem1/* Address */, 1, memory_order_relaxed );//event.Store

atomic_thread_fence(memory_order_seq_cst);
EAX_1 = EAX;
}

void *func_2() {
int EBX;
int EAX;
//event.Skip

EAX = atomic_load_explicit(&&mem1/* Address *//*com.dat3m.dartagnan.program.memory.Address*/, memory_order_relaxed);//event.Load

EBX = atomic_load_explicit(&&mem2/* Address *//*com.dat3m.dartagnan.program.memory.Address*/, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
EBX_2 = EBX;
EAX_2 = EAX;
}

void *func_3() {
int EAX;
//event.Skip

atomic_store_explicit(&&mem2/* Address */, 1, memory_order_relaxed );//event.Store

__VERIFIER_HARDWARE(NULL);
EAX = atomic_load_explicit(&&mem0/* Address *//*com.dat3m.dartagnan.program.memory.Address*/, memory_order_relaxed);//event.Load

atomic_thread_fence(memory_order_seq_cst);
EAX_3 = EAX;
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
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
int z = atomic_load_explicit(&mem2, memory_order_relaxed);
assert(!((((EAX_1 == 0) && (((EAX_2 == 0) && (((EBX_2 == 0) && ((EAX_3 == 1) || (EAX_3 == 0))) || ((EBX_2 == 1) && ((EAX_3 == 0) || (EAX_3 == 1))))) || ((EAX_2 == 1) && (((EBX_2 == 0) && ((EAX_3 == 0) || (EAX_3 == 1))) || ((EBX_2 == 1) && ((EAX_3 == 1) || (EAX_3 == 0))))))) || ((EAX_1 == 1) && (((EAX_2 == 0) && (((EBX_2 == 0) && ((EAX_3 == 0) || (EAX_3 == 1))) || ((EBX_2 == 1) && ((EAX_3 == 1) || (EAX_3 == 0))))) || ((EAX_2 == 1) && (((EBX_2 == 1) && ((EAX_3 == 1) || (EAX_3 == 0))) || ((EBX_2 == 0) && (EAX_3 == 1)))))))));
return 0;
}


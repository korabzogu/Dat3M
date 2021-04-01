/*<customTag0> File converted to C from litmus </customTag>*/
#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

void reach_error() {
assert(0);
}
void __VERIFIER_assert(int cond) {
if(!cond) {
reach_error();
}
}

extern void __VERIFIER_fence(char * str);
enum fence{After_atomic,Before_atomic,Isync,Lwsync,Mb,Mfence,Rcu_lock,Rcu_unlock,Rmb,Sync,Sync_rcu,Wmb,Ish };
int next_0;
int top_0;
int old_0;
int ToS_0;
int next_1;
int aPtr_1;
int top_1;
int old_1;
int ToS_1;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
atomic_int mem3;
atomic_int mem4;
void *func_0() {
int next;
int top;
int old;
int ToS;
//event.Skip

/*§Skip§*/
<customTag0>top</customTag> = atomic_load_explicit(&<customTag0>ToS</customTag>, memory_order_acquire);//event.Load

<customTag0>next</customTag> = atomic_load_explicit(&<customTag0>top</customTag>, memory_order_acquire);//event.Load

 atomic_store(<customTag0>old</customTag>, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ ToS,top,next));

atomic_thread_fence(memory_order_seq_cst);
next_0 = next;
top_0 = top;
old_0 = old;
ToS_0 = ToS;
}

void *func_1() {
int next;
int aPtr;
int top;
int old;
int ToS;
//event.Skip

/*§Skip§*/
<customTag1>top</customTag> = atomic_load_explicit(&<customTag1>ToS</customTag>, memory_order_acquire);//event.Load

<customTag1>next</customTag> = atomic_load_explicit(&<customTag1>top</customTag>, memory_order_acquire);//event.Load

 atomic_store(<customTag1>old</customTag>, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ ToS,top,next));

if((<customTag1>old</customTag>)==(<customTag1>top</customTag>)) {
<customTag1>aPtr</customTag> = <customTag1>top</customTag>;//event.Local

<customTag1>top</customTag> = atomic_load_explicit(&<customTag1>ToS</customTag>, memory_order_acquire);//event.Load

<customTag1>next</customTag> = atomic_load_explicit(&<customTag1>top</customTag>, memory_order_acquire);//event.Load

 atomic_store(<customTag1>old</customTag>, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ ToS,top,next));

if((<customTag1>old</customTag>)==(<customTag1>top</customTag>)) {
atomic_store_explicit(&<customTag1>top</customTag>, -1, memory_order_release );//event.Store

atomic_store_explicit(&<customTag1>aPtr</customTag>, <customTag1>next</customTag>, memory_order_release );//event.Store

 atomic_store(<customTag1>old</customTag>, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ ToS,next,aPtr));

} else {}

atomic_store_explicit(&<customTag1>top</customTag>, -1, memory_order_release );//event.Store

atomic_store_explicit(&<customTag1>aPtr</customTag>, <customTag1>next</customTag>, memory_order_release );//event.Store

 atomic_store(<customTag1>old</customTag>, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ ToS,next,aPtr));

//event.Skip

//event.Skip

} else {}

<customTag1>aPtr</customTag> = <customTag1>top</customTag>;//event.Local

<customTag1>top</customTag> = atomic_load_explicit(&<customTag1>ToS</customTag>, memory_order_acquire);//event.Load

<customTag1>next</customTag> = atomic_load_explicit(&<customTag1>top</customTag>, memory_order_acquire);//event.Load

 atomic_store(<customTag1>old</customTag>, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ ToS,top,next));

if((<customTag1>old</customTag>)==(<customTag1>top</customTag>)) {
atomic_store_explicit(&<customTag1>top</customTag>, -1, memory_order_release );//event.Store

atomic_store_explicit(&<customTag1>aPtr</customTag>, <customTag1>next</customTag>, memory_order_release );//event.Store

 atomic_store(<customTag1>old</customTag>, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ ToS,next,aPtr));

} else {}

atomic_store_explicit(&<customTag1>top</customTag>, -1, memory_order_release );//event.Store

atomic_store_explicit(&<customTag1>aPtr</customTag>, <customTag1>next</customTag>, memory_order_release );//event.Store

 atomic_store(<customTag1>old</customTag>, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ ToS,next,aPtr));

//event.Skip

//event.Skip

//event.Skip

//event.Skip

atomic_thread_fence(memory_order_seq_cst);
next_1 = next;
aPtr_1 = aPtr;
top_1 = top;
old_1 = old;
ToS_1 = ToS;
}

int main() {
atomic_init(&mem0, -1); //event.Init, -1);
atomic_init(&mem1, &mem0); //event.Init, mem0);
atomic_init(&mem2, &mem1); //event.Init, mem1);
atomic_init(&mem3, &mem2); //event.Init, mem2);
atomic_init(&mem4, &mem3); //event.Init, mem3);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int a = atomic_load_explicit(&mem3, memory_order_relaxed);
int b = atomic_load_explicit(&mem2, memory_order_relaxed);
int c = atomic_load_explicit(&mem1, memory_order_relaxed);
int d = atomic_load_explicit(&mem0, memory_order_relaxed);
int ToS = atomic_load_explicit(&mem4, memory_order_relaxed);
assert(!((ToS == mem2) && (b == -1)));
return 0;
}


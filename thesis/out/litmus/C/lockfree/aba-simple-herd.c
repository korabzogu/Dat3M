#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int next_0;
int top_0;
int old_0;
int ToS_0;
int next_1;
int aPtr_1;
int top_1;
int old_1;
int ToS_1;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
atomic_int mem3/* Address */;
atomic_int mem4/* Address */;
void *func_0() {
int next;
int top;
int old;
int ToS;
//event.Skip

/*§Skip§*/
<customTag0>top</customTag> = atomic_load_explicit(&<customTag0>ToS</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

<customTag0>next</customTag> = atomic_load_explicit(&<customTag0>top</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

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
<customTag1>top</customTag> = atomic_load_explicit(&<customTag1>ToS</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

<customTag1>next</customTag> = atomic_load_explicit(&<customTag1>top</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

 atomic_store(<customTag1>old</customTag>, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ ToS,top,next));

if((<customTag1>old</customTag>)==(<customTag1>top</customTag>)) {
<customTag1>aPtr</customTag> = <customTag1>top</customTag>;//event.Local

<customTag1>top</customTag> = atomic_load_explicit(&<customTag1>ToS</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

<customTag1>next</customTag> = atomic_load_explicit(&<customTag1>top</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

 atomic_store(<customTag1>old</customTag>, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ ToS,top,next));

if((<customTag1>old</customTag>)==(<customTag1>top</customTag>)) {
<customTag1>top</customTag> = 0;

<customTag1>aPtr</customTag> = <customTag1>next</customTag>;

 atomic_store(<customTag1>old</customTag>, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ ToS,next,aPtr));

} else {}

<customTag1>top</customTag> = 0;

<customTag1>aPtr</customTag> = <customTag1>next</customTag>;

 atomic_store(<customTag1>old</customTag>, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ ToS,next,aPtr));

//event.Skip

//event.Skip

} else {}

<customTag1>aPtr</customTag> = <customTag1>top</customTag>;//event.Local

<customTag1>top</customTag> = atomic_load_explicit(&<customTag1>ToS</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

<customTag1>next</customTag> = atomic_load_explicit(&<customTag1>top</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

 atomic_store(<customTag1>old</customTag>, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ ToS,top,next));

if((<customTag1>old</customTag>)==(<customTag1>top</customTag>)) {
<customTag1>top</customTag> = 0;

<customTag1>aPtr</customTag> = <customTag1>next</customTag>;

 atomic_store(<customTag1>old</customTag>, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ ToS,next,aPtr));

} else {}

<customTag1>top</customTag> = 0;

<customTag1>aPtr</customTag> = <customTag1>next</customTag>;

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
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, &mem0); //event.Init, &mem0/* Address */);
atomic_init(&mem2, &mem1); //event.Init, &mem1/* Address */);
atomic_init(&mem3, &mem2); //event.Init, &mem2/* Address */);
atomic_init(&mem4, &mem3); //event.Init, &mem3/* Address */);
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
assert(((ToS == &mem2/* Address */) && (b == 0)));
return 0;
}


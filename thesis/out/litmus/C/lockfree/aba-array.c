#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int next_0;
int top_0;
int old_0;
int ToS_0;
int value_0;
int next_1;
int aPtr_1;
int top_1;
int old_1;
int ToS_1;
int value_1;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
atomic_int mem3/* Address */;
atomic_int mem4/* Address */;
atomic_int mem5/* Address */;
atomic_int mem6/* Address */;
void *func_0() {
int next;
int top;
int old;
int ToS;
int value;
//event.Skip

/*§Skip§*/
<customTag0>top</customTag> = atomic_load_explicit(&<customTag0>ToS</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

<customTag0>value</customTag> = atomic_load_explicit(&<customTag0>top</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

<customTag0>next</customTag> = atomic_load_explicit(&(<customTag0>top</customTag> + 1) /* IEXPRBIN *//*com.dat3m.dartagnan.expression.IExprBin*/, memory_order_acquire);//event.Load

 atomic_store(<customTag0>old</customTag>, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ ToS,top,next));

if((<customTag0>old</customTag>)==(<customTag0>top</customTag>)) {
<customTag0>top</customTag> = atomic_load_explicit(&<customTag0>ToS</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

<customTag0>value</customTag> = atomic_load_explicit(&<customTag0>top</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

<customTag0>next</customTag> = atomic_load_explicit(&(<customTag0>top</customTag> + 1) /* IEXPRBIN *//*com.dat3m.dartagnan.expression.IExprBin*/, memory_order_acquire);//event.Load

} else {}

<customTag0>top</customTag> = atomic_load_explicit(&<customTag0>ToS</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

<customTag0>value</customTag> = atomic_load_explicit(&<customTag0>top</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

<customTag0>next</customTag> = atomic_load_explicit(&(<customTag0>top</customTag> + 1) /* IEXPRBIN *//*com.dat3m.dartagnan.expression.IExprBin*/, memory_order_acquire);//event.Load

//event.Skip

//event.Skip

atomic_thread_fence(memory_order_seq_cst);
next_0 = next;
top_0 = top;
old_0 = old;
ToS_0 = ToS;
value_0 = value;
}

void *func_1() {
int next;
int aPtr;
int top;
int old;
int ToS;
int value;
//event.Skip

/*§Skip§*/
<customTag1>top</customTag> = atomic_load_explicit(&<customTag1>ToS</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

<customTag1>value</customTag> = atomic_load_explicit(&<customTag1>top</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

<customTag1>next</customTag> = atomic_load_explicit(&(<customTag1>top</customTag> + 1) /* IEXPRBIN *//*com.dat3m.dartagnan.expression.IExprBin*/, memory_order_acquire);//event.Load

 atomic_store(<customTag1>old</customTag>, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ ToS,top,next));

if((<customTag1>old</customTag>)==(<customTag1>top</customTag>)) {
<customTag1>aPtr</customTag> = <customTag1>top</customTag>;//event.Local

<customTag1>top</customTag> = atomic_load_explicit(&<customTag1>ToS</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

<customTag1>value</customTag> = atomic_load_explicit(&<customTag1>top</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

<customTag1>next</customTag> = atomic_load_explicit(&(<customTag1>top</customTag> + 1) /* IEXPRBIN *//*com.dat3m.dartagnan.expression.IExprBin*/, memory_order_acquire);//event.Load

 atomic_store(<customTag1>old</customTag>, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ ToS,top,next));

if((<customTag1>old</customTag>)==(<customTag1>top</customTag>)) {
<customTag1>top</customTag> = -1;

atomic_store_explicit(&(<customTag1>top</customTag> + 1) /* IEXPRBIN */, -1, memory_order_release );//event.Store

<customTag1>aPtr</customTag> = 99;

atomic_store_explicit(&(<customTag1>aPtr</customTag> + 1) /* IEXPRBIN */, <customTag1>next</customTag>, memory_order_release );//event.Store

 atomic_store(<customTag1>old</customTag>, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ ToS,next,aPtr));

if((<customTag1>old</customTag>)==(<customTag1>next</customTag>)) {
} else {}

//event.Skip

//event.Skip

} else {}

<customTag1>top</customTag> = -1;

atomic_store_explicit(&(<customTag1>top</customTag> + 1) /* IEXPRBIN */, -1, memory_order_release );//event.Store

<customTag1>aPtr</customTag> = 99;

atomic_store_explicit(&(<customTag1>aPtr</customTag> + 1) /* IEXPRBIN */, <customTag1>next</customTag>, memory_order_release );//event.Store

 atomic_store(<customTag1>old</customTag>, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ ToS,next,aPtr));

if((<customTag1>old</customTag>)==(<customTag1>next</customTag>)) {
} else {}

//event.Skip

//event.Skip

//event.Skip

//event.Skip

} else {}

<customTag1>aPtr</customTag> = <customTag1>top</customTag>;//event.Local

<customTag1>top</customTag> = atomic_load_explicit(&<customTag1>ToS</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

<customTag1>value</customTag> = atomic_load_explicit(&<customTag1>top</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_acquire);//event.Load

<customTag1>next</customTag> = atomic_load_explicit(&(<customTag1>top</customTag> + 1) /* IEXPRBIN *//*com.dat3m.dartagnan.expression.IExprBin*/, memory_order_acquire);//event.Load

 atomic_store(<customTag1>old</customTag>, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ ToS,top,next));

if((<customTag1>old</customTag>)==(<customTag1>top</customTag>)) {
<customTag1>top</customTag> = -1;

atomic_store_explicit(&(<customTag1>top</customTag> + 1) /* IEXPRBIN */, -1, memory_order_release );//event.Store

<customTag1>aPtr</customTag> = 99;

atomic_store_explicit(&(<customTag1>aPtr</customTag> + 1) /* IEXPRBIN */, <customTag1>next</customTag>, memory_order_release );//event.Store

 atomic_store(<customTag1>old</customTag>, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ ToS,next,aPtr));

if((<customTag1>old</customTag>)==(<customTag1>next</customTag>)) {
} else {}

//event.Skip

//event.Skip

} else {}

<customTag1>top</customTag> = -1;

atomic_store_explicit(&(<customTag1>top</customTag> + 1) /* IEXPRBIN */, -1, memory_order_release );//event.Store

<customTag1>aPtr</customTag> = 99;

atomic_store_explicit(&(<customTag1>aPtr</customTag> + 1) /* IEXPRBIN */, <customTag1>next</customTag>, memory_order_release );//event.Store

 atomic_store(<customTag1>old</customTag>, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ ToS,next,aPtr));

if((<customTag1>old</customTag>)==(<customTag1>next</customTag>)) {
} else {}

//event.Skip

//event.Skip

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
value_1 = value;
}

int main() {
atomic_init(&mem0, 3); //event.Init, 3);
atomic_init(&mem1, -1); //event.Init, -1);
atomic_init(&mem2, 2); //event.Init, 2);
atomic_init(&mem3, &mem0); //event.Init, &mem0/* Address */);
atomic_init(&mem4, 1); //event.Init, 1);
atomic_init(&mem5, &mem2); //event.Init, &mem2/* Address */);
atomic_init(&mem6, &mem4); //event.Init, &mem4/* Address */);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int b[1] = atomic_load_explicit(&mem3, memory_order_relaxed);
int ToS = atomic_load_explicit(&mem6, memory_order_relaxed);
int c[1] = atomic_load_explicit(&mem1, memory_order_relaxed);
int a[0] = atomic_load_explicit(&mem4, memory_order_relaxed);
int c[0] = atomic_load_explicit(&mem0, memory_order_relaxed);
int b[0] = atomic_load_explicit(&mem2, memory_order_relaxed);
int a[1] = atomic_load_explicit(&mem5, memory_order_relaxed);
assert(((<customAssertionTag0>next</customAssertionTag> == -1) && (<customAssertionTag0>value</customAssertionTag> == -1)));
return 0;
}


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
int Bnext_0;
int A_0;
int B_0;
int Anext_0;
int top_0;
int out0_0;
int ToS_0;
int r1_0;
int next_1;
int out2_1;
int Bnext_1;
int r2_1;
int A_1;
int B_1;
int Anext_1;
int top_1;
int out1_1;
int ToS_1;
int top2_1;
int r1_1;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
atomic_int mem3;
atomic_int mem4;
atomic_int mem5;
void *func_0() {
int Bnext;
int A;
int B;
int Anext;
int top;
int ToS;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag0>top</customTag> = atomic_load_explicit(&<customTag0>ToS</customTag>, memory_order_acquire);//event.Load

if((<customTag0>top</customTag>)==(<customTag0>A</customTag>)) {
<customTag0>next</customTag> = atomic_load_explicit(&<customTag0>Anext</customTag>, memory_order_seq_cst /* TODO use usual C assign */);//event.Load

} else {}

<customTag0>next</customTag> = atomic_load_explicit(&<customTag0>Anext</customTag>, memory_order_seq_cst /* TODO use usual C assign */);//event.Load

//event.Skip

//event.Skip

if((<customTag0>top</customTag>)==(<customTag0>B</customTag>)) {
<customTag0>next</customTag> = atomic_load_explicit(&<customTag0>Bnext</customTag>, memory_order_seq_cst /* TODO use usual C assign */);//event.Load

} else {}

<customTag0>next</customTag> = atomic_load_explicit(&<customTag0>Bnext</customTag>, memory_order_seq_cst /* TODO use usual C assign */);//event.Load

//event.Skip

//event.Skip

 atomic_store(<customTag0>r1</customTag>, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ ToS,top,next));

if((<customTag0>r1</customTag>)==(<customTag0>top</customTag>)) {
<customTag0>out0</customTag> = <customTag0>top</customTag>;//event.Local

} else {}

<customTag0>out0</customTag> = <customTag0>top</customTag>;//event.Local

//event.Skip

//event.Skip

atomic_thread_fence(memory_order_seq_cst);
Bnext_0 = Bnext;
A_0 = A;
B_0 = B;
Anext_0 = Anext;
top_0 = top;
ToS_0 = ToS;
r1_0 = r1;
}

void *func_1() {
int Bnext;
int r2;
int A;
int B;
int Anext;
int top;
int ToS;
int top2;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag1>top</customTag> = atomic_load_explicit(&<customTag1>ToS</customTag>, memory_order_acquire);//event.Load

if((<customTag1>top</customTag>)==(<customTag1>A</customTag>)) {
<customTag1>next</customTag> = atomic_load_explicit(&<customTag1>Anext</customTag>, memory_order_seq_cst /* TODO use usual C assign */);//event.Load

} else {}

<customTag1>next</customTag> = atomic_load_explicit(&<customTag1>Anext</customTag>, memory_order_seq_cst /* TODO use usual C assign */);//event.Load

//event.Skip

//event.Skip

if((<customTag1>top</customTag>)==(<customTag1>B</customTag>)) {
<customTag1>next</customTag> = atomic_load_explicit(&<customTag1>Bnext</customTag>, memory_order_seq_cst /* TODO use usual C assign */);//event.Load

} else {}

<customTag1>next</customTag> = atomic_load_explicit(&<customTag1>Bnext</customTag>, memory_order_seq_cst /* TODO use usual C assign */);//event.Load

//event.Skip

//event.Skip

 atomic_store(<customTag1>r1</customTag>, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ ToS,top,next));

if((<customTag1>r1</customTag>)==(<customTag1>top</customTag>)) {
<customTag1>out1</customTag> = <customTag1>top</customTag>;//event.Local

} else {}

<customTag1>out1</customTag> = <customTag1>top</customTag>;//event.Local

//event.Skip

//event.Skip

<customTag1>top</customTag> = atomic_load_explicit(&<customTag1>ToS</customTag>, memory_order_acquire);//event.Load

if((<customTag1>top</customTag>)==(<customTag1>A</customTag>)) {
<customTag1>next</customTag> = atomic_load_explicit(&<customTag1>Anext</customTag>, memory_order_seq_cst /* TODO use usual C assign */);//event.Load

} else {}

<customTag1>next</customTag> = atomic_load_explicit(&<customTag1>Anext</customTag>, memory_order_seq_cst /* TODO use usual C assign */);//event.Load

//event.Skip

//event.Skip

if((<customTag1>top</customTag>)==(<customTag1>B</customTag>)) {
<customTag1>next</customTag> = atomic_load_explicit(&<customTag1>Bnext</customTag>, memory_order_seq_cst /* TODO use usual C assign */);//event.Load

} else {}

<customTag1>next</customTag> = atomic_load_explicit(&<customTag1>Bnext</customTag>, memory_order_seq_cst /* TODO use usual C assign */);//event.Load

//event.Skip

//event.Skip

 atomic_store(<customTag1>r1</customTag>, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ ToS,top,next));

if((<customTag1>r1</customTag>)==(<customTag1>top</customTag>)) {
<customTag1>out2</customTag> = <customTag1>top</customTag>;//event.Local

if((<customTag1>top</customTag>)==(<customTag1>A</customTag>)) {
atomic_store_explicit(&<customTag1>A</customTag>, 10, memory_order_seq_cst /* TODO use usual C assign */ );//event.Store

} else {}

atomic_store_explicit(&<customTag1>A</customTag>, 10, memory_order_seq_cst /* TODO use usual C assign */ );//event.Store

//event.Skip

//event.Skip

if((<customTag1>top</customTag>)==(<customTag1>B</customTag>)) {
atomic_store_explicit(&<customTag1>B</customTag>, 10, memory_order_seq_cst /* TODO use usual C assign */ );//event.Store

} else {}

atomic_store_explicit(&<customTag1>B</customTag>, 10, memory_order_seq_cst /* TODO use usual C assign */ );//event.Store

//event.Skip

//event.Skip

} else {}

<customTag1>out2</customTag> = <customTag1>top</customTag>;//event.Local

if((<customTag1>top</customTag>)==(<customTag1>A</customTag>)) {
atomic_store_explicit(&<customTag1>A</customTag>, 10, memory_order_seq_cst /* TODO use usual C assign */ );//event.Store

} else {}

atomic_store_explicit(&<customTag1>A</customTag>, 10, memory_order_seq_cst /* TODO use usual C assign */ );//event.Store

//event.Skip

//event.Skip

if((<customTag1>top</customTag>)==(<customTag1>B</customTag>)) {
atomic_store_explicit(&<customTag1>B</customTag>, 10, memory_order_seq_cst /* TODO use usual C assign */ );//event.Store

} else {}

atomic_store_explicit(&<customTag1>B</customTag>, 10, memory_order_seq_cst /* TODO use usual C assign */ );//event.Store

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag1>top2</customTag> = READ_ONCE(<customTag1>ToS</customTag>);

WRITE_ONCE(&<customTag1>Anext</customTag>, <customTag1>top2</customTag>);
 atomic_store(<customTag1>r2</customTag>, atomic_compare_exchange_strong(/*TODO find out if strong or weak &|| explicit is needed */ ToS,top2,A));

atomic_thread_fence(memory_order_seq_cst);
Bnext_1 = Bnext;
r2_1 = r2;
A_1 = A;
B_1 = B;
Anext_1 = Anext;
top_1 = top;
ToS_1 = ToS;
top2_1 = top2;
r1_1 = r1;
}

int main() {
atomic_init(&mem0, &mem1); //event.Init, mem1);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, &mem3); //event.Init, mem3);
atomic_init(&mem3, 0); //event.Init, 0);
atomic_init(&mem4, &mem5); //event.Init, mem5);
atomic_init(&mem5, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int Bnext = atomic_load_explicit(&mem4, memory_order_relaxed);
int A = atomic_load_explicit(&mem1, memory_order_relaxed);
int B = atomic_load_explicit(&mem3, memory_order_relaxed);
int Anext = atomic_load_explicit(&mem2, memory_order_relaxed);
int null = atomic_load_explicit(&mem5, memory_order_relaxed);
int ToS = atomic_load_explicit(&mem0, memory_order_relaxed);
assert(!((<customAssertionTag0>next</customAssertionTag> == mem3) && (B == 10)));
return 0;
}


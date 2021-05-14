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
int x_0;
int y1_0;
int y_0;
int x1_0;
int b1_0;
int b2_1;
int x_1;
int y1_1;
int y_1;
int x1_1;
int b3_2;
int x_2;
int y1_2;
int y_2;
int x1_2;
atomic_int mem0;
atomic_int mem1;
atomic_int mem2;
atomic_int mem3;
atomic_int mem4;
void *func_0() {
int x;
int y1;
int y;
int x1;
int b1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
if(1) {
WRITE_ONCE(&<customTag0>b1</customTag>, 1);
WRITE_ONCE(&<customTag0>x</customTag>, 1);
<customTag0>y1</customTag> = READ_ONCE(<customTag0>y</customTag>);

if((<customTag0>y1</customTag>)!=(0)) {
WRITE_ONCE(&<customTag0>b1</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag0>b1</customTag>, 0);
//event.Skip

//event.Skip

WRITE_ONCE(&<customTag0>y</customTag>, 1);
<customTag0>x1</customTag> = READ_ONCE(<customTag0>x</customTag>);

if((<customTag0>x1</customTag>)!=(1)) {
WRITE_ONCE(&<customTag0>b1</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag0>b1</customTag>, 0);
//event.Skip

//event.Skip

if(1) {
WRITE_ONCE(&<customTag0>b1</customTag>, 1);
WRITE_ONCE(&<customTag0>x</customTag>, 1);
<customTag0>y1</customTag> = READ_ONCE(<customTag0>y</customTag>);

if((<customTag0>y1</customTag>)!=(0)) {
WRITE_ONCE(&<customTag0>b1</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag0>b1</customTag>, 0);
//event.Skip

//event.Skip

WRITE_ONCE(&<customTag0>x</customTag>, 1);
<customTag0>x1</customTag> = READ_ONCE(<customTag0>x</customTag>);

if((<customTag0>x1</customTag>)!=(1)) {
WRITE_ONCE(&<customTag0>b1</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag0>b1</customTag>, 0);
//event.Skip

//event.Skip

} else {}

WRITE_ONCE(&<customTag0>b1</customTag>, 1);
WRITE_ONCE(&<customTag0>x</customTag>, 1);
<customTag0>y1</customTag> = READ_ONCE(<customTag0>y</customTag>);

if((<customTag0>y1</customTag>)!=(0)) {
WRITE_ONCE(&<customTag0>b1</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag0>b1</customTag>, 0);
//event.Skip

//event.Skip

WRITE_ONCE(&<customTag0>x</customTag>, 1);
<customTag0>x1</customTag> = READ_ONCE(<customTag0>x</customTag>);

if((<customTag0>x1</customTag>)!=(1)) {
WRITE_ONCE(&<customTag0>b1</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag0>b1</customTag>, 0);
//event.Skip

//event.Skip

//event.Skip

//event.Skip

} else {}

WRITE_ONCE(&<customTag0>b1</customTag>, 1);
WRITE_ONCE(&<customTag0>x</customTag>, 1);
<customTag0>y1</customTag> = READ_ONCE(<customTag0>y</customTag>);

if((<customTag0>y1</customTag>)!=(0)) {
WRITE_ONCE(&<customTag0>b1</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag0>b1</customTag>, 0);
//event.Skip

//event.Skip

WRITE_ONCE(&<customTag0>y</customTag>, 1);
<customTag0>x1</customTag> = READ_ONCE(<customTag0>x</customTag>);

if((<customTag0>x1</customTag>)!=(1)) {
WRITE_ONCE(&<customTag0>b1</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag0>b1</customTag>, 0);
//event.Skip

//event.Skip

if(1) {
WRITE_ONCE(&<customTag0>b1</customTag>, 1);
WRITE_ONCE(&<customTag0>x</customTag>, 1);
<customTag0>y1</customTag> = READ_ONCE(<customTag0>y</customTag>);

if((<customTag0>y1</customTag>)!=(0)) {
WRITE_ONCE(&<customTag0>b1</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag0>b1</customTag>, 0);
//event.Skip

//event.Skip

WRITE_ONCE(&<customTag0>x</customTag>, 1);
<customTag0>x1</customTag> = READ_ONCE(<customTag0>x</customTag>);

if((<customTag0>x1</customTag>)!=(1)) {
WRITE_ONCE(&<customTag0>b1</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag0>b1</customTag>, 0);
//event.Skip

//event.Skip

} else {}

WRITE_ONCE(&<customTag0>b1</customTag>, 1);
WRITE_ONCE(&<customTag0>x</customTag>, 1);
<customTag0>y1</customTag> = READ_ONCE(<customTag0>y</customTag>);

if((<customTag0>y1</customTag>)!=(0)) {
WRITE_ONCE(&<customTag0>b1</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag0>b1</customTag>, 0);
//event.Skip

//event.Skip

WRITE_ONCE(&<customTag0>x</customTag>, 1);
<customTag0>x1</customTag> = READ_ONCE(<customTag0>x</customTag>);

if((<customTag0>x1</customTag>)!=(1)) {
WRITE_ONCE(&<customTag0>b1</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag0>b1</customTag>, 0);
//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

atomic_thread_fence(memory_order_seq_cst);
x_0 = x;
y1_0 = y1;
y_0 = y;
x1_0 = x1;
b1_0 = b1;
}

void *func_1() {
int b2;
int x;
int y1;
int y;
int x1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
if(1) {
WRITE_ONCE(&<customTag1>b2</customTag>, 1);
WRITE_ONCE(&<customTag1>x</customTag>, 2);
<customTag1>y1</customTag> = READ_ONCE(<customTag1>y</customTag>);

if((<customTag1>y1</customTag>)!=(0)) {
WRITE_ONCE(&<customTag1>b2</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag1>b2</customTag>, 0);
//event.Skip

//event.Skip

WRITE_ONCE(&<customTag1>y</customTag>, 2);
<customTag1>x1</customTag> = READ_ONCE(<customTag1>x</customTag>);

if((<customTag1>x1</customTag>)!=(2)) {
WRITE_ONCE(&<customTag1>b2</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag1>b2</customTag>, 0);
//event.Skip

//event.Skip

if(1) {
WRITE_ONCE(&<customTag1>b2</customTag>, 1);
WRITE_ONCE(&<customTag1>x</customTag>, 2);
<customTag1>y1</customTag> = READ_ONCE(<customTag1>y</customTag>);

if((<customTag1>y1</customTag>)!=(0)) {
WRITE_ONCE(&<customTag1>b2</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag1>b2</customTag>, 0);
//event.Skip

//event.Skip

WRITE_ONCE(&<customTag1>x</customTag>, 2);
<customTag1>x1</customTag> = READ_ONCE(<customTag1>x</customTag>);

if((<customTag1>x1</customTag>)!=(2)) {
WRITE_ONCE(&<customTag1>b2</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag1>b2</customTag>, 0);
//event.Skip

//event.Skip

} else {}

WRITE_ONCE(&<customTag1>b2</customTag>, 1);
WRITE_ONCE(&<customTag1>x</customTag>, 2);
<customTag1>y1</customTag> = READ_ONCE(<customTag1>y</customTag>);

if((<customTag1>y1</customTag>)!=(0)) {
WRITE_ONCE(&<customTag1>b2</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag1>b2</customTag>, 0);
//event.Skip

//event.Skip

WRITE_ONCE(&<customTag1>x</customTag>, 2);
<customTag1>x1</customTag> = READ_ONCE(<customTag1>x</customTag>);

if((<customTag1>x1</customTag>)!=(2)) {
WRITE_ONCE(&<customTag1>b2</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag1>b2</customTag>, 0);
//event.Skip

//event.Skip

//event.Skip

//event.Skip

} else {}

WRITE_ONCE(&<customTag1>b2</customTag>, 1);
WRITE_ONCE(&<customTag1>x</customTag>, 2);
<customTag1>y1</customTag> = READ_ONCE(<customTag1>y</customTag>);

if((<customTag1>y1</customTag>)!=(0)) {
WRITE_ONCE(&<customTag1>b2</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag1>b2</customTag>, 0);
//event.Skip

//event.Skip

WRITE_ONCE(&<customTag1>y</customTag>, 2);
<customTag1>x1</customTag> = READ_ONCE(<customTag1>x</customTag>);

if((<customTag1>x1</customTag>)!=(2)) {
WRITE_ONCE(&<customTag1>b2</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag1>b2</customTag>, 0);
//event.Skip

//event.Skip

if(1) {
WRITE_ONCE(&<customTag1>b2</customTag>, 1);
WRITE_ONCE(&<customTag1>x</customTag>, 2);
<customTag1>y1</customTag> = READ_ONCE(<customTag1>y</customTag>);

if((<customTag1>y1</customTag>)!=(0)) {
WRITE_ONCE(&<customTag1>b2</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag1>b2</customTag>, 0);
//event.Skip

//event.Skip

WRITE_ONCE(&<customTag1>x</customTag>, 2);
<customTag1>x1</customTag> = READ_ONCE(<customTag1>x</customTag>);

if((<customTag1>x1</customTag>)!=(2)) {
WRITE_ONCE(&<customTag1>b2</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag1>b2</customTag>, 0);
//event.Skip

//event.Skip

} else {}

WRITE_ONCE(&<customTag1>b2</customTag>, 1);
WRITE_ONCE(&<customTag1>x</customTag>, 2);
<customTag1>y1</customTag> = READ_ONCE(<customTag1>y</customTag>);

if((<customTag1>y1</customTag>)!=(0)) {
WRITE_ONCE(&<customTag1>b2</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag1>b2</customTag>, 0);
//event.Skip

//event.Skip

WRITE_ONCE(&<customTag1>x</customTag>, 2);
<customTag1>x1</customTag> = READ_ONCE(<customTag1>x</customTag>);

if((<customTag1>x1</customTag>)!=(2)) {
WRITE_ONCE(&<customTag1>b2</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag1>b2</customTag>, 0);
//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

atomic_thread_fence(memory_order_seq_cst);
b2_1 = b2;
x_1 = x;
y1_1 = y1;
y_1 = y;
x1_1 = x1;
}

void *func_2() {
int b3;
int x;
int y1;
int y;
int x1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
if(1) {
WRITE_ONCE(&<customTag2>b3</customTag>, 1);
WRITE_ONCE(&<customTag2>x</customTag>, 3);
<customTag2>y1</customTag> = READ_ONCE(<customTag2>y</customTag>);

if((<customTag2>y1</customTag>)!=(0)) {
WRITE_ONCE(&<customTag2>b3</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag2>b3</customTag>, 0);
//event.Skip

//event.Skip

WRITE_ONCE(&<customTag2>y</customTag>, 3);
<customTag2>x1</customTag> = READ_ONCE(<customTag2>x</customTag>);

if((<customTag2>x1</customTag>)!=(3)) {
WRITE_ONCE(&<customTag2>b3</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag2>b3</customTag>, 0);
//event.Skip

//event.Skip

if(1) {
WRITE_ONCE(&<customTag2>b3</customTag>, 1);
WRITE_ONCE(&<customTag2>x</customTag>, 3);
<customTag2>y1</customTag> = READ_ONCE(<customTag2>y</customTag>);

if((<customTag2>y1</customTag>)!=(0)) {
WRITE_ONCE(&<customTag2>b3</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag2>b3</customTag>, 0);
//event.Skip

//event.Skip

WRITE_ONCE(&<customTag2>x</customTag>, 3);
<customTag2>x1</customTag> = READ_ONCE(<customTag2>x</customTag>);

if((<customTag2>x1</customTag>)!=(3)) {
WRITE_ONCE(&<customTag2>b3</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag2>b3</customTag>, 0);
//event.Skip

//event.Skip

} else {}

WRITE_ONCE(&<customTag2>b3</customTag>, 1);
WRITE_ONCE(&<customTag2>x</customTag>, 3);
<customTag2>y1</customTag> = READ_ONCE(<customTag2>y</customTag>);

if((<customTag2>y1</customTag>)!=(0)) {
WRITE_ONCE(&<customTag2>b3</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag2>b3</customTag>, 0);
//event.Skip

//event.Skip

WRITE_ONCE(&<customTag2>x</customTag>, 3);
<customTag2>x1</customTag> = READ_ONCE(<customTag2>x</customTag>);

if((<customTag2>x1</customTag>)!=(3)) {
WRITE_ONCE(&<customTag2>b3</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag2>b3</customTag>, 0);
//event.Skip

//event.Skip

//event.Skip

//event.Skip

} else {}

WRITE_ONCE(&<customTag2>b3</customTag>, 1);
WRITE_ONCE(&<customTag2>x</customTag>, 3);
<customTag2>y1</customTag> = READ_ONCE(<customTag2>y</customTag>);

if((<customTag2>y1</customTag>)!=(0)) {
WRITE_ONCE(&<customTag2>b3</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag2>b3</customTag>, 0);
//event.Skip

//event.Skip

WRITE_ONCE(&<customTag2>y</customTag>, 3);
<customTag2>x1</customTag> = READ_ONCE(<customTag2>x</customTag>);

if((<customTag2>x1</customTag>)!=(3)) {
WRITE_ONCE(&<customTag2>b3</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag2>b3</customTag>, 0);
//event.Skip

//event.Skip

if(1) {
WRITE_ONCE(&<customTag2>b3</customTag>, 1);
WRITE_ONCE(&<customTag2>x</customTag>, 3);
<customTag2>y1</customTag> = READ_ONCE(<customTag2>y</customTag>);

if((<customTag2>y1</customTag>)!=(0)) {
WRITE_ONCE(&<customTag2>b3</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag2>b3</customTag>, 0);
//event.Skip

//event.Skip

WRITE_ONCE(&<customTag2>x</customTag>, 3);
<customTag2>x1</customTag> = READ_ONCE(<customTag2>x</customTag>);

if((<customTag2>x1</customTag>)!=(3)) {
WRITE_ONCE(&<customTag2>b3</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag2>b3</customTag>, 0);
//event.Skip

//event.Skip

} else {}

WRITE_ONCE(&<customTag2>b3</customTag>, 1);
WRITE_ONCE(&<customTag2>x</customTag>, 3);
<customTag2>y1</customTag> = READ_ONCE(<customTag2>y</customTag>);

if((<customTag2>y1</customTag>)!=(0)) {
WRITE_ONCE(&<customTag2>b3</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag2>b3</customTag>, 0);
//event.Skip

//event.Skip

WRITE_ONCE(&<customTag2>x</customTag>, 3);
<customTag2>x1</customTag> = READ_ONCE(<customTag2>x</customTag>);

if((<customTag2>x1</customTag>)!=(3)) {
WRITE_ONCE(&<customTag2>b3</customTag>, 0);
} else {}

WRITE_ONCE(&<customTag2>b3</customTag>, 0);
//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

atomic_thread_fence(memory_order_seq_cst);
b3_2 = b3;
x_2 = x;
y1_2 = y1;
y_2 = y;
x1_2 = x1;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
atomic_init(&mem3, 0); //event.Init, 0);
atomic_init(&mem4, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_t thread_2;
pthread_create(&thread_2, NULL, &func_2, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
int b2 = atomic_load_explicit(&mem3, memory_order_relaxed);
int b3 = atomic_load_explicit(&mem4, memory_order_relaxed);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
int y = atomic_load_explicit(&mem1, memory_order_relaxed);
int b1 = atomic_load_explicit(&mem2, memory_order_relaxed);
assert(!(((b1 == 2) && (b2 == 2)) && (b3 == 2)));
return 0;
}


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
int flag2_0;
int flag1_0;
int f2_0;
int flag2_1;
int flag1_1;
int f1_1;
atomic_int mem0;
atomic_int mem1;
void *func_0() {
int flag2;
int flag1;
int f2;
//event.Skip

/*§Skip§*/
/*§Skip§*/
if(1) {
WRITE_ONCE(&<customTag0>flag1</customTag>, 1);
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)>=(3)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)>=(3)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)>=(3)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

//event.Skip

//event.Skip

WRITE_ONCE(&<customTag0>flag1</customTag>, 3);
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)==(1)) {
WRITE_ONCE(&<customTag0>flag1</customTag>, 2);
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

//event.Skip

//event.Skip

} else {}

WRITE_ONCE(&<customTag0>flag1</customTag>, 2);
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

WRITE_ONCE(&<customTag0>flag1</customTag>, 4);
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)>=(2)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)>=(2)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)>=(2)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if(((2)<=(<customTag0>f2</customTag>) & (<customTag0>f2</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if(((2)<=(<customTag0>f2</customTag>) & (<customTag0>f2</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if(((2)<=(<customTag0>f2</customTag>) & (<customTag0>f2</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

//event.Skip

//event.Skip

if(1) {
WRITE_ONCE(&<customTag0>flag1</customTag>, 1);
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)>=(3)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

WRITE_ONCE(&<customTag0>flag1</customTag>, 3);
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)==(1)) {
WRITE_ONCE(&<customTag0>flag1</customTag>, 2);
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

} else {}

WRITE_ONCE(&<customTag0>flag1</customTag>, 2);
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

//event.Skip

//event.Skip

WRITE_ONCE(&<customTag0>flag1</customTag>, 4);
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)>=(2)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if(((2)<=(<customTag0>f2</customTag>) & (<customTag0>f2</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

} else {}

WRITE_ONCE(&<customTag0>flag1</customTag>, 1);
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)>=(3)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

WRITE_ONCE(&<customTag0>flag1</customTag>, 3);
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)==(1)) {
WRITE_ONCE(&<customTag0>flag1</customTag>, 2);
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

} else {}

WRITE_ONCE(&<customTag0>flag1</customTag>, 2);
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

//event.Skip

//event.Skip

WRITE_ONCE(&<customTag0>flag1</customTag>, 4);
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)>=(2)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if(((2)<=(<customTag0>f2</customTag>) & (<customTag0>f2</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

//event.Skip

//event.Skip

} else {}

WRITE_ONCE(&<customTag0>flag1</customTag>, 1);
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)>=(3)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)>=(3)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)>=(3)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

//event.Skip

//event.Skip

WRITE_ONCE(&<customTag0>flag1</customTag>, 3);
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)==(1)) {
WRITE_ONCE(&<customTag0>flag1</customTag>, 2);
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

//event.Skip

//event.Skip

} else {}

WRITE_ONCE(&<customTag0>flag1</customTag>, 2);
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

WRITE_ONCE(&<customTag0>flag1</customTag>, 4);
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)>=(2)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)>=(2)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)>=(2)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if(((2)<=(<customTag0>f2</customTag>) & (<customTag0>f2</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if(((2)<=(<customTag0>f2</customTag>) & (<customTag0>f2</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if(((2)<=(<customTag0>f2</customTag>) & (<customTag0>f2</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

//event.Skip

//event.Skip

if(1) {
WRITE_ONCE(&<customTag0>flag1</customTag>, 1);
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)>=(3)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

WRITE_ONCE(&<customTag0>flag1</customTag>, 3);
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)==(1)) {
WRITE_ONCE(&<customTag0>flag1</customTag>, 2);
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

} else {}

WRITE_ONCE(&<customTag0>flag1</customTag>, 2);
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

//event.Skip

//event.Skip

WRITE_ONCE(&<customTag0>flag1</customTag>, 4);
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)>=(2)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if(((2)<=(<customTag0>f2</customTag>) & (<customTag0>f2</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

} else {}

WRITE_ONCE(&<customTag0>flag1</customTag>, 1);
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)>=(3)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

WRITE_ONCE(&<customTag0>flag1</customTag>, 3);
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)==(1)) {
WRITE_ONCE(&<customTag0>flag1</customTag>, 2);
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

} else {}

WRITE_ONCE(&<customTag0>flag1</customTag>, 2);
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

//event.Skip

//event.Skip

WRITE_ONCE(&<customTag0>flag1</customTag>, 4);
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if((<customTag0>f2</customTag>)>=(2)) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

if(((2)<=(<customTag0>f2</customTag>) & (<customTag0>f2</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

} else {}

<customTag0>f2</customTag> = READ_ONCE(<customTag0>flag2</customTag>);

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

atomic_thread_fence(memory_order_seq_cst);
flag2_0 = flag2;
flag1_0 = flag1;
f2_0 = f2;
}

void *func_1() {
int flag2;
int flag1;
int f1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
if(1) {
WRITE_ONCE(&<customTag1>flag2</customTag>, 1);
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)>=(3)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)>=(3)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)>=(3)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

//event.Skip

//event.Skip

WRITE_ONCE(&<customTag1>flag2</customTag>, 3);
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)==(1)) {
WRITE_ONCE(&<customTag1>flag2</customTag>, 2);
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

//event.Skip

//event.Skip

} else {}

WRITE_ONCE(&<customTag1>flag2</customTag>, 2);
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

WRITE_ONCE(&<customTag1>flag2</customTag>, 4);
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)>=(2)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)>=(2)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)>=(2)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if(((2)<=(<customTag1>f1</customTag>) & (<customTag1>f1</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if(((2)<=(<customTag1>f1</customTag>) & (<customTag1>f1</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if(((2)<=(<customTag1>f1</customTag>) & (<customTag1>f1</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

//event.Skip

//event.Skip

if(1) {
WRITE_ONCE(&<customTag1>flag2</customTag>, 1);
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)>=(3)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

WRITE_ONCE(&<customTag1>flag2</customTag>, 3);
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)==(1)) {
WRITE_ONCE(&<customTag1>flag2</customTag>, 2);
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

} else {}

WRITE_ONCE(&<customTag1>flag2</customTag>, 2);
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

//event.Skip

//event.Skip

WRITE_ONCE(&<customTag1>flag2</customTag>, 4);
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)>=(2)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if(((2)<=(<customTag1>f1</customTag>) & (<customTag1>f1</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

} else {}

WRITE_ONCE(&<customTag1>flag2</customTag>, 1);
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)>=(3)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

WRITE_ONCE(&<customTag1>flag2</customTag>, 3);
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)==(1)) {
WRITE_ONCE(&<customTag1>flag2</customTag>, 2);
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

} else {}

WRITE_ONCE(&<customTag1>flag2</customTag>, 2);
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

//event.Skip

//event.Skip

WRITE_ONCE(&<customTag1>flag2</customTag>, 4);
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)>=(2)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if(((2)<=(<customTag1>f1</customTag>) & (<customTag1>f1</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

//event.Skip

//event.Skip

} else {}

WRITE_ONCE(&<customTag1>flag2</customTag>, 1);
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)>=(3)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)>=(3)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)>=(3)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

//event.Skip

//event.Skip

WRITE_ONCE(&<customTag1>flag2</customTag>, 3);
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)==(1)) {
WRITE_ONCE(&<customTag1>flag2</customTag>, 2);
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

//event.Skip

//event.Skip

} else {}

WRITE_ONCE(&<customTag1>flag2</customTag>, 2);
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

WRITE_ONCE(&<customTag1>flag2</customTag>, 4);
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)>=(2)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)>=(2)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)>=(2)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if(((2)<=(<customTag1>f1</customTag>) & (<customTag1>f1</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if(((2)<=(<customTag1>f1</customTag>) & (<customTag1>f1</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if(((2)<=(<customTag1>f1</customTag>) & (<customTag1>f1</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

//event.Skip

//event.Skip

if(1) {
WRITE_ONCE(&<customTag1>flag2</customTag>, 1);
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)>=(3)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

WRITE_ONCE(&<customTag1>flag2</customTag>, 3);
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)==(1)) {
WRITE_ONCE(&<customTag1>flag2</customTag>, 2);
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

} else {}

WRITE_ONCE(&<customTag1>flag2</customTag>, 2);
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

//event.Skip

//event.Skip

WRITE_ONCE(&<customTag1>flag2</customTag>, 4);
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)>=(2)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if(((2)<=(<customTag1>f1</customTag>) & (<customTag1>f1</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

} else {}

WRITE_ONCE(&<customTag1>flag2</customTag>, 1);
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)>=(3)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

WRITE_ONCE(&<customTag1>flag2</customTag>, 3);
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)==(1)) {
WRITE_ONCE(&<customTag1>flag2</customTag>, 2);
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

} else {}

WRITE_ONCE(&<customTag1>flag2</customTag>, 2);
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

//event.Skip

//event.Skip

WRITE_ONCE(&<customTag1>flag2</customTag>, 4);
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if((<customTag1>f1</customTag>)>=(2)) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

if(((2)<=(<customTag1>f1</customTag>) & (<customTag1>f1</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

} else {}

<customTag1>f1</customTag> = READ_ONCE(<customTag1>flag1</customTag>);

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

atomic_thread_fence(memory_order_seq_cst);
flag2_1 = flag2;
flag1_1 = flag1;
f1_1 = f1;
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
int flag2 = atomic_load_explicit(&mem1, memory_order_relaxed);
int flag1 = atomic_load_explicit(&mem0, memory_order_relaxed);
assert(!(flag1 == 10));
return 0;
}


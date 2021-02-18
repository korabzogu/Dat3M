#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int n0_0;
int n1_0;
int chk_0;
int c0_0;
int c1_0;
int r0_0;
int r1_0;
int q1_1;
int n0_1;
int n1_1;
int chk_1;
int c0_1;
int c1_1;
int q0_1;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
atomic_int mem3/* Address */;
void *func_0() {
int n0;
int n1;
int chk;
int c0;
int c1;
int r0;
int r1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
if(1) {
<customTag0>c0</customTag> = 1;

<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>n1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag0>r1</customTag> = (<customTag0>r0</customTag> + 1) /* IEXPRBIN */;//event.Local

<customTag0>n0</customTag> = <customTag0>r1</customTag>;

<customTag0>c0</customTag> = 0;

<customTag0>chk</customTag> = atomic_load_explicit(&<customTag0>c1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>chk</customTag>)!=(0)) {
<customTag0>chk</customTag> = atomic_load_explicit(&<customTag0>c1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>chk</customTag>)!=(0)) {
<customTag0>chk</customTag> = atomic_load_explicit(&<customTag0>c1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>chk</customTag> = atomic_load_explicit(&<customTag0>c1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag0>chk</customTag> = atomic_load_explicit(&<customTag0>c1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>chk</customTag>)!=(0)) {
<customTag0>chk</customTag> = atomic_load_explicit(&<customTag0>c1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>chk</customTag> = atomic_load_explicit(&<customTag0>c1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>n1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((<customTag0>r0</customTag>)!=(0) & (<customTag0>r0</customTag>)<(<customTag0>r1</customTag>)) /* IEXPRBIN */) {
<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>n1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((<customTag0>r0</customTag>)!=(0) & (<customTag0>r0</customTag>)<(<customTag0>r1</customTag>)) /* IEXPRBIN */) {
<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>n1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>n1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>n1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((<customTag0>r0</customTag>)!=(0) & (<customTag0>r0</customTag>)<(<customTag0>r1</customTag>)) /* IEXPRBIN */) {
<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>n1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>n1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

if(1) {
<customTag0>c0</customTag> = 1;

<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>n1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag0>r1</customTag> = (<customTag0>r0</customTag> + 1) /* IEXPRBIN */;//event.Local

<customTag0>n0</customTag> = <customTag0>r1</customTag>;

<customTag0>c0</customTag> = 0;

<customTag0>chk</customTag> = atomic_load_explicit(&<customTag0>c1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>chk</customTag>)!=(0)) {
<customTag0>chk</customTag> = atomic_load_explicit(&<customTag0>c1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>chk</customTag> = atomic_load_explicit(&<customTag0>c1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>n1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((<customTag0>r0</customTag>)!=(0) & (<customTag0>r0</customTag>)<(<customTag0>r1</customTag>)) /* IEXPRBIN */) {
<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>n1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>n1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag0>c0</customTag> = 1;

<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>n1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag0>r1</customTag> = (<customTag0>r0</customTag> + 1) /* IEXPRBIN */;//event.Local

<customTag0>n0</customTag> = <customTag0>r1</customTag>;

<customTag0>c0</customTag> = 0;

<customTag0>chk</customTag> = atomic_load_explicit(&<customTag0>c1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>chk</customTag>)!=(0)) {
<customTag0>chk</customTag> = atomic_load_explicit(&<customTag0>c1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>chk</customTag> = atomic_load_explicit(&<customTag0>c1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>n1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((<customTag0>r0</customTag>)!=(0) & (<customTag0>r0</customTag>)<(<customTag0>r1</customTag>)) /* IEXPRBIN */) {
<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>n1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>n1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

} else {}

<customTag0>c0</customTag> = 1;

<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>n1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag0>r1</customTag> = (<customTag0>r0</customTag> + 1) /* IEXPRBIN */;//event.Local

<customTag0>n0</customTag> = <customTag0>r1</customTag>;

<customTag0>c0</customTag> = 0;

<customTag0>chk</customTag> = atomic_load_explicit(&<customTag0>c1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>chk</customTag>)!=(0)) {
<customTag0>chk</customTag> = atomic_load_explicit(&<customTag0>c1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>chk</customTag>)!=(0)) {
<customTag0>chk</customTag> = atomic_load_explicit(&<customTag0>c1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>chk</customTag> = atomic_load_explicit(&<customTag0>c1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag0>chk</customTag> = atomic_load_explicit(&<customTag0>c1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>chk</customTag>)!=(0)) {
<customTag0>chk</customTag> = atomic_load_explicit(&<customTag0>c1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>chk</customTag> = atomic_load_explicit(&<customTag0>c1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>n1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((<customTag0>r0</customTag>)!=(0) & (<customTag0>r0</customTag>)<(<customTag0>r1</customTag>)) /* IEXPRBIN */) {
<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>n1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((<customTag0>r0</customTag>)!=(0) & (<customTag0>r0</customTag>)<(<customTag0>r1</customTag>)) /* IEXPRBIN */) {
<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>n1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>n1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>n1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((<customTag0>r0</customTag>)!=(0) & (<customTag0>r0</customTag>)<(<customTag0>r1</customTag>)) /* IEXPRBIN */) {
<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>n1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>n1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

if(1) {
<customTag0>c0</customTag> = 1;

<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>n1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag0>r1</customTag> = (<customTag0>r0</customTag> + 1) /* IEXPRBIN */;//event.Local

<customTag0>n0</customTag> = <customTag0>r1</customTag>;

<customTag0>c0</customTag> = 0;

<customTag0>chk</customTag> = atomic_load_explicit(&<customTag0>c1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>chk</customTag>)!=(0)) {
<customTag0>chk</customTag> = atomic_load_explicit(&<customTag0>c1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>chk</customTag> = atomic_load_explicit(&<customTag0>c1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>n1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((<customTag0>r0</customTag>)!=(0) & (<customTag0>r0</customTag>)<(<customTag0>r1</customTag>)) /* IEXPRBIN */) {
<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>n1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>n1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag0>c0</customTag> = 1;

<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>n1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag0>r1</customTag> = (<customTag0>r0</customTag> + 1) /* IEXPRBIN */;//event.Local

<customTag0>n0</customTag> = <customTag0>r1</customTag>;

<customTag0>c0</customTag> = 0;

<customTag0>chk</customTag> = atomic_load_explicit(&<customTag0>c1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>chk</customTag>)!=(0)) {
<customTag0>chk</customTag> = atomic_load_explicit(&<customTag0>c1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>chk</customTag> = atomic_load_explicit(&<customTag0>c1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>n1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((<customTag0>r0</customTag>)!=(0) & (<customTag0>r0</customTag>)<(<customTag0>r1</customTag>)) /* IEXPRBIN */) {
<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>n1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>r0</customTag> = atomic_load_explicit(&<customTag0>n1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

atomic_thread_fence(memory_order_seq_cst);
n0_0 = n0;
n1_0 = n1;
chk_0 = chk;
c0_0 = c0;
c1_0 = c1;
r0_0 = r0;
r1_0 = r1;
}

void *func_1() {
int q1;
int n0;
int n1;
int chk;
int c0;
int c1;
int q0;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
if(1) {
<customTag1>c1</customTag> = 1;

<customTag1>q0</customTag> = atomic_load_explicit(&<customTag1>n0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag1>q1</customTag> = (<customTag1>q0</customTag> + 1) /* IEXPRBIN */;//event.Local

<customTag1>n1</customTag> = <customTag1>q1</customTag>;

<customTag1>c1</customTag> = 0;

<customTag1>chk</customTag> = atomic_load_explicit(&<customTag1>c0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>chk</customTag>)!=(0)) {
<customTag1>chk</customTag> = atomic_load_explicit(&<customTag1>c0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>chk</customTag>)!=(0)) {
<customTag1>chk</customTag> = atomic_load_explicit(&<customTag1>c0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>chk</customTag> = atomic_load_explicit(&<customTag1>c0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag1>chk</customTag> = atomic_load_explicit(&<customTag1>c0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>chk</customTag>)!=(0)) {
<customTag1>chk</customTag> = atomic_load_explicit(&<customTag1>c0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>chk</customTag> = atomic_load_explicit(&<customTag1>c0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag1>q0</customTag> = atomic_load_explicit(&<customTag1>n0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((<customTag1>q0</customTag>)!=(0) & (<customTag1>q0</customTag>)<(<customTag1>q1</customTag>)) /* IEXPRBIN */) {
<customTag1>q0</customTag> = atomic_load_explicit(&<customTag1>n0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((<customTag1>q0</customTag>)!=(0) & (<customTag1>q0</customTag>)<(<customTag1>q1</customTag>)) /* IEXPRBIN */) {
<customTag1>q0</customTag> = atomic_load_explicit(&<customTag1>n0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>q0</customTag> = atomic_load_explicit(&<customTag1>n0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag1>q0</customTag> = atomic_load_explicit(&<customTag1>n0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((<customTag1>q0</customTag>)!=(0) & (<customTag1>q0</customTag>)<(<customTag1>q1</customTag>)) /* IEXPRBIN */) {
<customTag1>q0</customTag> = atomic_load_explicit(&<customTag1>n0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>q0</customTag> = atomic_load_explicit(&<customTag1>n0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

if(1) {
<customTag1>c1</customTag> = 1;

<customTag1>q0</customTag> = atomic_load_explicit(&<customTag1>n0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag1>q1</customTag> = (<customTag1>q0</customTag> + 1) /* IEXPRBIN */;//event.Local

<customTag1>n1</customTag> = <customTag1>q1</customTag>;

<customTag1>c1</customTag> = 0;

<customTag1>chk</customTag> = atomic_load_explicit(&<customTag1>c0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>chk</customTag>)!=(0)) {
<customTag1>chk</customTag> = atomic_load_explicit(&<customTag1>c0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>chk</customTag> = atomic_load_explicit(&<customTag1>c0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>q0</customTag> = atomic_load_explicit(&<customTag1>n0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((<customTag1>q0</customTag>)!=(0) & (<customTag1>q0</customTag>)<(<customTag1>q1</customTag>)) /* IEXPRBIN */) {
<customTag1>q0</customTag> = atomic_load_explicit(&<customTag1>n0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>q0</customTag> = atomic_load_explicit(&<customTag1>n0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag1>c1</customTag> = 1;

<customTag1>q0</customTag> = atomic_load_explicit(&<customTag1>n0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag1>q1</customTag> = (<customTag1>q0</customTag> + 1) /* IEXPRBIN */;//event.Local

<customTag1>n1</customTag> = <customTag1>q1</customTag>;

<customTag1>c1</customTag> = 0;

<customTag1>chk</customTag> = atomic_load_explicit(&<customTag1>c0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>chk</customTag>)!=(0)) {
<customTag1>chk</customTag> = atomic_load_explicit(&<customTag1>c0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>chk</customTag> = atomic_load_explicit(&<customTag1>c0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>q0</customTag> = atomic_load_explicit(&<customTag1>n0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((<customTag1>q0</customTag>)!=(0) & (<customTag1>q0</customTag>)<(<customTag1>q1</customTag>)) /* IEXPRBIN */) {
<customTag1>q0</customTag> = atomic_load_explicit(&<customTag1>n0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>q0</customTag> = atomic_load_explicit(&<customTag1>n0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

} else {}

<customTag1>c1</customTag> = 1;

<customTag1>q0</customTag> = atomic_load_explicit(&<customTag1>n0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag1>q1</customTag> = (<customTag1>q0</customTag> + 1) /* IEXPRBIN */;//event.Local

<customTag1>n1</customTag> = <customTag1>q1</customTag>;

<customTag1>c1</customTag> = 0;

<customTag1>chk</customTag> = atomic_load_explicit(&<customTag1>c0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>chk</customTag>)!=(0)) {
<customTag1>chk</customTag> = atomic_load_explicit(&<customTag1>c0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>chk</customTag>)!=(0)) {
<customTag1>chk</customTag> = atomic_load_explicit(&<customTag1>c0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>chk</customTag> = atomic_load_explicit(&<customTag1>c0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag1>chk</customTag> = atomic_load_explicit(&<customTag1>c0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>chk</customTag>)!=(0)) {
<customTag1>chk</customTag> = atomic_load_explicit(&<customTag1>c0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>chk</customTag> = atomic_load_explicit(&<customTag1>c0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag1>q0</customTag> = atomic_load_explicit(&<customTag1>n0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((<customTag1>q0</customTag>)!=(0) & (<customTag1>q0</customTag>)<(<customTag1>q1</customTag>)) /* IEXPRBIN */) {
<customTag1>q0</customTag> = atomic_load_explicit(&<customTag1>n0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((<customTag1>q0</customTag>)!=(0) & (<customTag1>q0</customTag>)<(<customTag1>q1</customTag>)) /* IEXPRBIN */) {
<customTag1>q0</customTag> = atomic_load_explicit(&<customTag1>n0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>q0</customTag> = atomic_load_explicit(&<customTag1>n0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag1>q0</customTag> = atomic_load_explicit(&<customTag1>n0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((<customTag1>q0</customTag>)!=(0) & (<customTag1>q0</customTag>)<(<customTag1>q1</customTag>)) /* IEXPRBIN */) {
<customTag1>q0</customTag> = atomic_load_explicit(&<customTag1>n0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>q0</customTag> = atomic_load_explicit(&<customTag1>n0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

if(1) {
<customTag1>c1</customTag> = 1;

<customTag1>q0</customTag> = atomic_load_explicit(&<customTag1>n0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag1>q1</customTag> = (<customTag1>q0</customTag> + 1) /* IEXPRBIN */;//event.Local

<customTag1>n1</customTag> = <customTag1>q1</customTag>;

<customTag1>c1</customTag> = 0;

<customTag1>chk</customTag> = atomic_load_explicit(&<customTag1>c0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>chk</customTag>)!=(0)) {
<customTag1>chk</customTag> = atomic_load_explicit(&<customTag1>c0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>chk</customTag> = atomic_load_explicit(&<customTag1>c0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>q0</customTag> = atomic_load_explicit(&<customTag1>n0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((<customTag1>q0</customTag>)!=(0) & (<customTag1>q0</customTag>)<(<customTag1>q1</customTag>)) /* IEXPRBIN */) {
<customTag1>q0</customTag> = atomic_load_explicit(&<customTag1>n0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>q0</customTag> = atomic_load_explicit(&<customTag1>n0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag1>c1</customTag> = 1;

<customTag1>q0</customTag> = atomic_load_explicit(&<customTag1>n0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag1>q1</customTag> = (<customTag1>q0</customTag> + 1) /* IEXPRBIN */;//event.Local

<customTag1>n1</customTag> = <customTag1>q1</customTag>;

<customTag1>c1</customTag> = 0;

<customTag1>chk</customTag> = atomic_load_explicit(&<customTag1>c0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>chk</customTag>)!=(0)) {
<customTag1>chk</customTag> = atomic_load_explicit(&<customTag1>c0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>chk</customTag> = atomic_load_explicit(&<customTag1>c0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>q0</customTag> = atomic_load_explicit(&<customTag1>n0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((<customTag1>q0</customTag>)!=(0) & (<customTag1>q0</customTag>)<(<customTag1>q1</customTag>)) /* IEXPRBIN */) {
<customTag1>q0</customTag> = atomic_load_explicit(&<customTag1>n0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>q0</customTag> = atomic_load_explicit(&<customTag1>n0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

atomic_thread_fence(memory_order_seq_cst);
q1_1 = q1;
n0_1 = n0;
n1_1 = n1;
chk_1 = chk;
c0_1 = c0;
c1_1 = c1;
q0_1 = q0;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
atomic_init(&mem3, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int n0 = atomic_load_explicit(&mem2, memory_order_relaxed);
int n1 = atomic_load_explicit(&mem3, memory_order_relaxed);
int c0 = atomic_load_explicit(&mem0, memory_order_relaxed);
int c1 = atomic_load_explicit(&mem1, memory_order_relaxed);
assert((c0 == 10));
return 0;
}


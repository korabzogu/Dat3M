#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int flag1_0;
int flag0_0;
int turn_0;
int f1_0;
int t1_0;
int flag1_1;
int flag0_1;
int turn_1;
int f2_1;
int t2_1;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
void *func_0() {
int flag1;
int flag0;
int turn;
int f1;
int t1;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
if(1) {
<customTag0>flag0</customTag> = 1;

<customTag0>f1</customTag> = atomic_load_explicit(&<customTag0>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f1</customTag>)==(1)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

} else {}

<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

//event.Skip

//event.Skip

if((<customTag0>f1</customTag>)==(1)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

} else {}

<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

//event.Skip

//event.Skip

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

} else {}

<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

//event.Skip

//event.Skip

//event.Skip

//event.Skip

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

} else {}

<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

//event.Skip

//event.Skip

if((<customTag0>f1</customTag>)==(1)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

} else {}

<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

//event.Skip

//event.Skip

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

} else {}

<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

if(1) {
<customTag0>flag0</customTag> = 1;

<customTag0>f1</customTag> = atomic_load_explicit(&<customTag0>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f1</customTag>)==(1)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

} else {}

<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

//event.Skip

//event.Skip

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

} else {}

<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

//event.Skip

//event.Skip

//event.Skip

//event.Skip

} else {}

<customTag0>flag0</customTag> = 1;

<customTag0>f1</customTag> = atomic_load_explicit(&<customTag0>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f1</customTag>)==(1)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

} else {}

<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

//event.Skip

//event.Skip

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

} else {}

<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

} else {}

<customTag0>flag0</customTag> = 1;

<customTag0>f1</customTag> = atomic_load_explicit(&<customTag0>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f1</customTag>)==(1)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

} else {}

<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

//event.Skip

//event.Skip

if((<customTag0>f1</customTag>)==(1)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

} else {}

<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

//event.Skip

//event.Skip

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

} else {}

<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

//event.Skip

//event.Skip

//event.Skip

//event.Skip

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

} else {}

<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

//event.Skip

//event.Skip

if((<customTag0>f1</customTag>)==(1)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

} else {}

<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

//event.Skip

//event.Skip

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

} else {}

<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

if(1) {
<customTag0>flag0</customTag> = 1;

<customTag0>f1</customTag> = atomic_load_explicit(&<customTag0>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f1</customTag>)==(1)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

} else {}

<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

//event.Skip

//event.Skip

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

} else {}

<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

//event.Skip

//event.Skip

//event.Skip

//event.Skip

} else {}

<customTag0>flag0</customTag> = 1;

<customTag0>f1</customTag> = atomic_load_explicit(&<customTag0>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f1</customTag>)==(1)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

} else {}

<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

//event.Skip

//event.Skip

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

} else {}

<customTag0>flag0</customTag> = 0;

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>t1</customTag>)!=(0)) {
<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>t1</customTag> = atomic_load_explicit(&<customTag0>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag0</customTag> = 1;

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

atomic_thread_fence(memory_order_seq_cst);
flag1_0 = flag1;
flag0_0 = flag0;
turn_0 = turn;
f1_0 = f1;
t1_0 = t1;
}

void *func_1() {
int flag1;
int flag0;
int turn;
int f2;
int t2;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
if(1) {
<customTag1>flag1</customTag> = 1;

<customTag1>f2</customTag> = atomic_load_explicit(&<customTag1>flag0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f2</customTag>)==(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

} else {}

<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

//event.Skip

//event.Skip

if((<customTag1>f2</customTag>)==(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

} else {}

<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

//event.Skip

//event.Skip

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

} else {}

<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

//event.Skip

//event.Skip

//event.Skip

//event.Skip

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

} else {}

<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

//event.Skip

//event.Skip

if((<customTag1>f2</customTag>)==(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

} else {}

<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

//event.Skip

//event.Skip

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

} else {}

<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

if(1) {
<customTag1>flag1</customTag> = 1;

<customTag1>f2</customTag> = atomic_load_explicit(&<customTag1>flag0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f2</customTag>)==(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

} else {}

<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

//event.Skip

//event.Skip

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

} else {}

<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

//event.Skip

//event.Skip

//event.Skip

//event.Skip

} else {}

<customTag1>flag1</customTag> = 1;

<customTag1>f2</customTag> = atomic_load_explicit(&<customTag1>flag0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f2</customTag>)==(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

} else {}

<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

//event.Skip

//event.Skip

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

} else {}

<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

} else {}

<customTag1>flag1</customTag> = 1;

<customTag1>f2</customTag> = atomic_load_explicit(&<customTag1>flag0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f2</customTag>)==(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

} else {}

<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

//event.Skip

//event.Skip

if((<customTag1>f2</customTag>)==(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

} else {}

<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

//event.Skip

//event.Skip

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

} else {}

<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

//event.Skip

//event.Skip

//event.Skip

//event.Skip

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

} else {}

<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

//event.Skip

//event.Skip

if((<customTag1>f2</customTag>)==(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

} else {}

<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

//event.Skip

//event.Skip

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

} else {}

<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

if(1) {
<customTag1>flag1</customTag> = 1;

<customTag1>f2</customTag> = atomic_load_explicit(&<customTag1>flag0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f2</customTag>)==(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

} else {}

<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

//event.Skip

//event.Skip

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

} else {}

<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

//event.Skip

//event.Skip

//event.Skip

//event.Skip

} else {}

<customTag1>flag1</customTag> = 1;

<customTag1>f2</customTag> = atomic_load_explicit(&<customTag1>flag0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f2</customTag>)==(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

} else {}

<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

//event.Skip

//event.Skip

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

} else {}

<customTag1>flag1</customTag> = 0;

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>t2</customTag>)!=(1)) {
<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>t2</customTag> = atomic_load_explicit(&<customTag1>turn</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag1</customTag> = 1;

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

atomic_thread_fence(memory_order_seq_cst);
flag1_1 = flag1;
flag0_1 = flag0;
turn_1 = turn;
f2_1 = f2;
t2_1 = t2;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int flag1 = atomic_load_explicit(&mem1, memory_order_relaxed);
int flag0 = atomic_load_explicit(&mem0, memory_order_relaxed);
int turn = atomic_load_explicit(&mem2, memory_order_relaxed);
assert((turn == 10));
return 0;
}


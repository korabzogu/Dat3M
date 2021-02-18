#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int flag2_0;
int flag1_0;
int f2_0;
int flag2_1;
int flag1_1;
int f1_1;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
void *func_0() {
int flag2;
int flag1;
int f2;
//event.Skip

/*§Skip§*/
/*§Skip§*/
if(1) {
<customTag0>flag1</customTag> = 1;

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)>=(3)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)>=(3)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)>=(3)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag0>flag1</customTag> = 3;

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)==(1)) {
<customTag0>flag1</customTag> = 2;

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

} else {}

<customTag0>flag1</customTag> = 2;

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag0>flag1</customTag> = 4;

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)>=(2)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)>=(2)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)>=(2)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((2)<=(<customTag0>f2</customTag>) & (<customTag0>f2</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((2)<=(<customTag0>f2</customTag>) & (<customTag0>f2</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((2)<=(<customTag0>f2</customTag>) & (<customTag0>f2</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

if(1) {
<customTag0>flag1</customTag> = 1;

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)>=(3)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag1</customTag> = 3;

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)==(1)) {
<customTag0>flag1</customTag> = 2;

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag0>flag1</customTag> = 2;

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag0>flag1</customTag> = 4;

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)>=(2)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((2)<=(<customTag0>f2</customTag>) & (<customTag0>f2</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag0>flag1</customTag> = 1;

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)>=(3)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag1</customTag> = 3;

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)==(1)) {
<customTag0>flag1</customTag> = 2;

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag0>flag1</customTag> = 2;

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag0>flag1</customTag> = 4;

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)>=(2)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((2)<=(<customTag0>f2</customTag>) & (<customTag0>f2</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

} else {}

<customTag0>flag1</customTag> = 1;

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)>=(3)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)>=(3)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)>=(3)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag0>flag1</customTag> = 3;

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)==(1)) {
<customTag0>flag1</customTag> = 2;

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

} else {}

<customTag0>flag1</customTag> = 2;

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag0>flag1</customTag> = 4;

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)>=(2)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)>=(2)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)>=(2)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((2)<=(<customTag0>f2</customTag>) & (<customTag0>f2</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((2)<=(<customTag0>f2</customTag>) & (<customTag0>f2</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((2)<=(<customTag0>f2</customTag>) & (<customTag0>f2</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

if(1) {
<customTag0>flag1</customTag> = 1;

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)>=(3)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag1</customTag> = 3;

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)==(1)) {
<customTag0>flag1</customTag> = 2;

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag0>flag1</customTag> = 2;

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag0>flag1</customTag> = 4;

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)>=(2)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((2)<=(<customTag0>f2</customTag>) & (<customTag0>f2</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag0>flag1</customTag> = 1;

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)>=(3)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>flag1</customTag> = 3;

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)==(1)) {
<customTag0>flag1</customTag> = 2;

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag0>flag1</customTag> = 2;

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)!=(4)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag0>flag1</customTag> = 4;

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag0>f2</customTag>)>=(2)) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((2)<=(<customTag0>f2</customTag>) & (<customTag0>f2</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag0>f2</customTag> = atomic_load_explicit(&<customTag0>flag2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

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
<customTag1>flag2</customTag> = 1;

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)>=(3)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)>=(3)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)>=(3)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag1>flag2</customTag> = 3;

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)==(1)) {
<customTag1>flag2</customTag> = 2;

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

} else {}

<customTag1>flag2</customTag> = 2;

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag1>flag2</customTag> = 4;

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)>=(2)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)>=(2)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)>=(2)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((2)<=(<customTag1>f1</customTag>) & (<customTag1>f1</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((2)<=(<customTag1>f1</customTag>) & (<customTag1>f1</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((2)<=(<customTag1>f1</customTag>) & (<customTag1>f1</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

if(1) {
<customTag1>flag2</customTag> = 1;

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)>=(3)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag2</customTag> = 3;

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)==(1)) {
<customTag1>flag2</customTag> = 2;

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag1>flag2</customTag> = 2;

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag1>flag2</customTag> = 4;

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)>=(2)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((2)<=(<customTag1>f1</customTag>) & (<customTag1>f1</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag1>flag2</customTag> = 1;

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)>=(3)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag2</customTag> = 3;

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)==(1)) {
<customTag1>flag2</customTag> = 2;

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag1>flag2</customTag> = 2;

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag1>flag2</customTag> = 4;

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)>=(2)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((2)<=(<customTag1>f1</customTag>) & (<customTag1>f1</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

} else {}

<customTag1>flag2</customTag> = 1;

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)>=(3)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)>=(3)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)>=(3)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag1>flag2</customTag> = 3;

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)==(1)) {
<customTag1>flag2</customTag> = 2;

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

} else {}

<customTag1>flag2</customTag> = 2;

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag1>flag2</customTag> = 4;

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)>=(2)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)>=(2)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)>=(2)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((2)<=(<customTag1>f1</customTag>) & (<customTag1>f1</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((2)<=(<customTag1>f1</customTag>) & (<customTag1>f1</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((2)<=(<customTag1>f1</customTag>) & (<customTag1>f1</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

if(1) {
<customTag1>flag2</customTag> = 1;

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)>=(3)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag2</customTag> = 3;

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)==(1)) {
<customTag1>flag2</customTag> = 2;

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag1>flag2</customTag> = 2;

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag1>flag2</customTag> = 4;

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)>=(2)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((2)<=(<customTag1>f1</customTag>) & (<customTag1>f1</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag1>flag2</customTag> = 1;

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)>=(3)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>flag2</customTag> = 3;

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)==(1)) {
<customTag1>flag2</customTag> = 2;

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

} else {}

<customTag1>flag2</customTag> = 2;

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)!=(4)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

//event.Skip

//event.Skip

<customTag1>flag2</customTag> = 4;

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if((<customTag1>f1</customTag>)>=(2)) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

//event.Skip

//event.Skip

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

if(((2)<=(<customTag1>f1</customTag>) & (<customTag1>f1</customTag>)<=(3)) /* IEXPRBIN */) {
<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

} else {}

<customTag1>f1</customTag> = atomic_load_explicit(&<customTag1>flag1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

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
assert((flag1 == 10));
return 0;
}


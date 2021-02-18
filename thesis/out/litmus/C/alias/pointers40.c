#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int p_0;
int x41_0;
int t_0;
int x0_0;
int x1_0;
int y_0;
int t_1;
int x1_1;
int x2_1;
int t_2;
int x2_2;
int x3_2;
int t_3;
int x3_3;
int x4_3;
int t_4;
int x4_4;
int x5_4;
int t_5;
int x5_5;
int x6_5;
int t_6;
int x6_6;
int x7_6;
int x8_7;
int t_7;
int x7_7;
int x8_8;
int x9_8;
int t_8;
int x9_9;
int t_9;
int x10_9;
int t_10;
int x10_10;
int x11_10;
int t_11;
int x12_11;
int x11_11;
int t_12;
int x12_12;
int x13_12;
int t_13;
int x14_13;
int x13_13;
int t_14;
int x14_14;
int x15_14;
int t_15;
int x16_15;
int x15_15;
int t_16;
int x16_16;
int x17_16;
int t_17;
int x18_17;
int x17_17;
int x19_18;
int t_18;
int x18_18;
int x19_19;
int t_19;
int x20_19;
int t_20;
int x21_20;
int x20_20;
int t_21;
int x21_21;
int x22_21;
int t_22;
int x23_22;
int x22_22;
int t_23;
int x23_23;
int x24_23;
int t_24;
int x25_24;
int x24_24;
int t_25;
int x25_25;
int x26_25;
int t_26;
int x27_26;
int x26_26;
int t_27;
int x27_27;
int x28_27;
int t_28;
int x29_28;
int x28_28;
int x30_29;
int t_29;
int x29_29;
int x30_30;
int t_30;
int x31_30;
int t_31;
int x32_31;
int x31_31;
int t_32;
int x32_32;
int x33_32;
int t_33;
int x34_33;
int x33_33;
int t_34;
int x34_34;
int x35_34;
int t_35;
int x36_35;
int x35_35;
int t_36;
int x36_36;
int x37_36;
int t_37;
int x38_37;
int x37_37;
int t_38;
int x38_38;
int x39_38;
int t_39;
int x40_39;
int x39_39;
int x41_40;
int t_40;
int x40_40;
atomic_int mem0/* Address */;
atomic_int mem1/* Address */;
atomic_int mem2/* Address */;
atomic_int mem3/* Address */;
atomic_int mem4/* Address */;
atomic_int mem5/* Address */;
atomic_int mem6/* Address */;
atomic_int mem7/* Address */;
atomic_int mem8/* Address */;
atomic_int mem9/* Address */;
atomic_int mem10/* Address */;
atomic_int mem11/* Address */;
atomic_int mem12/* Address */;
atomic_int mem13/* Address */;
atomic_int mem14/* Address */;
atomic_int mem15/* Address */;
atomic_int mem16/* Address */;
atomic_int mem17/* Address */;
atomic_int mem18/* Address */;
atomic_int mem19/* Address */;
atomic_int mem20/* Address */;
atomic_int mem21/* Address */;
atomic_int mem22/* Address */;
atomic_int mem23/* Address */;
atomic_int mem24/* Address */;
atomic_int mem25/* Address */;
atomic_int mem26/* Address */;
atomic_int mem27/* Address */;
atomic_int mem28/* Address */;
atomic_int mem29/* Address */;
atomic_int mem30/* Address */;
atomic_int mem31/* Address */;
atomic_int mem32/* Address */;
atomic_int mem33/* Address */;
atomic_int mem34/* Address */;
atomic_int mem35/* Address */;
atomic_int mem36/* Address */;
atomic_int mem37/* Address */;
atomic_int mem38/* Address */;
atomic_int mem39/* Address */;
atomic_int mem40/* Address */;
atomic_int mem41/* Address */;
atomic_int mem42/* Address */;
void *func_0() {
int p;
int x41;
int t;
int x0;
int x1;
int y;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag0>p</customTag> = atomic_load_explicit(&<customTag0>x0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag0>x1</customTag> = <customTag0>p</customTag>;

<customTag0>t</customTag> = atomic_load_explicit(&<customTag0>x41</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag0>y</customTag> = <customTag0>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
p_0 = p;
x41_0 = x41;
t_0 = t;
x0_0 = x0;
x1_0 = x1;
y_0 = y;
}

void *func_1() {
int t;
int x1;
int x2;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag1>t</customTag> = atomic_load_explicit(&<customTag1>x1</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag1>x2</customTag> = <customTag1>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
t_1 = t;
x1_1 = x1;
x2_1 = x2;
}

void *func_2() {
int t;
int x2;
int x3;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag2>t</customTag> = atomic_load_explicit(&<customTag2>x2</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag2>x3</customTag> = <customTag2>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
t_2 = t;
x2_2 = x2;
x3_2 = x3;
}

void *func_3() {
int t;
int x3;
int x4;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag3>t</customTag> = atomic_load_explicit(&<customTag3>x3</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag3>x4</customTag> = <customTag3>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
t_3 = t;
x3_3 = x3;
x4_3 = x4;
}

void *func_4() {
int t;
int x4;
int x5;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag4>t</customTag> = atomic_load_explicit(&<customTag4>x4</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag4>x5</customTag> = <customTag4>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
t_4 = t;
x4_4 = x4;
x5_4 = x5;
}

void *func_5() {
int t;
int x5;
int x6;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag5>t</customTag> = atomic_load_explicit(&<customTag5>x5</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag5>x6</customTag> = <customTag5>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
t_5 = t;
x5_5 = x5;
x6_5 = x6;
}

void *func_6() {
int t;
int x6;
int x7;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag6>t</customTag> = atomic_load_explicit(&<customTag6>x6</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag6>x7</customTag> = <customTag6>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
t_6 = t;
x6_6 = x6;
x7_6 = x7;
}

void *func_7() {
int x8;
int t;
int x7;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag7>t</customTag> = atomic_load_explicit(&<customTag7>x7</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag7>x8</customTag> = <customTag7>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
x8_7 = x8;
t_7 = t;
x7_7 = x7;
}

void *func_8() {
int x8;
int x9;
int t;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag8>t</customTag> = atomic_load_explicit(&<customTag8>x8</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag8>x9</customTag> = <customTag8>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
x8_8 = x8;
x9_8 = x9;
t_8 = t;
}

void *func_9() {
int x9;
int t;
int x10;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag9>t</customTag> = atomic_load_explicit(&<customTag9>x9</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag9>x10</customTag> = <customTag9>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
x9_9 = x9;
t_9 = t;
x10_9 = x10;
}

void *func_10() {
int t;
int x10;
int x11;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag10>t</customTag> = atomic_load_explicit(&<customTag10>x10</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag10>x11</customTag> = <customTag10>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
t_10 = t;
x10_10 = x10;
x11_10 = x11;
}

void *func_11() {
int t;
int x12;
int x11;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag11>t</customTag> = atomic_load_explicit(&<customTag11>x11</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag11>x12</customTag> = <customTag11>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
t_11 = t;
x12_11 = x12;
x11_11 = x11;
}

void *func_12() {
int t;
int x12;
int x13;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag12>t</customTag> = atomic_load_explicit(&<customTag12>x12</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag12>x13</customTag> = <customTag12>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
t_12 = t;
x12_12 = x12;
x13_12 = x13;
}

void *func_13() {
int t;
int x14;
int x13;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag13>t</customTag> = atomic_load_explicit(&<customTag13>x13</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag13>x14</customTag> = <customTag13>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
t_13 = t;
x14_13 = x14;
x13_13 = x13;
}

void *func_14() {
int t;
int x14;
int x15;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag14>t</customTag> = atomic_load_explicit(&<customTag14>x14</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag14>x15</customTag> = <customTag14>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
t_14 = t;
x14_14 = x14;
x15_14 = x15;
}

void *func_15() {
int t;
int x16;
int x15;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag15>t</customTag> = atomic_load_explicit(&<customTag15>x15</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag15>x16</customTag> = <customTag15>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
t_15 = t;
x16_15 = x16;
x15_15 = x15;
}

void *func_16() {
int t;
int x16;
int x17;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag16>t</customTag> = atomic_load_explicit(&<customTag16>x16</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag16>x17</customTag> = <customTag16>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
t_16 = t;
x16_16 = x16;
x17_16 = x17;
}

void *func_17() {
int t;
int x18;
int x17;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag17>t</customTag> = atomic_load_explicit(&<customTag17>x17</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag17>x18</customTag> = <customTag17>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
t_17 = t;
x18_17 = x18;
x17_17 = x17;
}

void *func_18() {
int x19;
int t;
int x18;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag18>t</customTag> = atomic_load_explicit(&<customTag18>x18</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag18>x19</customTag> = <customTag18>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
x19_18 = x19;
t_18 = t;
x18_18 = x18;
}

void *func_19() {
int x19;
int t;
int x20;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag19>t</customTag> = atomic_load_explicit(&<customTag19>x19</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag19>x20</customTag> = <customTag19>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
x19_19 = x19;
t_19 = t;
x20_19 = x20;
}

void *func_20() {
int t;
int x21;
int x20;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag20>t</customTag> = atomic_load_explicit(&<customTag20>x20</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag20>x21</customTag> = <customTag20>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
t_20 = t;
x21_20 = x21;
x20_20 = x20;
}

void *func_21() {
int t;
int x21;
int x22;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag21>t</customTag> = atomic_load_explicit(&<customTag21>x21</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag21>x22</customTag> = <customTag21>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
t_21 = t;
x21_21 = x21;
x22_21 = x22;
}

void *func_22() {
int t;
int x23;
int x22;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag22>t</customTag> = atomic_load_explicit(&<customTag22>x22</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag22>x23</customTag> = <customTag22>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
t_22 = t;
x23_22 = x23;
x22_22 = x22;
}

void *func_23() {
int t;
int x23;
int x24;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag23>t</customTag> = atomic_load_explicit(&<customTag23>x23</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag23>x24</customTag> = <customTag23>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
t_23 = t;
x23_23 = x23;
x24_23 = x24;
}

void *func_24() {
int t;
int x25;
int x24;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag24>t</customTag> = atomic_load_explicit(&<customTag24>x24</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag24>x25</customTag> = <customTag24>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
t_24 = t;
x25_24 = x25;
x24_24 = x24;
}

void *func_25() {
int t;
int x25;
int x26;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag25>t</customTag> = atomic_load_explicit(&<customTag25>x25</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag25>x26</customTag> = <customTag25>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
t_25 = t;
x25_25 = x25;
x26_25 = x26;
}

void *func_26() {
int t;
int x27;
int x26;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag26>t</customTag> = atomic_load_explicit(&<customTag26>x26</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag26>x27</customTag> = <customTag26>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
t_26 = t;
x27_26 = x27;
x26_26 = x26;
}

void *func_27() {
int t;
int x27;
int x28;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag27>t</customTag> = atomic_load_explicit(&<customTag27>x27</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag27>x28</customTag> = <customTag27>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
t_27 = t;
x27_27 = x27;
x28_27 = x28;
}

void *func_28() {
int t;
int x29;
int x28;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag28>t</customTag> = atomic_load_explicit(&<customTag28>x28</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag28>x29</customTag> = <customTag28>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
t_28 = t;
x29_28 = x29;
x28_28 = x28;
}

void *func_29() {
int x30;
int t;
int x29;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag29>t</customTag> = atomic_load_explicit(&<customTag29>x29</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag29>x30</customTag> = <customTag29>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
x30_29 = x30;
t_29 = t;
x29_29 = x29;
}

void *func_30() {
int x30;
int t;
int x31;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag30>t</customTag> = atomic_load_explicit(&<customTag30>x30</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag30>x31</customTag> = <customTag30>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
x30_30 = x30;
t_30 = t;
x31_30 = x31;
}

void *func_31() {
int t;
int x32;
int x31;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag31>t</customTag> = atomic_load_explicit(&<customTag31>x31</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag31>x32</customTag> = <customTag31>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
t_31 = t;
x32_31 = x32;
x31_31 = x31;
}

void *func_32() {
int t;
int x32;
int x33;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag32>t</customTag> = atomic_load_explicit(&<customTag32>x32</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag32>x33</customTag> = <customTag32>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
t_32 = t;
x32_32 = x32;
x33_32 = x33;
}

void *func_33() {
int t;
int x34;
int x33;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag33>t</customTag> = atomic_load_explicit(&<customTag33>x33</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag33>x34</customTag> = <customTag33>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
t_33 = t;
x34_33 = x34;
x33_33 = x33;
}

void *func_34() {
int t;
int x34;
int x35;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag34>t</customTag> = atomic_load_explicit(&<customTag34>x34</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag34>x35</customTag> = <customTag34>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
t_34 = t;
x34_34 = x34;
x35_34 = x35;
}

void *func_35() {
int t;
int x36;
int x35;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag35>t</customTag> = atomic_load_explicit(&<customTag35>x35</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag35>x36</customTag> = <customTag35>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
t_35 = t;
x36_35 = x36;
x35_35 = x35;
}

void *func_36() {
int t;
int x36;
int x37;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag36>t</customTag> = atomic_load_explicit(&<customTag36>x36</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag36>x37</customTag> = <customTag36>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
t_36 = t;
x36_36 = x36;
x37_36 = x37;
}

void *func_37() {
int t;
int x38;
int x37;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag37>t</customTag> = atomic_load_explicit(&<customTag37>x37</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag37>x38</customTag> = <customTag37>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
t_37 = t;
x38_37 = x38;
x37_37 = x37;
}

void *func_38() {
int t;
int x38;
int x39;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag38>t</customTag> = atomic_load_explicit(&<customTag38>x38</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag38>x39</customTag> = <customTag38>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
t_38 = t;
x38_38 = x38;
x39_38 = x39;
}

void *func_39() {
int t;
int x40;
int x39;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag39>t</customTag> = atomic_load_explicit(&<customTag39>x39</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag39>x40</customTag> = <customTag39>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
t_39 = t;
x40_39 = x40;
x39_39 = x39;
}

void *func_40() {
int x41;
int t;
int x40;
//event.Skip

/*§Skip§*/
/*§Skip§*/
<customTag40>t</customTag> = atomic_load_explicit(&<customTag40>x40</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag40>x41</customTag> = <customTag40>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
x41_40 = x41;
t_40 = t;
x40_40 = x40;
}

int main() {
atomic_init(&mem0, 1); //event.Init, 1);
atomic_init(&mem1, 0); //event.Init, 0);
atomic_init(&mem2, 0); //event.Init, 0);
atomic_init(&mem3, 0); //event.Init, 0);
atomic_init(&mem4, 0); //event.Init, 0);
atomic_init(&mem5, 0); //event.Init, 0);
atomic_init(&mem6, 0); //event.Init, 0);
atomic_init(&mem7, 0); //event.Init, 0);
atomic_init(&mem8, 0); //event.Init, 0);
atomic_init(&mem9, 0); //event.Init, 0);
atomic_init(&mem10, 0); //event.Init, 0);
atomic_init(&mem11, 0); //event.Init, 0);
atomic_init(&mem12, 0); //event.Init, 0);
atomic_init(&mem13, 0); //event.Init, 0);
atomic_init(&mem14, 0); //event.Init, 0);
atomic_init(&mem15, 0); //event.Init, 0);
atomic_init(&mem16, 0); //event.Init, 0);
atomic_init(&mem17, 0); //event.Init, 0);
atomic_init(&mem18, 0); //event.Init, 0);
atomic_init(&mem19, 0); //event.Init, 0);
atomic_init(&mem20, 0); //event.Init, 0);
atomic_init(&mem21, 0); //event.Init, 0);
atomic_init(&mem22, 0); //event.Init, 0);
atomic_init(&mem23, 0); //event.Init, 0);
atomic_init(&mem24, 0); //event.Init, 0);
atomic_init(&mem25, 0); //event.Init, 0);
atomic_init(&mem26, 0); //event.Init, 0);
atomic_init(&mem27, 0); //event.Init, 0);
atomic_init(&mem28, 0); //event.Init, 0);
atomic_init(&mem29, 0); //event.Init, 0);
atomic_init(&mem30, 0); //event.Init, 0);
atomic_init(&mem31, 0); //event.Init, 0);
atomic_init(&mem32, 0); //event.Init, 0);
atomic_init(&mem33, 0); //event.Init, 0);
atomic_init(&mem34, 0); //event.Init, 0);
atomic_init(&mem35, 0); //event.Init, 0);
atomic_init(&mem36, 0); //event.Init, 0);
atomic_init(&mem37, 0); //event.Init, 0);
atomic_init(&mem38, 0); //event.Init, 0);
atomic_init(&mem39, 0); //event.Init, 0);
atomic_init(&mem40, 0); //event.Init, 0);
atomic_init(&mem41, 0); //event.Init, 0);
atomic_init(&mem42, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_t thread_2;
pthread_create(&thread_2, NULL, &func_2, NULL);
pthread_t thread_3;
pthread_create(&thread_3, NULL, &func_3, NULL);
pthread_t thread_4;
pthread_create(&thread_4, NULL, &func_4, NULL);
pthread_t thread_5;
pthread_create(&thread_5, NULL, &func_5, NULL);
pthread_t thread_6;
pthread_create(&thread_6, NULL, &func_6, NULL);
pthread_t thread_7;
pthread_create(&thread_7, NULL, &func_7, NULL);
pthread_t thread_8;
pthread_create(&thread_8, NULL, &func_8, NULL);
pthread_t thread_9;
pthread_create(&thread_9, NULL, &func_9, NULL);
pthread_t thread_10;
pthread_create(&thread_10, NULL, &func_10, NULL);
pthread_t thread_11;
pthread_create(&thread_11, NULL, &func_11, NULL);
pthread_t thread_12;
pthread_create(&thread_12, NULL, &func_12, NULL);
pthread_t thread_13;
pthread_create(&thread_13, NULL, &func_13, NULL);
pthread_t thread_14;
pthread_create(&thread_14, NULL, &func_14, NULL);
pthread_t thread_15;
pthread_create(&thread_15, NULL, &func_15, NULL);
pthread_t thread_16;
pthread_create(&thread_16, NULL, &func_16, NULL);
pthread_t thread_17;
pthread_create(&thread_17, NULL, &func_17, NULL);
pthread_t thread_18;
pthread_create(&thread_18, NULL, &func_18, NULL);
pthread_t thread_19;
pthread_create(&thread_19, NULL, &func_19, NULL);
pthread_t thread_20;
pthread_create(&thread_20, NULL, &func_20, NULL);
pthread_t thread_21;
pthread_create(&thread_21, NULL, &func_21, NULL);
pthread_t thread_22;
pthread_create(&thread_22, NULL, &func_22, NULL);
pthread_t thread_23;
pthread_create(&thread_23, NULL, &func_23, NULL);
pthread_t thread_24;
pthread_create(&thread_24, NULL, &func_24, NULL);
pthread_t thread_25;
pthread_create(&thread_25, NULL, &func_25, NULL);
pthread_t thread_26;
pthread_create(&thread_26, NULL, &func_26, NULL);
pthread_t thread_27;
pthread_create(&thread_27, NULL, &func_27, NULL);
pthread_t thread_28;
pthread_create(&thread_28, NULL, &func_28, NULL);
pthread_t thread_29;
pthread_create(&thread_29, NULL, &func_29, NULL);
pthread_t thread_30;
pthread_create(&thread_30, NULL, &func_30, NULL);
pthread_t thread_31;
pthread_create(&thread_31, NULL, &func_31, NULL);
pthread_t thread_32;
pthread_create(&thread_32, NULL, &func_32, NULL);
pthread_t thread_33;
pthread_create(&thread_33, NULL, &func_33, NULL);
pthread_t thread_34;
pthread_create(&thread_34, NULL, &func_34, NULL);
pthread_t thread_35;
pthread_create(&thread_35, NULL, &func_35, NULL);
pthread_t thread_36;
pthread_create(&thread_36, NULL, &func_36, NULL);
pthread_t thread_37;
pthread_create(&thread_37, NULL, &func_37, NULL);
pthread_t thread_38;
pthread_create(&thread_38, NULL, &func_38, NULL);
pthread_t thread_39;
pthread_create(&thread_39, NULL, &func_39, NULL);
pthread_t thread_40;
pthread_create(&thread_40, NULL, &func_40, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
pthread_join(thread_2, NULL);
pthread_join(thread_3, NULL);
pthread_join(thread_4, NULL);
pthread_join(thread_5, NULL);
pthread_join(thread_6, NULL);
pthread_join(thread_7, NULL);
pthread_join(thread_8, NULL);
pthread_join(thread_9, NULL);
pthread_join(thread_10, NULL);
pthread_join(thread_11, NULL);
pthread_join(thread_12, NULL);
pthread_join(thread_13, NULL);
pthread_join(thread_14, NULL);
pthread_join(thread_15, NULL);
pthread_join(thread_16, NULL);
pthread_join(thread_17, NULL);
pthread_join(thread_18, NULL);
pthread_join(thread_19, NULL);
pthread_join(thread_20, NULL);
pthread_join(thread_21, NULL);
pthread_join(thread_22, NULL);
pthread_join(thread_23, NULL);
pthread_join(thread_24, NULL);
pthread_join(thread_25, NULL);
pthread_join(thread_26, NULL);
pthread_join(thread_27, NULL);
pthread_join(thread_28, NULL);
pthread_join(thread_29, NULL);
pthread_join(thread_30, NULL);
pthread_join(thread_31, NULL);
pthread_join(thread_32, NULL);
pthread_join(thread_33, NULL);
pthread_join(thread_34, NULL);
pthread_join(thread_35, NULL);
pthread_join(thread_36, NULL);
pthread_join(thread_37, NULL);
pthread_join(thread_38, NULL);
pthread_join(thread_39, NULL);
pthread_join(thread_40, NULL);
int x8 = atomic_load_explicit(&mem10, memory_order_relaxed);
int x9 = atomic_load_explicit(&mem11, memory_order_relaxed);
int x30 = atomic_load_explicit(&mem32, memory_order_relaxed);
int x10 = atomic_load_explicit(&mem12, memory_order_relaxed);
int x32 = atomic_load_explicit(&mem34, memory_order_relaxed);
int x31 = atomic_load_explicit(&mem33, memory_order_relaxed);
int x12 = atomic_load_explicit(&mem14, memory_order_relaxed);
int x34 = atomic_load_explicit(&mem36, memory_order_relaxed);
int x11 = atomic_load_explicit(&mem13, memory_order_relaxed);
int x33 = atomic_load_explicit(&mem35, memory_order_relaxed);
int x14 = atomic_load_explicit(&mem16, memory_order_relaxed);
int x36 = atomic_load_explicit(&mem38, memory_order_relaxed);
int x13 = atomic_load_explicit(&mem15, memory_order_relaxed);
int x35 = atomic_load_explicit(&mem37, memory_order_relaxed);
int x16 = atomic_load_explicit(&mem18, memory_order_relaxed);
int x38 = atomic_load_explicit(&mem40, memory_order_relaxed);
int x15 = atomic_load_explicit(&mem17, memory_order_relaxed);
int x37 = atomic_load_explicit(&mem39, memory_order_relaxed);
int x18 = atomic_load_explicit(&mem20, memory_order_relaxed);
int x17 = atomic_load_explicit(&mem19, memory_order_relaxed);
int x39 = atomic_load_explicit(&mem41, memory_order_relaxed);
int x19 = atomic_load_explicit(&mem21, memory_order_relaxed);
int x41 = atomic_load_explicit(&mem2, memory_order_relaxed);
int x40 = atomic_load_explicit(&mem42, memory_order_relaxed);
int x21 = atomic_load_explicit(&mem23, memory_order_relaxed);
int x20 = atomic_load_explicit(&mem22, memory_order_relaxed);
int x0 = atomic_load_explicit(&mem0, memory_order_relaxed);
int x23 = atomic_load_explicit(&mem25, memory_order_relaxed);
int x1 = atomic_load_explicit(&mem1, memory_order_relaxed);
int y = atomic_load_explicit(&mem3, memory_order_relaxed);
int x22 = atomic_load_explicit(&mem24, memory_order_relaxed);
int x2 = atomic_load_explicit(&mem4, memory_order_relaxed);
int x25 = atomic_load_explicit(&mem27, memory_order_relaxed);
int x3 = atomic_load_explicit(&mem5, memory_order_relaxed);
int x24 = atomic_load_explicit(&mem26, memory_order_relaxed);
int x4 = atomic_load_explicit(&mem6, memory_order_relaxed);
int x27 = atomic_load_explicit(&mem29, memory_order_relaxed);
int x5 = atomic_load_explicit(&mem7, memory_order_relaxed);
int x26 = atomic_load_explicit(&mem28, memory_order_relaxed);
int x6 = atomic_load_explicit(&mem8, memory_order_relaxed);
int x29 = atomic_load_explicit(&mem31, memory_order_relaxed);
int x7 = atomic_load_explicit(&mem9, memory_order_relaxed);
int x28 = atomic_load_explicit(&mem30, memory_order_relaxed);
assert((y == 1));
return 0;
}


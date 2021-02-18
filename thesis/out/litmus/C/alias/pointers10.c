#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int p_0;
int t_0;
int x0_0;
int x1_0;
int x11_0;
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
void *func_0() {
int p;
int t;
int x0;
int x1;
int x11;
int y;
//event.Skip

/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
/*§Skip§*/
<customTag0>p</customTag> = atomic_load_explicit(&<customTag0>x0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag0>x1</customTag> = <customTag0>p</customTag>;

<customTag0>t</customTag> = atomic_load_explicit(&<customTag0>x11</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag0>y</customTag> = <customTag0>t</customTag>;

atomic_thread_fence(memory_order_seq_cst);
p_0 = p;
t_0 = t;
x0_0 = x0;
x1_0 = x1;
x11_0 = x11;
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
int x8 = atomic_load_explicit(&mem10, memory_order_relaxed);
int x9 = atomic_load_explicit(&mem11, memory_order_relaxed);
int x10 = atomic_load_explicit(&mem12, memory_order_relaxed);
int x0 = atomic_load_explicit(&mem0, memory_order_relaxed);
int x1 = atomic_load_explicit(&mem1, memory_order_relaxed);
int x11 = atomic_load_explicit(&mem2, memory_order_relaxed);
int y = atomic_load_explicit(&mem3, memory_order_relaxed);
int x2 = atomic_load_explicit(&mem4, memory_order_relaxed);
int x3 = atomic_load_explicit(&mem5, memory_order_relaxed);
int x4 = atomic_load_explicit(&mem6, memory_order_relaxed);
int x5 = atomic_load_explicit(&mem7, memory_order_relaxed);
int x6 = atomic_load_explicit(&mem8, memory_order_relaxed);
int x7 = atomic_load_explicit(&mem9, memory_order_relaxed);
assert((y == 1));
return 0;
}


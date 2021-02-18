#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int DUMMY_REG_3490_0;
int x_0;
int r0_0;
atomic_int mem0/* Address */;
void *func_0() {
int DUMMY_REG_3490;
int x;
int r0;
//event.Skip

/*§Skip§*/
<customTag0>DUMMY_REG_3490</customTag> = atomic_load_explicit(&<customTag0>x</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

<customTag0>r0</customTag> = (5 + <customTag0>DUMMY_REG_3490</customTag>) /* IEXPRBIN */;//event.Local

atomic_thread_fence(memory_order_seq_cst);
DUMMY_REG_3490_0 = DUMMY_REG_3490;
x_0 = x;
r0_0 = r0;
}

int main() {
atomic_init(&mem0, 1); //event.Init, 1);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_join(thread_0, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
assert(!((<customAssertionTag0>r0</customAssertionTag> == 6)));
return 0;
}


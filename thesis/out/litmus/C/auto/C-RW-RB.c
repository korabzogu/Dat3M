#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int x0_0;
int r1_0;
atomic_int mem0/* Address */;
void *func_0() {
int x0;
int r1;
//event.Skip

/*§Skip§*/
__VERIFIER_HARDWARE(NULL);
<customTag0>r1</customTag> = atomic_load_explicit(&<customTag0>x0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

__VERIFIER_HARDWARE(NULL);
<customTag0>x0</customTag> = 1;

__VERIFIER_HARDWARE(NULL);
atomic_thread_fence(memory_order_seq_cst);
x0_0 = x0;
r1_0 = r1;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_join(thread_0, NULL);
int x0 = atomic_load_explicit(&mem0, memory_order_relaxed);
assert((<customAssertionTag0>r1</customAssertionTag> == 1));
return 0;
}


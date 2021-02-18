#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int r2_0;
int x0_0;
atomic_int mem0/* Address */;
void *func_0() {
int r2;
int x0;
//event.Skip

/*§Skip§*/
<customTag0>x0</customTag> = 2;

__VERIFIER_HARDWARE(NULL);
<customTag0>r2</customTag> = atomic_load_explicit(&<customTag0>x0</customTag>/*com.dat3m.dartagnan.program.Register*/, memory_order_seq_cst /* TODO use macro WRITE_ONCE*/);//event.Load

atomic_thread_fence(memory_order_seq_cst);
r2_0 = r2;
x0_0 = x0;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_join(thread_0, NULL);
int x0 = atomic_load_explicit(&mem0, memory_order_relaxed);
assert((<customAssertionTag0>r2</customAssertionTag> == 0));
return 0;
}


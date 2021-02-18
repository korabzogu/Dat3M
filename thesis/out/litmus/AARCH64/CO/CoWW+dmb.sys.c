#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int X0_0;
int X1_0;
int X2_0;
atomic_int mem0/* Address */;
void *func_0() {
int X0;
int X2;
//event.Skip

/*§Skip§*/
X0 = 1;//event.Local

mem0/* Address */ = X0;

// TODO: atomic_thread_fence(memory_order_release); DMB event.FenceOpt

X2 = 2;//event.Local

mem0/* Address */ = X2;

atomic_thread_fence(memory_order_seq_cst);
X0_0 = X0;
X2_0 = X2;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_join(thread_0, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
assert(!((x == 2)));
return 0;
}


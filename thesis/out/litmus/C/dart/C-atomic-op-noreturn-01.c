#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int x_0;
int DUMMY_REG_3488_0;
int x_1;
int DUMMY_REG_3489_1;
atomic_int mem0/* Address */;
void *func_0() {
int x;
int DUMMY_REG_3488;
//event.Skip

/*§Skip§*/
atomic_fetch_add(DUMMY_REG_3488,1);

atomic_thread_fence(memory_order_seq_cst);
x_0 = x;
DUMMY_REG_3488_0 = DUMMY_REG_3488;
}

void *func_1() {
int x;
int DUMMY_REG_3489;
//event.Skip

/*§Skip§*/
atomic_fetch_add(DUMMY_REG_3489,1);

atomic_thread_fence(memory_order_seq_cst);
x_1 = x;
DUMMY_REG_3489_1 = DUMMY_REG_3489;
}

int main() {
atomic_init(&mem0, 0); //event.Init, 0);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
assert((x != 2));
return 0;
}


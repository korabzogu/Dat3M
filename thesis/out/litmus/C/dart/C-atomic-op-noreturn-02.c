#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int DUMMY_REG_3493_0;
int x_0;
int DUMMY_REG_3494_1;
int x_1;
atomic_int mem0/* Address */;
void *func_0() {
int DUMMY_REG_3493;
int x;
//event.Skip

/*§Skip§*/
atomic_fetch_sub(DUMMY_REG_3493,1);

atomic_thread_fence(memory_order_seq_cst);
DUMMY_REG_3493_0 = DUMMY_REG_3493;
x_0 = x;
}

void *func_1() {
int DUMMY_REG_3494;
int x;
//event.Skip

/*§Skip§*/
atomic_fetch_sub(DUMMY_REG_3494,1);

atomic_thread_fence(memory_order_seq_cst);
DUMMY_REG_3494_1 = DUMMY_REG_3494;
x_1 = x;
}

int main() {
atomic_init(&mem0, 2); //event.Init, 2);
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_t thread_1;
pthread_create(&thread_1, NULL, &func_1, NULL);
pthread_join(thread_0, NULL);
pthread_join(thread_1, NULL);
int x = atomic_load_explicit(&mem0, memory_order_relaxed);
assert((x != 0));
return 0;
}


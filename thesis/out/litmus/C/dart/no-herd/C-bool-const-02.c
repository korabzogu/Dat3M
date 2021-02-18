#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdatomic.h>

extern void __VERIFIER_HARDWARE(char * str);
int r0_0;
void *func_0() {
int r0;
//event.Skip

r0 = 0;//event.Local

if(false/* BConst */) {
r0 = 1;//event.Local

} else {}

r0 = 1;//event.Local

//event.Skip

//event.Skip

atomic_thread_fence(memory_order_seq_cst);
r0_0 = r0;
}

int main() {
pthread_t thread_0;
pthread_create(&thread_0, NULL, &func_0, NULL);
pthread_join(thread_0, NULL);
assert(!((r0_0 == 0)));
return 0;
}


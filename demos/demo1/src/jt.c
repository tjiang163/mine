#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/types.h>

extern void *thread1_run(void *arg);
extern void *thread2_run(void *arg);

int main()
{
	pthread_t t1, t2;
	pthread_create(&t1, NULL, &thread1_run, NULL);

	pthread_create(&t2, NULL, &thread2_run, NULL);
	void *ret1 = NULL;
	void *ret2 = NULL;
	pthread_join(t1, &ret1);

	pthread_join(t2, &ret2);

	printf("ret1 is %d\n", ret1);

	printf("ret2 is %d\n", ret2);

	return 0;
}

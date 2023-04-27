#include <stdio.h>
#include <pthread.h>

void *thread2_run(void *arg)
{
	printf("thread 2 is running ... pid:%d,tid:%u\n", getpid(), pthread_self);
	pthread_exit((void *)1);
}

#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <string.h>

void *thread1_run(void *arg)
{
	printf("thread 1 is running ... pid:%d,tid:%u\n", getpid(), pthread_self);
	pthread_exit((void *)1);
}

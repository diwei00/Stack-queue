#include "Queue.h"
int main()
{
	Queue s;

	QueueInit(&s);
	QueuePush(&s, 2);
	QueuePush(&s, 3);
	QueuePush(&s, 4);
	QueuePush(&s, 5);
	QueuePush(&s, 6);
	QueuePush(&s, 7);
	QueuePush(&s, 8);
	QueuePush(&s, 9);
	QueuePush(&s, 10);
	QueuePush(&s, 11);
	QueuePush(&s, 12);
	while (!QueueEmpty(&s))
	{
		printf("%d ", QueueFirst(&s));
		QueuePop(&s);
	}
	printf("*****%d", QueueSize(&s));
	/*QueueFirst(&s);
	QueueBack(&s);*/
	
	QueueDestroy(&s);
	return 0;
}
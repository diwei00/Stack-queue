#include "Queue.h"
void QueueInit(Queue* ps)
{
	
	ps->head = NULL;
	ps->tail = NULL;
}
void QueuePush(Queue* ps, QDateType val)
{
	assert(ps);
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode != NULL)
	{
		newnode->date = val;
		newnode->next = NULL;
	}
	if (ps->head == NULL)
	{
		ps->head = ps->tail = newnode;
	}
	else
	{
		ps->tail->next = newnode;
		ps->tail = newnode;
	}
	
	
	
}
void QueuePop(Queue* ps)
{
	assert(ps);
	assert(ps->head);
	if (ps->head->next == NULL)
	{
		free(ps->head);
		ps->head = ps->tail = NULL;
	}
	else
	{
		QNode* next = ps->head->next;
		free(ps->head);
		ps->head = next;
	}

}
int QueueSize(Queue* ps)
{
	int count = 0;
	QNode* cur = ps->head;
	while (cur)
	{
		count++;
		cur = cur->next;
	}
	return count;

}
QDateType QueueFirst(Queue* ps)
{
	assert(ps);
	assert(ps->head);
	return ps->head->date;
}
int QueueBack(Queue* ps)
{
	assert(ps);
	assert(ps->head);
	return ps->tail->date;
}
bool QueueEmpty(Queue* ps)
{
	assert(ps);
	return ps->head == NULL;
}
void QueueDestroy(Queue* ps)
{
	assert(ps);
	QNode* cur = ps->head;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
		
	}
	ps->head = ps->tail = NULL;
}
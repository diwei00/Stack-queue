#include "stack.h"
int main()
{
	Stack s;
	StactInit(&s);
	StackPush(&s, 2);
	StackPush(&s, 3);
	StackPush(&s, 4);
	StackPush(&s, 5);
	StackPush(&s, 6);
	StackPush(&s, 7);
	StackPush(&s, 8);
	StackPush(&s, 9);
	StackPush(&s, 10);
	StackPush(&s, 11);
	StackPush(&s, 12);
	StackPush(&s, 13);
	while (!StackEmpty(&s))
	{
		printf("%d ", StackTop(&s));
		StackPop(&s);
	}

	printf("*****%d", StackSize(&s));

	/*StackPop(&s);
	StackTail(&s);
	
	StackEmpty(&s);*/
	StackDestroy(&s);
	return 0;
}
#include "stack.h"

void StactInit(Stack* ps)
{
	assert(ps);
	ps->arr = (StaDateType*)malloc(4*sizeof(StaDateType));
	if (ps->arr != NULL)
	{
		ps->capicity = 4;
		ps->top = 0;
	}
	
}
void StackPush(Stack* ps, StaDateType date)
{
	assert(ps);
	if (ps->top == ps->capicity)
	{
		StaDateType* pa = (StaDateType*)realloc(ps->arr, ps->capicity * 2 * sizeof(StaDateType));
		if (pa != NULL)
		{
			ps->arr = pa;
			ps->capicity *= 2;
		}
	}
	ps->arr[ps->top] = date;
	ps->top++;
}
void StackPop(Stack* ps)
{
	assert(ps);
	assert(ps->top > 0);
	ps->top--;
}
StaDateType StackTop(Stack* ps)
{
	assert(ps);
	assert(ps->top > 0);
	return ps->arr[ps->top - 1];
}
int StackSize(Stack* ps)
{
	assert(ps);
	return ps->top;
}
bool StackEmpty(Stack* ps)
{
	assert(ps);
	return ps->top == 0;

}
void StackDestroy(Stack* ps)
{
	assert(ps);
	free(ps->arr);
	ps->top = 0;
	ps->arr = NULL;
}
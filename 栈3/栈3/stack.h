typedef int StaDateType;
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
typedef struct stack
{
	StaDateType* arr;
	int top;
	int capicity;
}Stack;

void StactInit(Stack* ps);
void StackPush(Stack* ps, int date);
void StackPop(Stack* ps);
StaDateType StackTop(Stack* ps);
int StackSize(Stack* ps);
bool StackEmpty(Stack* ps);
void StackDestroy(Stack* ps);
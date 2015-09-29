#include "Stack.h"
#include <stdio.h>

void
Push(ElementType X, Stack S)
{
	if(IsFull(S))
		printf("Stack is Full!!!");
	else
		S->Array[++S->TopOfStack]=X;
}

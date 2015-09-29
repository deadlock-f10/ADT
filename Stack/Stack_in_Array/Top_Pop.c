#include "Stack.h"
#include <stdio.h>

ElementType 
Top(Stack S)
{
	if(!IsEmpty(S))
	return S->Array[S->TopOfStack];
	printf("Empty Stack");
	return 0;
}
void Pop(Stack S)
{
	if(IsEmpty(S))
	{
		printf("Empty Stack");
		return ;
	}
	else
	S->TopOfStack--;
}
ElementType
TopAndPop(Stack S)
{
	if(!IsEmpty(S))
	{
		ElementType Tmp;
		Tmp=Top(S);
		Pop(S);
		return Tmp;
	}
	printf("Empty Stack");
	return 0;
}

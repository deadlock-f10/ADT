#include "Stack.h"
#include <stdio.h>
#include <stdlib.h>

ElementType Top(Stack S)
{
	if(!IsEmpty_S(S))
		return S->Next->Element;
	else 
		printf("Empty Stack");
	return 0;
}

void Pop(Stack S)
{
	PtrToNode_S Tmp;
	if(IsEmpty_S(S))
		return ;
	else
	{
		Tmp=S->Next;
		S->Next=S->Next->Next;
		free(Tmp);
	}
}

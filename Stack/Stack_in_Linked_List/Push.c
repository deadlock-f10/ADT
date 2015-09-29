#include "Stack.h"
#include <stdio.h>
#include <stdlib.h>

void Push(ElementType X, Stack S)
{
	PtrToNode_S Tmp;
	Tmp=malloc(sizeof(struct S_Node));
	if(Tmp==NULL)
		printf("Out Of Space!!!");
	else
	{
		Tmp->Element=X;
		Tmp->Next=S->Next;
		S->Next=Tmp;
	}
}

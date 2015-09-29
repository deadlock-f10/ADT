#include "Stack.h"
#include <stdio.h>
#include <stdlib.h>
Stack
CreateStack(int MaxElements)
{
	Stack S;
	if(MaxElements < MinStackSize)
		printf("Stack Size is too small!!!");
	S=malloc(sizeof(struct StackRecond));
	if(S==NULL)
		printf("Out Of Space!!!");
	S->Capacity=MaxElements;
	MakeEmpty(S);
	S->Array=malloc(sizeof(ElementType)*MaxElements);
	if(S->Array==NULL)
		printf("Out Of Space!!!");
	return S;
}

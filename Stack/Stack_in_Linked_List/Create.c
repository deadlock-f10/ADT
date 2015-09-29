#include "Stack.h"
#include <stdio.h>
#include <stdlib.h>

Stack 
CreateStack(void)
{
	Stack S;
	S=malloc(sizeof(struct S_Node));
	if(S==NULL)
		printf("Out Of Space!!!");
	MakeEmpty(S);
	return S;
}

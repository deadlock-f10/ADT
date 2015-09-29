#include "Stack.h"
#include <stdlib.h>
#include <stdio.h>

void MakeEmpty(Stack S)
{
	if(S==NULL)
		printf("Must use CreateStack first");
	else
		while(!IsEmpty_S(S))
			Pop(S);
}

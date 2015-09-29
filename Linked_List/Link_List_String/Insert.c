#include "List.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Insert(ElementType X, List L,Position P)
{
	Position Tmp;

	Tmp=malloc(sizeof(struct Node));
	if(Tmp==NULL)
		printf("Out Of Space!!!");
	
	strcpy(Tmp->Element,X);
	Tmp->Next=P->Next;
	P->Next=Tmp;
}

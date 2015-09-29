#include "List.h"
#include <stdio.h>
#include <string.h>
Position
Find(ElementType X,List L)           
{
	Position P;

	P=L->Next;
	while(P!=NULL && strcmp(P->Element,X)!=0)
		P=P->Next;
	return P;
}
Position 
FindPrevious(ElementType X,List L)
{
	Position P;
	P=L;
	while(P->Next!=NULL && strcmp(P->Element,X)!=0)
		P=P->Next;
	return P;
}

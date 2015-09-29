#include "List.h"
#include <stdio.h>

Position
Find(ElementType X,List L)           
{
	Position P;

	P=L->Next;
	while(P!=NULL && P->Element!=X)
		P=P->Next;
	return P;
}
Position 
FindPrevious(ElementType X,List L)
{
	Position P;
	P=L;
	while(P->Next!=NULL && P->Next->Element!=X)
		P=P->Next;
	return P;
}

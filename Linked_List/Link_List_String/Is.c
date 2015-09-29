#include "List.h"
#include <stdio.h>
int IsEmpty(List L)
{
	return L->Next==NULL;
}
int IsLast(Position P,List L)
{
	return P->Next==NULL;
}
	

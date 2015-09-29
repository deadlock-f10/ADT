#include "List.h"
#include <stdio.h>
#include <stdlib.h>
List MakeEmpty(List L)
{
	List Tmp;
	while(L->Next!=NULL)
	{
		Tmp=L->Next;
		L->Next=L->Next->Next;
		free(Tmp);
	}
	return L;
}

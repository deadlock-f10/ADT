#include "List.h"
#include <stdlib.h>
void 
Delete(ElementType X,List L)
{
	Position Tmp,P;
	
	P=FindPrevious(X,L);
	if(!IsLast(P,L))
	{
		Tmp=P->Next;
		P->Next=P->Next->Next;
		free(Tmp);
	}
	
}

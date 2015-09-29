#include "List.h"
#include <stdlib.h>
void 
DeleteList(List L)
{
	L=MakeEmpty(L);
	free(L);
}

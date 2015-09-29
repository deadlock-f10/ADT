#include "BinHeap.h"
#include <stdlib.h>
#include <stdio.h>
void Destroy(PriorityQueue H)
{
	if(H!=NULL)
	{
		free(H->Elements);
		free(H);
	}
}

#include "BinHeap.h"
#include <stdio.h>
#define Parent(i) (i/2)
void 
Insert(ElementType X,PriorityQueue H)
{
	int i;
	if(IsFull(H))
	{
		printf("Can't perform Insertion since Heap is Full!!");
		return ;
	}
	for(i=++H->Size;i> 1 && X<H->Elements[Parent(i)];i=Parent(i))
		H->Elements[i]=H->Elements[Parent(i)];
	H->Elements[i]=X;	
}

#include "BinHeap.h"
#include <stdio.h>
#define LeftChild(i) (2*i)

ElementType
DeleteMin(PriorityQueue H)
{
	ElementType Min,Last;
	int i,Child;
	if(IsEmpty(H))
	{
		printf("Priority Queue is Empty");
		return 0;
	}
	Last=H->Elements[H->Size--];
	Min=H->Elements[1];
	for(i=1;LeftChild(i)<=H->Size  ;i=Child)
	{
		Child=LeftChild(i);
		if(Child+1<=H->Size && H->Elements[Child]>H->Elements[Child+1])
			Child++;
		if(H->Elements[Child]<Last)
			H->Elements[i]=H->Elements[Child];
		else 
			break;
	}
	H->Elements[i]=Last;
	return Min;
}

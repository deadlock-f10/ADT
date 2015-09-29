#include "BinHeap.h"
#include <stdio.h>
#include <stdlib.h>

PriorityQueue
Initialize(int MaxElements)
{
	PriorityQueue H;
	H=malloc(sizeof(struct HeapStruct));
	if(H==NULL)
		printf("Out Of Space!!!");
	else
	{
		H->Elements=malloc(sizeof(ElementType)*(MaxElements+1));
		if(H->Elements==NULL)
			printf("Out Of Space!!!");
		else
		{
			H->Capacity=MaxElements;
			H->Size=0;
		}
	}
	return H;
}

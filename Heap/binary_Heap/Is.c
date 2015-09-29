#include "BinHeap.h"

int IsEmpty(PriorityQueue H)
{
	return H->Size==0;
}

int IsFull(PriorityQueue H)
{
	return H->Size==H->Capacity;
}

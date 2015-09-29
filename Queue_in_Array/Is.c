#include "Queue.h"

int IsEmpty(Queue Q)
{
	return Q->Size==0;
}

int IsFull(Queue Q)
{
	return Q->Size==Q->Capacity;
}

#include "Queue.h"
#include <stdio.h>

extern int Succ(int Value , Queue Q);

ElementType Front(Queue Q)
{
	if(!IsEmpty(Q))
		return Q->Array[Q->Front];
	else
		printf("Can not Dequeue of Front when Queue is empty!!!");
		return 0;
}

void Dequeue(Queue Q)
{
	if(!IsEmpty(Q))
	{
		Q->Front=Succ(Q->Front,Q);
		Q->Size--;
	}
	else
		printf("Can not Dequeue of Front when Queue is empty!!!");
}

ElementType FrontAndDequeue(Queue Q)
{
	ElementType Tmp;
	if(IsEmpty(Q))
		return 0;
	Tmp=Front(Q);
	Dequeue(Q);
	return Tmp;
}

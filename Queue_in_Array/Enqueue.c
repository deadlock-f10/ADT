#include "Queue.h"
#include <stdio.h>

int Succ(int Value,Queue Q)
{
	if(++Value==Q->Capacity)
		return 0;
	else
		return Value;
}

void Enqueue(ElementType X,Queue Q)
{
	if(IsFull(Q))
	{
		printf("Queue is Full!!!");
		return ;
	}
	else
	{
		Q->Rear=Succ(Q->Rear,Q);
		Q->Size++;
		Q->Array[Q->Rear]=X;
	}
}

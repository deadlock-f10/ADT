#include "Queue.h"
#include <stdio.h>
#include <stdlib.h>

Queue CreateQueue(int MaxElements)
{
	Queue Q;
	Q=malloc(sizeof(struct QueueRecord));
	if(Q==NULL)
		printf("Out of Space!!!");
	else
	{
		Q->Capacity=MaxElements;
		Q->Array=malloc(sizeof(ElementType)*MaxElements);
		if(Q->Array==NULL)
			printf("Out Of Space!!!");
		else
			MakeEmpty(Q);
	}
	return Q;
}

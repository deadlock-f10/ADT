#include "Queue.h"

void MakeEmpty(Queue Q)
{
	Q->Front=1;
	Q->Rear=0;
	Q->Size=0;
}

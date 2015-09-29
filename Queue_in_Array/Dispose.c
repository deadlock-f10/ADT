#include "Queue.h"
#include <stdlib.h>

void DisposeQueue(Queue Q)
{
	free(Q->Array);
	free(Q);
}

#include "Stack.h"
#include <stdlib.h>
void
DisposeStack(Stack S)
{
	if(S!=NULL)
	{
		free(S->Array);
		free(S);
	}
}

#include "Stack.h"
#include <stdlib.h>
void DisposeStack(Stack S)
{
	MakeEmpty(S);
	free(S);
}

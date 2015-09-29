#include "Tree.h"
#include <stdio.h>
#include <stdlib.h>
SearchTree
MakeEmpty(SearchTree T)
{
	if(T!=NULL)
	{
		MakeEmpty(T->Left);
		MakeEmpty(T->Right);
		free(T);
	}
	return T;
}

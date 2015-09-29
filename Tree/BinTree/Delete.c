#include "Tree.h"
#include <stdlib.h>
#include <stdio.h>

SearchTree Delete(ElementType X, SearchTree T)
{
	Position TmpCell;
	if(T==NULL)
		return NULL;
	else 
	{
		if(X < T->Element)
			T->Left=Delete(X,T->Left);
		else if(X > T->Element)
			T->Right=Delete(X,T->Right);
		else
		{
			if(T->Left && T->Right)
			{
				TmpCell=FindMin(T->Right);
				T->Element=TmpCell->Element;
				T->Right=Delete(T->Element,T->Right);
			}
			else
			{
				TmpCell=T;
				if(T->Left==NULL)
					T=T->Right;
				else if(T->Right==NULL)
					T=T->Left;
				free(TmpCell);
			}
		}
	}
	return T;

}


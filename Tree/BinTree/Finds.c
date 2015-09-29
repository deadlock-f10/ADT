#include "Tree.h"
#include <stdio.h>

Position
Find(ElementType X,SearchTree T)
{
	if(T==NULL)
		return T;                      //Finding failed
	else                               //probably need strcmp!!
	{
	    if(T->Element>X)
			return Find(X,T->Left);
	    else if(T->Element<X)                      
			return Find(X,T->Right);
        else
		    return T;
	}
}

Position
FindMin(SearchTree T)
{
	if(T==NULL)
		return NULL;
	while(T->Left!=NULL)
		T=T->Left;
	return T;
}

Position
FindMax(SearchTree T)
{	
	if(T==NULL)
		return NULL;
	while(T->Right!=NULL)
		T=T->Right;
	return T;
}

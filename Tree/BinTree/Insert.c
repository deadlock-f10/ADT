#include "Tree.h"
#include <stdlib.h>
#include <stdio.h>

Position 
MakeNode(ElementType X)
{
	Position Tmp;
	Tmp=malloc(sizeof(struct TreeNode));
	if(Tmp==NULL)
		printf("Out Of Space!!!");
	else
	{
		Tmp->Element=X;
		Tmp->Left=NULL;
		Tmp->Right=NULL;
	}
		return Tmp;
}

SearchTree 
Insert(ElementType X,SearchTree T)
{
	if(T==NULL)
		T=MakeNode(X);
	else
	{
		if(X < T->Element)
			T->Left=Insert(X,T->Left);
		else if(X > T->Element)
			T->Right=Insert(X,T->Right);
	}
	return T;
}

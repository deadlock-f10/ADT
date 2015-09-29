#include "AvlTree.h"
#include <stdlib.h>
#include <stdio.h>
#define Max(A,B) (A>B ? A : B)

static int                                                     //static 的作用是什么？－－－只在本文件中可見
Height(Position P)
{
        if (P==NULL)
                return -1;
        else
                return P->Height;
}


Position SingleRotationWithLeft(Position K2)
{
        Position K1;
        K1=K2->Left;
        K2->Left=K1->Right;
        K1->Right=K2;
        K2->Height=Max(Height(K2->Left),Height(K2->Right))+1;
        K1->Height=Max(Height(K1->Left),Height(K1->Right))+1;

        return K2;
}
Position SingleRotationWithRight(Position K2)
{
        Position K1;
        K1=K2->Right;
        K2->Right=K1->Left;
        K1->Left=K2;
        K2->Height=Max(Height(K2->Left),Height(K2->Right))+1;
        K1->Height=Max(Height(K1->Left),Height(K1->Right))+1;

        return K2;
}
Position
DoubleRotationWithRight(Position K3)
{
        K3->Left=SingleRotationWithRight(K3->Left);
        K3->Right=SingleRotationWithLeft(K3);
        return 0;
}
Position
DoubleRotationWithLeft(Position K3)
{
        K3->Right=SingleRotationWithLeft(K3->Right);
        K3->Left=SingleRotationWithRight(K3);
        return 0;
}

AvlTree Insert(ElementType X,AvlTree T)
{
	if(T==NULL)
	{
		T=malloc(sizeof(struct AvlNode));
		if(T==NULL)
			printf("Out of Space!!!");
		else
		{
			T->Element=X;
			T->Height=0;
			T->Left=T->Right=NULL;
		}
		
	}
	else if(T->Element < X)
	{
		T=Insert(X,T->Right);
		if(Height(T->Right)-Height(T->Left)==2)
		{
			if(X < T->Right->Element)
				T=DoubleRotationWithLeft(T);
			else
				T=SingleRotationWithLeft(T);
		}
	}
	else if(T->Element > X)
	{
		T=Insert(X,T->Left);
		if(Height(T->Left)-Height(T->Right)==2)
		{
			if(X > T->Left->Element)
				T=DoubleRotationWithRight(T);
			else
				T=SingleRotationWithRight(T);
		}
	}
	T->Height=Max(Height(T->Left),Height(T->Right))+1;
	return T;
}



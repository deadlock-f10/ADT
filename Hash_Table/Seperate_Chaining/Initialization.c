#include <stdio.h>
#include <stdlib.h>
#include "HashSep.h"

HashTable InitializeTable(int TableSize)
{
	if(TableSize < MinTableSize)
	{
		printf("Table size toooo small!!");
		return NULL;
	}

	H=malloc(sizeof(struct HashTb1));
	if(H==NULL)
	{
		printf("Out of Space!!!");
		return NULL;
	}

	H->TableSize=NextPrime(TableSize);                 //Why should we always use a prime number???
	
	H->TheLists=malloc(TableSize * sizeof(List))       // we need a point to the struct rather than this struct itself
	if(H->TheLists==NULL)
	{
		printf("Out of Space!!!");
		return NULL:
	}
	for(i=0;i<TableSize;i++)
	{
		H->TheLists[i]=malloc(sizeof(struct ListNode));
		if(H->TheLists[i]==NULL)
		{
			printf("Out of Space!!!");
			return NULL:
		}
		else 
			H->TheLists[i]->Next=NULL;
	}
}

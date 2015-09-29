#include "HashQuad.h"
#include <stdlib.h>
#include <stdio.h>
int NextPrime(int TableSize);
HashTable 
InitializeTable(int TableSize)
{
	HashTable H;
	int i;
	if(TableSize<MinTableSize)
	{
		printf("Table size too small!!!");
		return NULL;
	}

	H=malloc(sizeof(struct HashTb1));
	if(H==NULL)
	{
		printf("Out Of Space!!!");
		return NULL;
	}

	H->TableSize=NextPrime(TableSize);
	
	H->TheCells=malloc(sizeof(Cell)*(H->TableSize));
	if(H->TheCells==NULL)
		printf("Out Of Space!!!");
	for(i=0;i<H->TableSize;i++)
		H->TheCells[i].Info=Empty;
	return H;
}

#include "HashQuad.h"
#include <stdlib.h>
HashTable
Rehash(HashTable H)
{
	int i,OldSize;
	Cell *OldCells;

	OldCells = H->TheCells;
	OldSize=H->TableSize;

	H=InitializeTable(2*OldSize);
	for(i=0;i<OldSize;i++)
		if(OldCells[i].Info==Legitimate)
			Insert(OldCells[i].Name,OldCells[i].Element,H);
	free(OldCells);
	return H;
}

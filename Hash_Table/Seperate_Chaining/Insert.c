#include "HashSep.h"
#include <stdlib.h>

void Insert(ElementType Key , HashTable H)
{
	Position Pos, NewCell;
	List L;

	Pos=Find(Key,H);
	if(Pos==NULL)
	{
		NewCell = malloc(sizeof(struct ListNode));
		if(NewCell ==NULL)
		{
			printf("Out of Space!!!")
			return;
		}
		else
		{
			L=H->TheLists[Hash(Key,H->TableSize)];
			NewCell->Next=L->Next;
			L->Next=NewCell;
			NewCell->Element=Key;                  //Probably need strcpy
		}
	}
}

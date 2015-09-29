#include "HashQuad.h"
#include <string.h>
Position Find(char *Key, HashTable H)
{
	Position CurrentPos;
	int CollisionNum;

	CollisionNum = 0;
	CurrentPos=Hash(Key,H->TableSize);           //Name that are marked deleted count as in this table 
	while(H->TheCells[CurrentPos].Info!=Empty&&(strcmp(H->TheCells[CurrentPos].Name,Key)!=0))           //Probably need strcmp!!!
	{
		CurrentPos +=2 * ++CollisionNum-1;
		if(CurrentPos>=H->TableSize)
			CurrentPos-=H->TableSize;
	}
	return CurrentPos;
}

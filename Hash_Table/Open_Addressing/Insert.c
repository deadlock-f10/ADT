#include "HashQuad.h"
#include <string.h>
#include <stdlib.h>
void Insert(char *Key,ElementType Element,HashTable H)
{
	Position Pos;
	Pos=Find(Key,H);
	if(H->TheCells[Pos].Info!=Legitimate)
	{
		H->TheCells[Pos].Name=malloc(sizeof(char)*MaxNameLength);
		H->TheCells[Pos].Name=strcpy(H->TheCells[Pos].Name,Key);
		H->TheCells[Pos].Info=Legitimate;       //Probably need strcpy
		H->TheCells[Pos].Element=Element;
	}

}

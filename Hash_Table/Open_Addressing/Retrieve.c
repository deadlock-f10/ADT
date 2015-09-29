#include "HashQuad.h"
ElementType Retrieve(Position P, HashTable H)
{
	return H->TheCells[P].Element;
}

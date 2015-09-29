#include "List.h"

Position
Header(List L)
{
	return L;
}
Position
First(List L)
{
	return L->Next;
}
ElementType Retrieve(Position P)
{
	return P->Element;
}

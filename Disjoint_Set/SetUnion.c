#include "DisjSet.h"
void 
SetUnion(DisjSet S,SetType Root1,SetType Root2)             //Union-by-size
{
	if(S[Root2]<S[Root1])
	{
		S[Root1]=Root2;
		S[Root2]--;
	}
	else
	{
		S[Root1]--;
		S[Root2]=Root1;
	}
}

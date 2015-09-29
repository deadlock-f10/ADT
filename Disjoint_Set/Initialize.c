#include "DisjSet.h"
void 
Initialize(DisjSet S)
{
	int i;
	for(i=NumSets;i>0;i--)
		S[i]=-1;
}

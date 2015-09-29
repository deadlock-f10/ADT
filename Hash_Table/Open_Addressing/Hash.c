#include "HashQuad.h"
Index
Hash(const char *Key,int Tablesize)
{
	unsigned int HashVal=0;

	while(*Key!='\0')
		HashVal = (HashVal << 5)+ *Key++;

	return HashVal % Tablesize;
}

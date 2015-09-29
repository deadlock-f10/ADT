#ifndef _HashQuad_H

typedef unsigned int Index;
typedef Index Position;

struct HashTb1;
typedef struct HashTb1 *HashTable;
typedef int ElementType;                    //默认类型为int

HashTable InitializeTable(int TableSize);
void DestroyTable(HashTable H);
Position Find(char *Key, HashTable H);
void Insert(char *Key,ElementType Element,HashTable H);
ElementType Retrieve(Position P , HashTable H);
HashTable Rehash(HashTable H);
Position Hash(const char *Key,int TableSize);
/*Routines such as Delete and MakeEmpty are omitted */

#endif /* _HashQuad_H */

enum KindOfEntry{Legitimate,Empty,Deleted};                       //For more about enum .see C bible page 215

struct HashEntry
{
	char *Name;
	ElementType Element;
	enum KindOfEntry Info;
};

typedef struct HashEntry Cell;

struct HashTb1 
{
	int TableSize;
	Cell *TheCells;
};

#define MinTableSize 1
#define MaxNameLength 100

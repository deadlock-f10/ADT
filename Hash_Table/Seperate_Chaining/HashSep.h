#ifndef _HashSep_H

struct ListNode;
typedef struct ListNode *Position;
struct HashTb1;
typedef struct HashTb1 *HashTable;

HashTable InitializeTable(int TableSize);
void DestroyTable( HashTable H);
Position Find (ElementType Key , HashTable H);
ElementType Retrieve(Position P);

#endif  /* _HashSep_H */

#define MinTableSize 3
/* Place in a implementation file later */
struct ListNode
{
	ElementType Element;
	Position Next;
}
typedef Position List;

struct HashTb1
{
	int TableSize;
	List *TheLists;
}

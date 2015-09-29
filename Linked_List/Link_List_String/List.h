#ifndef _List_H

struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;
typedef char *ElementType;                         //   ElementType is string

List MakeEmpty(List L);
int IsEmpty(List L);
int IsLast(Position P, List L);
Position Find(ElementType X,List L);        // return NULL when X doesn't exist
void Delete(ElementType X, List L);
Position FindPrevious(ElementType X,List L);   //If X is not found ,then The Next Field of returned Position is NULL
void Insert(ElementType X, List L, Position P);    //P should be legal
void DeleteList(List L);
Position Header(List L);
Position First(List L);                   //return First Position of List 
ElementType Retrieve(Position P);

#endif        /*_List_H*/

struct Node{
	ElementType Element;
	Position Next;
};

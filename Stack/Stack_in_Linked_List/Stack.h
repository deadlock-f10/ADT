#ifndef _Stack_H

struct S_Node;
typedef struct S_Node *PtrToNode_S;
typedef PtrToNode_S Stack; 
typedef int ElementType;               //

int IsEmpty_S(Stack S);
Stack CreateStack(void);
void DisposeStack(Stack S);
void MakeEmpty(Stack S);
void Push(ElementType X,Stack S);
ElementType Top(Stack S);
void Pop(Stack S);

#endif

struct S_Node{
	ElementType Element;
	PtrToNode_S Next;
};

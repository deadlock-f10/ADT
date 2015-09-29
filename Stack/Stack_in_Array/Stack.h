#ifndef  _Stack_H

struct StackRecond;
typedef struct StackRecond *Stack;
typedef int ElementType;                   //
int IsEmpty(Stack S);
int IsFull(Stack S);
Stack CreateStack(int MaxElements);
void DisposeStack(Stack S);
void MakeEmpty(Stack S);
void Push(ElementType X, Stack S);
ElementType Top(Stack S);               //return 0 when Stack is Empty
void Pop(Stack S);
ElementType TopAndPop(Stack S);       //return 0 when Stack is Empty

#endif 

#define EmptyTOS (-1)
#define MinStackSize  (5)

struct StackRecond{
	int Capacity;
	int TopOfStack;
	ElementType *Array;
};

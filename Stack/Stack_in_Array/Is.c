#include "Stack.h"

int IsEmpty(Stack S)
{
	return S->TopOfStack==EmptyTOS; 
}
int IsFull(Stack S)
{
	return S->TopOfStack==S->Capacity-1;
}

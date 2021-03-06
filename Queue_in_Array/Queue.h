#ifndef    _Queue_H

struct QueueRecord;
typedef struct QueueRecord *Queue;
typedef int ElementType;                    //

int IsEmpty(Queue Q);
int IsFull(Queue Q);
Queue CreateQueue(int MaxElements);
void DisposeQueue(Queue Q);
void MakeEmpty(Queue Q);
void Enqueue(ElementType X,Queue Q); 
ElementType Front(Queue Q); //return 0 when Queue is empty
void Dequeue(Queue Q);
ElementType FrontAndDequeue(Queue Q); //return 0 when Queue is empty

#endif

#define MinQueueSize(S);

struct QueueRecord{
	int Capacity;
	int Front;
	int Rear;
	int Size;
	ElementType *Array;
};

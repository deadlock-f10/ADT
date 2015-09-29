#ifndef    _Tree_H

struct TreeNode;
typedef struct TreeNode *Position;
typedef struct TreeNode *SearchTree;
typedef int ElementType ;                    // if ElementType is char*      then we need strcmp and strcpy

SearchTree MakeEmpty(SearchTree T);
Position Find(ElementType X,SearchTree T);
Position FindMin(SearchTree T);
Position FindMax(SearchTree T);
SearchTree Insert(ElementType X,SearchTree T);      //if X is already exist , do nothing
SearchTree Delete(ElementType X,SearchTree T);
ElementType Retrieve(Position P);

#endif

struct TreeNode{
	ElementType Element;
	SearchTree Left;
	SearchTree Right;
};

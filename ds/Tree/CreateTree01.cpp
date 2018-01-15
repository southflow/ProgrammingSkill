#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int nVal;
	struct Node *pLeft;
	struct Node *pRight;
};

struct Node * CreateNode( int nVal )
{
    struct Node *pNew = (struct Node *) malloc (sizeof(struct Node));
    pNew->nVal = nVal;
    pNew->pLeft = NULL;
    pNew->pRight = NULL;
    return pNew;
}


void CreateData( )
{
	struct Node *pRoot = CreateNode(5);
	struct Node *pLeft = CreateNode(3);
	struct Node *pLeft = CreateNode(4);
}
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	struct node *next;
	int data;
}Node;

Node * get_circle_link(int length, int local)
{
	Node *temp = NULL;
	Node *phead = NULL;
	Node *tail = NULL;

	int i = 0;
	for(;i < length; i++)
	{
		temp = (Node *) malloc(sizeof(Node));
		temp->next = NULL;
		temp->data = length - i;

		if(phead == NULL)
			tail = temp;

		temp->next = phead;
		phead=temp;
	}

	for(temp=phead, i = 1; i < local; i++)
	{
		temp = temp->next;
	}
	tail->next = temp;
	return phead;
}

void link_print(Node* temp)
{
	while (temp != NULL)
	{
		printf("%p:%d\t", temp, temp->data);
		temp = temp->next;
		getchar();
	}
	printf("\n");
}

int get_circle_local(Node *phead)
{
	Node *fast = phead;
	Node *slow = phead;
	while (fast != NULL
		&& fast->next != NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			for (slow = phead; slow != fast;)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return slow->data;
		}
	}
	return 0;
}

int main(int argc, char *argv[])
{
	Node *phead = NULL;
	int local = 0;
	int number = 0;
	if (argc < 3)
	{
		printf("pls usage:%s number local[number>=local]\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	number = atoi(argv[1]);
	local = atoi(argv[2]);
	if (local > number || local <= 0 || number <= 0)
	{
		printf("number must >= local, and must positive integer\n");
		exit(EXIT_FAILURE);
	}
	phead = get_circle_link(number, local);
	//link_print(phead);
	int ret;
	if ((ret = get_circle_local(phead)) != 0)
	{
		printf("has circle, local:%d\n", ret);
	}
	else 
	{
		printf("no circle\n");
	}
	return 0;
}
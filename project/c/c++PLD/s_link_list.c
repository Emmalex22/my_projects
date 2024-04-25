#include <stdio.h>
#include <stdlib.h>

/*Template for each node*/
struct node
{
	int data;
	struct node *next;
};

struct node *temp, *head;
/*function prototypes*/
void insert_at_beginning(int value);
void insert_at_end(int value);
int len_list(void);
void insert_at_position(int data, int pos);

int main(void)
{
	struct node *nodeA;
	nodeA = (struct node*)malloc(sizeof(nodeA));
	printf("Enter value for first node: \n");
	scanf("%i", &nodeA->data);
	struct node *nodeB;
	nodeB = (struct node*)malloc(sizeof(nodeB));
	printf("Enter value for second node: \n");
	scanf("%i", &nodeB->data);

	struct node *nodeC;
	nodeC = (struct node*)malloc(sizeof(nodeC));
	printf("Enter value for third  node: \n");
	scanf("%i", &nodeC->data);
	nodeA->next = nodeB;
	nodeB->next = nodeC;
	nodeC->next = NULL;
	head = nodeA;
	temp = head;
	while(temp != NULL)
	{
		printf("%i\n", temp->data);
		temp = temp->next;
	}
	printf("The modified singly linked list is:\n");
	insert_at_beginning(21);
	insert_at_end(92);
	insert_at_position(4, 3);
	temp = head;
	while (temp != NULL)
	{
		printf("%i\n", temp->data);
		temp = temp->next;
	}

}
void insert_at_beginning(int value)
{
	struct node *newnode;
	newnode = (struct node*)malloc(sizeof(newnode));
	temp = head;
	newnode->data = value;
	newnode->next = head;
	head = newnode;
}

void insert_at_end(int value)
{
	struct node *newnode;
	newnode = (struct node*)malloc(sizeof(newnode));
	temp = head;
	newnode->data = value;
	newnode->next = NULL;
	if(head == NULL)
	{
		head = newnode;
		return;
	}
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;
}

int len_list(void)
{
	struct node *current = head;
	int count = 0;
	if(head == NULL)
		printf("List is empty\n");
	else
	{
		while(current != NULL)
		{
			count++;
			current = current->next;
		}
	}
	return (count);
}

void insert_at_position(int value, int pos)
{
	int i;
	struct node *newnode;
	newnode = (struct node*)malloc(sizeof(newnode));
	int len = len_list();

	if(pos < 1 || pos > len)
	{
		printf("invalid position\n");
		free(newnode);
	}

	else if(pos == 1)
	{
		newnode->next = head;
		head = newnode;
		return;
	}
	else
	{
		temp = head;
		newnode->data = value;
		for(i = 1; i < pos - 1; i++)
		{
			temp = temp->next;
		}
		newnode->next = temp->next;
		temp->next = newnode;
	}
}
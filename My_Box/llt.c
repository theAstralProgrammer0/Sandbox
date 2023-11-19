#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
} node;

int main(void)
{
	int choice;
	node *head = NULL;
	node *newnode, *temp;

	while (choice)
	{
		newnode = (node *) malloc(sizeof(node));
		puts("Enter data to be stored:");
		scanf("%d", &newnode->data);
		newnode->next = NULL;

		if (head == NULL)
			head = temp = newnode;
		else
		{
			temp->next = newnode;
			temp = newnode;
		}
		puts("Would you like to enter some more data?");
		puts("1 -> YES | 0 -> NO");
		scanf("%d", &choice);

	}
	printf("This should only show after pressing n or N\n");

	return (0);
}


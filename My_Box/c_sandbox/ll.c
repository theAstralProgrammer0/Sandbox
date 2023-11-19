#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct node
	{
		int data;
		struct node *next;
	};

	int choice = 1;
	struct node *head = NULL, *newnode, *temp;

	while(choice)
	{
		newnode = (struct node *) malloc (sizeof(struct node));

		if (newnode == NULL)
			return (-1);

		printf("Enter node data\n");
		scanf("%d", &newnode->data);

		if (head == NULL)
			head = temp = newnode;
		else
		{
			temp->next = newnode;
			temp = newnode;
		}
		
		printf("Do you wish to continue? (0 - NO | 1 - YES)\n");
		scanf("%d", &choice);
	}

	temp = head;
	puts("These are the numbers you entered");
	
	while(temp != NULL)
	{
		printf("%d\n", temp->data);
	       	temp = temp->next;
	}

	return (0);
}



#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
} node;

void createLL(node **head)
{
	int i=0;
	node *r;
	for (i;i<10;i++)
	{
		r = (node*) malloc(sizeof(node));
		r->data = i+1;
		r->next = *head;
		*head = r;
	}
}

void traverse(node **head)
{
	node *temp = *head;
	int i=1;
	while (temp != NULL)
	{
		printf("Element %d: %d\n",i,temp->data);
		temp = temp->next;
		i++;
	}
}

void reversel(node **head)
{
	node *new = (*head) -> next;
	node *newest = new -> next;

	int flag=1;

	while (new != NULL)
	{
		new -> next = *head;
		if (flag==1)
		{
			(*head) -> next = NULL;	
			flag++;
		}

		(*head) =  new;
		new = newest;

		if (newest != NULL)
		{
			newest = newest -> next;		
		}
	}
			

}


int main()
{
	node *p=NULL;
	createLL(&p);
	traverse(&p);


	reversel(&p);

	
	printf("\nAfter Reversel\n");
	traverse(&p);

	
	return 0;
}
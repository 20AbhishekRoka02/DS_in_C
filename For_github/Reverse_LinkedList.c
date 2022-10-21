#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
} node;

// void reverseList(node **head, node **rev)
// {
//     node *temp = *head;
//     while (temp->next != NULL)
//     {
//     }
// }

int main()
{
    node *p = NULL;
    node *r;
    node *rev_p = NULL;

    int size;
    printf("Enter size of List: ");
    scanf("%d", &size);

    int data;
    for (int i = 0; i < size; i++)
    {
        r = (node *)malloc(sizeof(node));

        printf("Enter Element %d: ", i + 1);
        scanf("%d", &data);

        r->info = data;
        r->next = p;
        p = r;
    }

    // Traversing original linked list.

    if (p != NULL)
    {

        printf("Traversing original Linked List:-\n");

        node *temp = p;
        int count = 1;

        while (temp->next != NULL)
        {
            printf("Element %d: %d\n", count, temp->info);
            count++;
            temp = temp->next;
        }
        printf("Element %d: %d\n", count, temp->info);

        

        // Reversing Linked list
        temp = p;
        while (temp->next != NULL)
        {
            r = (node *)malloc(sizeof(node));

            r->info = temp->info;
            r->next = rev_p;
            rev_p = r;

            // printf("el: %d", temp-> info);
            temp = temp->next;
        }

        r = (node *)malloc(sizeof(node));
        r->info = temp->info;
        r->next = rev_p;
        rev_p = r;

        // Traversing Reversed Linked List

        count = 1;
        temp = rev_p;
        
        printf("\nTraversing reversed Linked List:-\n");

        while (temp->next != NULL)
        {
            printf("Element %d: %d\n", count, temp->info);
            count++;
            temp = temp->next;
        }

        printf("Element %d: %d\n", count, temp->info);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int info;
    struct node *next;
} node;

void insertBegin(node **head)
{
    node *r;
    r = (node *) malloc(sizeof(node));

    int data;
    printf("Enter data: ");
    scanf("%d", &data);

    r->info = data;
    r->next = *head;
    *head = r;

    // traverse
    // node *temp = p;
    // int count = 1;
    // while (temp->next != NULL)
    // {
    //     count++;
    //     printf("Element %d: %d\n", count, temp->info);
    //     temp = temp->next;
    // }
    // printf("Element %d: %d\n", count, temp->info);
}

void insertEnd(node *p)
{
}

void insertBtw(node *p)
{
}

void deleteBegin(node *p)
{
}

void deleteEnd(node *p)
{
}

void deleteBtw(node *p)
{
}

void traverse(node **head)
{

    node *temp = *head;
    int count = 1;
    while (temp->next != NULL)
    {
        count++;
        printf("Element %d: %d\n", count, temp->info);
        temp = temp->next;
    }
    printf("Element %d: %d\n\n", count, temp->info);
}

int main()
{
    int opt, bool = 1;
    node *p = NULL;

    while (bool)
    {

        printf("Operation on linked list:-\n\
1. Insert node at the Beginning.\n\
2. Insert node at the End.\n\
3. Insert node in between nodes.\n\
4. Delete node from the Beginning.\n\
5. Delete node from the End.\n\
6. Delete node from between 2 nodes.\n\
7. Traverse the linked list.\n\
8. Exit.\n\
\n\
Enter: ");
        scanf("%d", &opt);

        switch (opt)
        {
        case 1:
            insertBegin(&p);

            //traverse
            node *temp = p;
            int count = 1;
            while (temp->next != NULL)
            {
                count++;
                printf("Element %d: %d\n", count, temp->info);
                temp = temp->next;
            }
            printf("Element %d: %d\n", count, temp->info);
            break;

        case 2:
            insertEnd(p);
            break;

        case 3:
            insertBtw(p);
            break;

        case 4:
            deleteBegin(p);
            break;

        case 5:
            deleteEnd(p);
            break;

        case 6:
            deleteBtw(p);
            break;

        case 7:
            traverse(&p);
            break;

        case 8:
            bool = 0;
            printf("Terminating the program.....\n");
            break;

        default:
            printf("Invalid Options.\n");
            break;
        }
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
} node;

void insertAsc(node **head)
{
    int data;
    printf("Enter data: ");
    scanf("%d", &data);

    node *r = (node *)malloc(sizeof(node));

    r->info = data;

    if (*head != NULL)
    {
        int flag = 0;
        node *old = *head;
        node *new = (node *)malloc(sizeof(node));

        int move = 0;
        while (old != NULL)
        {
            new = old->next;

            if (new == NULL)
            {
                if (old->info > data)
                {
                    *head = r;
                    r->next = old;
                    break;
                }
                else
                {
                    old->next = r;
                    r->next = new;
                    break;
                }
            }
            else
            {
                if (old->info > data)
                {
                    r->next = old;
                    *head = r;
                    break;
                }
                else if (new->info > data)
                {
                    r->next = new;
                    old->next = r;
                    break;
                }

                old = old->next;
                new = new->next;
            }
        }
    }
    else
    {
        r->next = *head;
        *head = r;
    }
}

void deleteBegin(node **head)
{
    node *temp = *head;
    if (temp != NULL)
    {
        printf("Removed element: %d\n", temp->info);
        *head = temp->next;
    }
    else
    {
        printf("List undeflow!\n");
    }
}

void deleteEnd(node **head)
{
    node *temp = *head;

    if (temp != NULL)
    {
        if (temp->next == NULL)
        {
            printf("Removed Element: %d\n", temp->info);
            *head = NULL;
        }
        else
        {
            node *lp;
            while (temp->next != NULL)
            {
                lp = temp->next;
                // printf("Element: %d\n", lp->info);
                if (lp->next == NULL)
                {
                    printf("Removed Element: %d\n", lp->info);
                    break;
                }
                temp = temp->next;
            }
            temp->next = NULL;
        }
    }

    else
    {
        printf("List undeflow!\n");
    }
}

void deleteBtw(node **head)
{
    int pos;
    printf("Enter position: ");
    scanf("%d", &pos);
    pos -= 2;

    int count = 0;
    node *temp = *head;
    if (pos == -1)
    {
        if (temp != NULL)
        {
            printf("Removed element: %d\n", temp->info);
            *head = temp->next;
        }
        else
        {
            printf("List underflow!\n");
        }
    }

    else if (pos < -1)
    {
        printf("Position is out of range.\n");
    }
    else
    {

        while ((count < pos) && (temp->next != NULL))
        {
            temp = temp->next;
            count++;
        }

        if (count < pos)
        {
            printf("Position is out of range.\n");
        }
        else
        {
            node *lp = temp;
            lp = lp->next;
            if (lp == NULL)
            {
                printf("Position out of range.\n");
            }
            else
            {
                printf("Removed element: %d\n", lp->info);
                temp->next = (temp->next)->next;
            }
        }
    }
}

void traverse(node **head)
{
    node *temp = *head;

    if (temp != NULL)
    {

        int count = 1;
        while (temp->next != NULL)
        {
            printf("Element %d: %d\n", count, temp->info);
            count++;
            temp = temp->next;
        }
        printf("Element %d: %d\n", count, temp->info);
    }

    else
    {
        printf("List is Empty!\n");
    }
}

int main()
{
    int opt, bool = 1;
    node *p = NULL;

    while (bool)
    {

        printf("Operation on linked list:-\n\
1. Insert node at the Beginning.\n\
2. Delete node from the Beginning.\n\
3. Delete node from the End.\n\
4. Delete node from between 2 nodes.\n\
5. Traverse the linked list.\n\
6. Exit.\n\
\n\
Enter: ");
        scanf("%d", &opt);

        switch (opt)
        {
        case 1:
            insertAsc(&p);
            break;

        case 2:
            deleteBegin(&p);
            break;

        case 3:
            deleteEnd(&p);
            break;

        case 4:
            deleteBtw(&p);
            break;

        case 5:
            traverse(&p);
            break;

        case 6:
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
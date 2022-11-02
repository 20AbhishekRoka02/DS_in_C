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
    int data;
    r = (node *)malloc(sizeof(node));

    printf("Enter data: ");
    scanf("%d", &data);

    r->info = data;
    r->next = *head;
    *head = r;

    // traverse
    //  int count = 0;
    //  node *temp = head;

    // while (temp->next != NULL)
    // {
    //     count++;
    //     printf("Element: %d: %d\n", count, temp->info);
    //     temp = temp->next;
    // }
    // if (count == 0)
    // {
    //     printf("List is empty.\n");
    // }
    // else
    // {

    //     printf("Element: %d: %d\n", count, temp->info);
    // }
}

void insertEnd(node **head)
{
    node *r;
    r = (node *)malloc(sizeof(node));
    node *temp = *head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    int data;
    printf("Enter Data: ");
    scanf("%d", &data);

    r->info = data;
    r->next = temp->next;
    temp->next = r;
}

void insertBtw(node **head)
{
    int position, count = 0;
    printf("Enter position: ");
    scanf("%d", &position);
    // position--;
    position -= 2;

    int data;
    node *r;
    r = (node *)malloc(sizeof(node));

    // printf("Enter data: ");
    // scanf("%d", &data);
    // r->info = data;
    if (position == -1)
    {
        printf("Enter data: ");
        scanf("%d", &data);

        r->info = data;
        r->next = *head;
        *head = r;
    }
    else if (position < -1)
    {
        printf("Position is out of range.\n");
    }
    else
    {
        node *temp = *head;

        while ((count < position) && (temp->next != NULL))
        {
            // r->next = temp->next;
            // temp->next = r;
            temp = temp->next;
            count++;
        }
        if (count < position)
        {
            printf("Position is out of range.\n");
        }
        else
        {

            printf("Enter data: ");
            scanf("%d", &data);

            r->info = data;
            r->next = temp->next;
            temp->next = r;
        }
    }
}
void deleteBegin(node **head)
{
    node *temp = *head;
    if (temp != NULL)
    {
        // temp = temp->next;
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
        // if (count == 1)
        // {
        //     printf("Element: %d: %d\n", count, temp->info);
        //     // printf("List is empty.\n");
        // }
        // else
        // {
        //     count++;

        //     printf("Element: %d: %d\n", count, temp->info);
        // }
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
            break;

        case 2:
            insertEnd(&p);
            break;

        case 3:
            insertBtw(&p);
            break;

        case 4:
            deleteBegin(&p);
            break;

        case 5:
            deleteEnd(&p);
            break;

        case 6:
            deleteBtw(&p);
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
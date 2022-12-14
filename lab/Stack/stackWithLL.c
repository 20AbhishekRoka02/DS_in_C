#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct node
{
    int item;
    struct node *next;
} node;

void Push(node **s)
{
    int data;
    printf("Enter data: ");
    scanf("%d", &data);

    node *r= (node *) malloc(sizeof(node));
    r->item = data;
    r->next = *s;
    *s = r;
}

void Pop(node **s)
{
    node *r = (node*) malloc(sizeof(node));
    r = *s;
    printf("Popped Element is: %d\n",r->item);
    *s = r->next;
}

int isFull(int top, int max)
{
    if (top == max - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(int top)
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int max, top = -1;
    printf("Enter maximum number of elements to be in Stack: ");
    scanf("%d", &max);

    node *head = NULL;
    char option;
    int bool = 1;

    while (bool)
    {
        printf("Choose an option:-\n\
Press P for Push\n\
Press D for Pop\n\
Press E for Exit\n");

        option = getch();
        switch (option)
        {
        case 'p':
        case 'P':
            if (!isFull(top, max))
            {
                Push(&head);
                top++;
            }
            else
            {
                printf("\nStack is Full!\n");
            }
            break;

        case 'd':
        case 'D':
            if (!isEmpty(top))
            {
                Pop(&head);
                top--;
            }
            else
            {
                printf("\nStack is Empty!\n");
            }

            break;

        case 'e':
        case 'E':
            printf("Terminating the Program.\n");
            bool = 0;
            break;

        default:
            printf("\nEnter appropriate option\n");
        }
    }

    return 0;
}
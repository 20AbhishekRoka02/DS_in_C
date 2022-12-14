# include<stdio.h>
# include <conio.h>

#define MAX 5

typedef struct stack
{
    int item[MAX];
    int top;
} st;

void Push(st *s, int data);
void Pop(st *s);
int isFull(st *s);
int isEmpty(st *s);

int main()
{
    st s;
    s.top=-1;
    char option;
    int bool=1;
    int data;

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
        printf("Enter data: ");
        scanf("%d",&data);
        Push(&s,data);
        break;

    case 'd':
    case 'D':
        Pop(&s);
        break;

    case 'e':
    case 'E':
        printf("Terminating the Program.\n");
        bool=0;
        break;
    
    default:
        printf("\nEnter appropriate option\n");
        
    }
    }
        
    return 0;
}

void Push(st *s, int data)
{
    if (!isFull(s))
    {
        s->top++;
        s->item[s->top] = data;
    }
    else
    {
        printf("\nStack Overflow\n");
    }
}

void Pop(st *s)
{
    if (!isEmpty(s))
    {
        printf("\nPopped Element is: %d\n",s->item[s->top]);
        s->top--;
    }
    else
    {
        printf("\nStack Underflow\n");
    }
    
}

int isFull(st *s)
{
    if (s->top == MAX -1)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
    
}

int isEmpty(st *s)
{
    if (s->top == -1)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
    
}
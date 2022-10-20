# include<stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node * next;
} node;

int main(){
    node * p = NULL;
    node *r;

    // inserting in link list
    int len;
    printf("Enter lenght of linked list: ");
    scanf("%d",&len);

    for (int i=0; i<len; i++)
    {
        r = (node*) malloc(sizeof(node));
        int dat;
        printf("Enter element %d: ", i+1);
        scanf("%d",&dat);
        r -> info = dat;

        r->next = p;
        p=r;
    }

    node *temp = p;
    int n=1;

    while(temp-> next != NULL)
    {
        printf("Element %d: %d\n", n, temp->info);
        n++;
        temp= temp-> next;
    }
    printf("Element %d: %d\n", n, temp->info);

    

    
    return 0;
}
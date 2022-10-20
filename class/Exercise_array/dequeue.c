#include <stdio.h>
#define MAX 5
void insertLeft(int *array, int *left, int *right);
void insertRight(int *array, int *left, int *right);
void deleteLeft(int *array, int *left, int *right);
void deleteRight(int *array, int *left, int *right);
void isEmpty(int *left, int *right);
void isFull(int *left, int *right);
void Traverse(int *array, int *right);

int main()
{
    int dequeue[MAX];
    int left = -1, right = -1; // initally deqeue is empty.

    int option, bool = 1;

    while (bool)
    {

        printf("\nWe are operating on Dequeue. Now, choose an operation from the options given below:-\n\
1. Insert from Left\n\
2. Insert from Right\n\
3. Delete from Left\n\
4. Delete from Right\n\
5. is Empty?\n\
6. is Full?\n\
7. Traverse\n\
8. Exit\n\
Enter: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            insertLeft(dequeue, &left, &right);
            break;

        case 2:
            insertRight(dequeue, &left, &right);
            break;
        case 3:
            deleteLeft(dequeue, &left, &right);
            break;

        case 4:
            deleteRight(dequeue, &left, &right);
            break;

        case 5:
            isEmpty(&left, &right);
            break;

        case 6:
            isFull(&left, &right);
            break;

        case 7:
            // printf("%d, %d\n", right, left);
            // for (int i = 0; i <= right; i++)
            // {
            //     printf("dequeue[%d]: %d\n", i, dequeue[i]);
            // }
            Traverse(dequeue, &right);
            break;

        case 8:
            printf("Terminating the program.....\n");
            bool = 0;
            break;

        default:
            printf("Invalid option\n");
            break;
        }
    }

    return 0;
}

void isEmpty(int *left, int *right)
{
    if ((*left == -1) && (*right == -1))
    {
        printf("Dequeue is Empty!.\n");
    }
    else
    {
        printf("Dequeue is not Empty!.\n");
    }
}

void isFull(int *left, int *right)
{
    if ((*left == 0) && (*right == MAX - 1))
    {
        printf("Deque is full.\n");
    }
    else
    {
        printf("Deque is not full.\n");
    }
    
};

void insertLeft(int *array, int *left, int *right)
{

    // One bug - if user cancels insertion after printf() then, right remain incremented and then array will show garbage value for *(array + *right);

    int temp;
    printf("Enter Data: ");
    scanf("%d", &temp);

    /*algo:-
    1. *right ++
    2. right shift elements in deque.
    3. insert value to array[0]
    */
    if (*left == -1)
    {
        (*left)++;
        (*right)++;
        *array = temp;
    }

    else if ((*left == 0) && (*right == MAX - 1))
    {
        printf("Deque overflow.\n");
    }

    else
    {
        (*right)++;
        for (int i = *right; i > 0; i--)
        {
            *(array + i) = *(array + (i - 1));
        }
        *array = temp;
    }
}
void insertRight(int *array, int *left, int *right) /* Like PUSH in stack*/
{

    int temp;
    printf("Enter data: ");
    scanf("%d", &temp);

    /*Work on is Full case*/
    // printf("%d, %d\n", *left, *right);

    if (*right == -1)
    {
        // printf("Enter data: ");
        // scanf("%d", array);
        (*left)++;
        (*right)++;
        *array = temp;

        // printf("%d, %d\n", *left, *right);
        // printf("%d\n", *array);
    }
    else if (*right == MAX - 1)
    {
        printf("Dequeue overflow!\n");
    }

    else
    {
        // printf("%d\n",*right);
        // printf("%d\n",*(array + *right)); // prints garbage value as no value given to that location yet.

        // scanf("%d", (array + *right));

        (*right)++;
        *(array + *right) = temp;
    }
};

void deleteLeft(int *array, int *left, int *right)
{
    // Dequeue operation
    if (*right == 0)
    {
        printf("Deleted element: %d\n", *array);
        *right--;
    }
    else if (*right == -1)
    {
        printf("Deque Underflow.\n");
    }

    else
    {

        (*right)--;
        printf("Deleted element: %d\n", *array);
        for (int i = 0; i <= *right; i++)
        {
            *(array + i) = *(array + i + 1);
        }
    }
};

void deleteRight(int *array, int *left, int *right)
{
    // Pop operation

    if (*right == -1)
    {
        printf("Deque Underflow.\n");
    }
    else
    {
        printf("Deleted element: %d\n", *(array + *right));
        *right -= 1;
    }
};

void Traverse(int *array, int *right)
{
    // printf("%d\n",*right);
    if (*right == -1)
    {
        printf("Dequeue is Empty!\n");
    }
    else
    {

        for (int i = 0; i <= *right; i++)
        {
            printf("array[%d]: %d\n", i, *(array + i));
        }
    }
}
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 50

void insertBegin(int *p, int *size)
{
    printf("Insertion at the Begnining.\n");

    int data;
    printf("Enter data: ");
    scanf("%d", &data);

    if (*size < MAX - 1)
    {
        for (int i = *size; i >= 0; i--)
        {
            *(p + i + 1) = *(p + i);
        }
        *p = data;
        (*size)++;
        printf("\nInsertion Successful!\n");
    }
    else
    {
        printf("Error: Array overflow.\n");
    }
}

void insertEnd(int *p, int *size)
{
    printf("Insertion at the End.\n");
    int data;
    printf("Enter data: ");
    scanf("%d", &data);

    if (*size < MAX)
    {
        (*size)++;
        *(p + *size) = data;
        printf("\nInsertion Successful!\n");
    }

    else
    {
        printf("Error: Array overflow!\n");
    }

    printf("Insert at End\n");
}

void insertBtw(int *p, int *size)
{
    printf("Insertion from a position.\n");

    int pos;
    printf("Enter position: ");
    scanf("%d", &pos);
    pos--;

    if ((pos > MAX - 1) || (pos < 0) || (pos > (*size + 1)))
    {
        printf("Position is out of range\n");
    }
    else
    {

        int data;
        printf("Enter data: ");
        scanf("%d", &data);

        if (*size < MAX)
        {
            for (int i = *size; i > pos - 1; i--)
            {
                *(p + i + 1) = *(p + i);
            }
            *(p + pos) = data;
            (*size)++;

            printf("\nInsertion Successful!\n");
        }
        // printf("Insert Between\n");
    }
}

void deleteBegin(int *p, int *size)
{
    // printf("Delete from Beginning\n");
    if (*size > -1)
    {
        printf("Deleted Element: %d\n", *(p));

        for (int i = 0; i < *size; i++)
        {
            *(p + i) = *(p + i + 1);
        }
        (*size)--;

        printf("Deletion from Beginning Successful!\n");
    }
    else
    {
        printf("Array underflow!\n");
    }
}

void deleteEnd(int *p, int *size)
{
    if (*size > -1)
    {
        printf("Deleted Element: %d\n", *(p + *size));

        (*size)--;
        printf("Deletion from End Successful!\n");
    }
    else
    {
        printf("Array underflow!\n");
    }
}

void deleteBtw(int *p, int *size)
{
    if (*size > -1)
    {
        int pos;
        printf("Enter position: ");
        scanf("%d", &pos);
        pos--;

        if (((pos < 50) && (pos > -1)) && (pos <= *size))
        {
            printf("Deleted Element: %d from position: %d\n", *(p + pos), pos+1);

            for (int i = pos; i < *size; i++)
            {
                *(p + i) = *(p + i + 1);
            }
            (*size)--;

            printf("Deletion from a Position Successful!\n");
        }
        else
        {
            printf("Array out of range.\n");
        }
    }
    // printf("Deletion Successful!\n");
    // printf("Delete in Between\n");
}

void traversing(int *p, int *size)
{
    if (*size > -1)
    {
        printf("Traversing the Array.\n");
        for (int i = 0; i <= *size; i++)
        {
            printf("array element %d: %d\n", i + 1, *(p + i));
        }
    }
    else
    {
        printf("Array is Empty!\n");
    }
}
int main()
{
    int bool = 1;
    char opt, opt_incase;
    int arr[MAX], size = -1;

    // Program
    while (bool)
    {
        system("cls");
        printf("Press i for insertion.\n\
Press d for deletion\n\
Press p for displaying\n\
Press e for exit\n\
Enter....");

        opt = getch();

        switch (opt)
        {
        case 'i':
        case 'I':
            system("cls");
            printf("Insert mode:-\n\
Press 1 for Insert at Begin\n\
Press 2 for Insert at End\n\
Press 3 for Insert at a position\n\
Press e for Exit");
            opt_incase = getch();
            printf("\n");

            switch (opt_incase)
            {
            case '1':
                insertBegin(arr, &size);
                break;
            case '2':
                insertEnd(arr, &size);
                break;
            case '3':
                insertBtw(arr, &size);
                break;

            case 'e':
            case 'E':
                break;

            default:
                printf("Invalid Option.\n");
                break;
            }

            break;

        case 'd':
        case 'D':
            system("cls");
            printf("Deletion mode:-\n\
Press 1 for Delete from Begin\n\
Press 2 for Delete from End\n\
Press 3 for Delete from a position\n\
Press e for Exit");
            opt_incase = getch();
            printf("\n");

            switch (opt_incase)
            {
            case '1':
                deleteBegin(arr, &size);

                break;
            case '2':
                deleteEnd(arr, &size);
                break;
            case '3':
                deleteBtw(arr, &size);
                break;

            case 'e':
            case 'E':
                break;

            default:
            system("cls");
                printf("Invalid Option.\n");
                break;
            }

            break;

        case 'p':
        case 'P':
            // printf("Display\n");
            system("cls");
            traversing(arr, &size);
            break;

        case 'e':
        case 'E':
            system("cls");
            bool = 0;
            printf("Terminating the program.....\n");
            break;

        default:

            printf("Invalid option\n");
            break;
        }
        printf("Press any key to continue");
        getch();
    }
    return 0;
}
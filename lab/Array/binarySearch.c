#include <stdio.h>
#include <string.h>
#define MAX 10

int main()
{
    //Elements arranged in ascending order.
    int arr[MAX] = {1, 12, 23,  32, 34, 45, 56, 67, 78, 90};

    int num, valid = 0;
    char s[5];

    printf("Binary Search operation\n");
    printf("Enter number to be searched: ");
    scanf("%d", &num);

    // Binary Search algorithm
    int first=0, last=MAX-1, mid;

    while (first<=last)
    {
        mid=(first+last)/2;

        if (arr[mid]==num)
        {
            if (mid == 0)
            {
                strcpy(s, "1st");
                // printf("%d found at %dst position\n", num, i+1);
            }
            else if (mid == 1)
            {
                strcpy(s, "2nd");
                // printf("%d found at %dnd position\n", num, i+1);
            }
            else if (mid == 2)
            {
                strcpy(s, "3rd");
            }
            else
            {
                sprintf(s, "%dth", mid + 1);
            }

            printf("%d found at %s position\n", num, s);
            valid=1;
            break;
            // printf("")
        }
        else if(arr[mid] > num)
        {
            last = mid-1;
        }
        else
        {
            first = mid+1;
        }
        

    }

    // for (int i = 0; i < MAX; i++)
    // {
    //     if (arr[i] == num)
    //     {
    //         char s[5];
    //         if (i == 0)
    //         {
    //             strcpy(s, "1st");
    //             // printf("%d found at %dst position\n", num, i+1);
    //         }
    //         else if (i == 1)
    //         {
    //             strcpy(s, "2nd");
    //             // printf("%d found at %dnd position\n", num, i+1);
    //         }
    //         else if (i == 2)
    //         {
    //             strcpy(s, "3rd");
    //         }
    //         else
    //         {
    //             sprintf(s, "%dth", i + 1);
    //         }

    //         printf("%d found at %s position\n", num, s);
    //         valid = 1;
    //     }
    // }
    if (valid == 0)
    {
        printf("%d not found in the list.\n", num);
    }

    return 0;
}
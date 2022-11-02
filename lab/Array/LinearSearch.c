#include <stdio.h>
#include <string.h>
#define MAX 10

int main()
{
    int arr[MAX] = {23, 34, 45, 56, 67, 78, 90, 1, 12, 32};

    int num, valid = 0;

    printf("Linear Search operation\n");
    printf("Enter number to be searched: ");
    scanf("%d", &num);

    for (int i = 0; i < MAX; i++)
    {
        if (arr[i] == num)
        {
            char s[5];
            if (i == 0)
            {
                strcpy(s, "1st");
                // printf("%d found at %dst position\n", num, i+1);
            }
            else if (i == 1)
            {
                strcpy(s, "2nd");
                // printf("%d found at %dnd position\n", num, i+1);
            }
            else if (i == 2)
            {
                strcpy(s, "3rd");
            }
            else
            {
                sprintf(s, "%dth", i + 1);
            }

            printf("%d found at %s position\n", num, s);
            valid = 1;
            break;
        }
    }
    if (valid == 0)
    {
        printf("%d not found in the list.\n", num);
    }

    return 0;
}
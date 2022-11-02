#include <stdio.h>
#define MAX 10


int main()
{
    int order;
    printf("order of matrix: ");
    scanf("%d", &order);

    int arr[MAX][MAX];
    for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < order; j++)
        {
            printf("Enter arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int flag=0;

    for (int i=0; i<order; i++)
    {
        for (int j= i+1; j<order; j++)
        {
            if (arr[i][j]!= arr[j][i])
            {
                flag=1;
                break;
            }
            // printf("%d\n", arr[i][j]);
        }
        if (flag== 1)
        {
            break;
        }
    }

    if (flag!=1)
    {
        printf("Matrix is symmetrical.\n");
    }
    else
    {
        printf("Matrix is non-symmetrical.\n");
    }
    
    return 0;
}
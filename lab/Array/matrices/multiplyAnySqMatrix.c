// multiplication of array
#include <stdio.h>
#define MAX 10
int main()
{
    int arr1[MAX][MAX], arr2[MAX][MAX], result[MAX][MAX];

    // Adding values to matrices
    int order;
    printf("Enter order: ");
    scanf("%d", &order);

    if ((order < 1) || (order > 10))
    {
        printf("Out of order\n");
    }
    else
    {
        int count = 1;
        for (int i = 0; i < order; i++)
        {
            for (int j = 0; j < order; j++)
            {
                arr1[i][j] = count;
                arr2[i][j] = count;
                count++;
            }
        }
        // Multiplication algorithm.
        int mulsum = 0;
        for (int i = 0; i < order; i++)
        {
            for (int j = 0; j < order; j++)
            {
                for (int k = 0; k < order; k++)
                {
                    /* code */
                    mulsum += arr1[i][k] * arr2[k][j];
                }

                result[i][j] = mulsum;
                mulsum = 0;
            }
        }

        // Traversing
        for (int i = 0; i < order; i++)
        {
            for (int j = 0; j < order; j++)
            {
                printf("result[%d][%d]: %d\n", i, j, result[i][j]);
            }
        }
    }

    return 0;
}
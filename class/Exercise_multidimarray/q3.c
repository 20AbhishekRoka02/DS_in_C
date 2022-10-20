#include <stdio.h>

int main()
{

    int arr[4][5];

    // input
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Enter arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }


    // algorithm
    int temp;
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<2; j++)
        {

                temp = arr[i][0];
            for (int k=0; k<4; k++)
            {
                arr[i][k] =arr[i][k+1];

            }
            arr[i][4] = temp;



        }
    }

    // printing the new array

    printf("\nNew array:-\n");
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<5; j++)
        {
            printf("arr[%d][%d]: %d\n", i,j,arr[i][j]);

        }
    }
    return 0;
}
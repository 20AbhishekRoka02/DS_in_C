# include<stdio.h>

int main(){
    int arr1[3][3];
    int arr2[3][3];

    printf("Array 1\n");
    for (int i=0; i<3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter element arr1[%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }


    printf("\nArray 2\n");

    for (int i=0; i<3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter element arr2[%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    // matrix multiplication
    int new_arr[3][3];

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            // for (int k=0; k<3; k++)
            // {
                new_arr[i][j]= arr1[i][0]*arr2[0][j] + arr1[i][1]*arr2[1][j] + arr1[i][2]*arr2[2][j];

            // }

        }

    }

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            printf("new_arr[%d][%d]: %d\n", i,j, new_arr[i][j]);
        }
    }
    return 0;
}
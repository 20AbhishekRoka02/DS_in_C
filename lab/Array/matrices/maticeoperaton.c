// // multiplication of array
// #include <stdio.h>
// #define MAX 10
// int main()
// {
//     int arr1[MAX][MAX], arr2[MAX][MAX], result[MAX][MAX];

//     // Adding values to matrices
//     int order;
//     printf("Enter order: ");
//     scanf("%d", &order);

//     if ((order < 1) || (order > 10))
//     {
//         printf("Out of order\n");
//     }
//     else
//     {
//         int count = 1;
//         for (int i = 0; i < order; i++)
//         {
//             for (int j = 0; j < order; j++)
//             {
//                 arr1[i][j] = count;
//                 arr2[i][j] = count;
//                 count++;
//             }
//         }
//         // Multiplication algorithm.
//         int mulsum = 0;
//         for (int i = 0; i < order; i++)
//         {
//             for (int j = 0; j < order; j++)
//             {
//                 for (int k = 0; k < order; k++)
//                 {
//                     /* code */
//                     mulsum += arr1[i][k] * arr2[k][j];
//                 }

//                 result[i][j] = mulsum;
//                 mulsum = 0;
//             }
//         }

//         // Traversing
//         for (int i = 0; i < order; i++)
//         {
//             for (int j = 0; j < order; j++)
//             {
//                 printf("result[%d][%d]: %d\n", i, j, result[i][j]);
//             }
//         }
//     }

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 10

// void addMatrices(int order, int *mat1[MAX], int *mat2[MAX], int *res[MAX])
// {
//     // Inserting data
//     // to matrice 1
//     int data;
//     for (int i = 0; i < order; i++)
//     {
//         for (int j = 0; j < order; j++)
//         {
//             printf("Enter matrice[%d][%d]: ", i + 1, j + 1);
//             scanf("%d", data);
//             *(*(mat1 + i) + j) = data;
//         }
//     }

//     // to matrice 2
//     for (int i = 0; i < order; i++)
//     {
//         for (int j = 0; j < order; j++)
//         {
//             printf("Enter matrice[%d][%d]: ", i + 1, j + 1);
//             scanf("%d", data);
//             *(*(mat2 + i) + j) = data;
//         }
//     }

//     // Adding data
//     for (int i = 0; i < order; i++)
//     {
//         for (int j = 0; j < order; j++)
//         {
//             *(*(res + i) + j) = *(*(mat1 + i) + j) + *(*(res + i) + j);

//             printf("result[%d][%d]: %d\n", i, j, *((res + i) + j));
//         }
//     }
// }

// void subMatrices(int order, int *mat1, int *mat2, int *res)
// {
//     for (int i = 0; i < order; i++)
//     {
//         for (int j = 0; j < order; j++)
//         {
//         }
//     }
// }

// void mulMatrices(int order, int *mat1, int *mat2, int *res)
// {
//     for (int i = 0; i < order; i++)
//     {
//         for (int j = 0; j < order; j++)
//         {
//         }
//     }
// }

// void transpose(int order, int *mat1)
// {
//     for (int i = 0; i < order; i++)
//     {
//         for (int j = 0; j < order; j++)
//         {
//         }
//     }
// }

int main()
{
    char opt;
    int bool = 1;
    while (bool)
    {

        printf("Matrix operations:-\n\
1. Addition of Matices\n\
2. Subtraction of Matrices\n\
3. Transpose of Matrices\n\
4. Multiplication of Matrices\n\
5. or e for exit\n\
Enter: ");

        opt = getch();

        if ((opt == 'e') || (opt == 'E') || (opt == '5'))
        {
            bool = 0;
            printf("Terminating the program...\n");
            break;
        }
        else if ((opt < 53) && (opt > 48))
        {
            system("cls");
            int order;
            printf("Enter order of matrice:  ");
            scanf("%d", &order);

            if ((order <= MAX) && (order > 0))
            {
                int arr1[MAX][MAX], arr2[MAX][MAX], result[MAX][MAX];
                int data;

                switch (opt)
                {
                case '1':
                    // addMatrices(order, &arr1, &arr2, &result);
                    // Adding matrice
                    printf("Inserting values to Matrice 1\n");
                    for (int i = 0; i < order; i++)
                    {
                        for (int j = 0; j < order; j++)
                        {
                            printf("Enter matrice1[%d][%d]: ", i + 1, j + 1);
                            scanf("%d", &data);
                            arr1[i][j] = data;
                        }
                    }

                    printf("Inserting values to Matrice 2\n");
                    for (int i = 0; i < order; i++)
                    {
                        for (int j = 0; j < order; j++)
                        {
                            printf("Enter matrice2[%d][%d]: ", i + 1, j + 1);
                            scanf("%d", &data);
                            arr2[i][j] = data;
                        }
                    }

                    printf("Result on addtion of Matrices\n");
                    for (int i = 0; i < order; i++)
                    {
                        for (int j = 0; j < order; j++)
                        {
                            result[i][j] = arr1[i][j] + arr2[i][j];
                            printf("result[%d][%d]: %d\n", i + 1, j + 1, result[i][j]);
                            // scanf("%d", &arr1[i][j]);
                        }
                    }
                    break;

                case '2':
                    // subMatrices(order, &arr1, &arr2, &result);
                    printf("Inserting values to Matrice 1\n");
                    for (int i = 0; i < order; i++)
                    {
                        for (int j = 0; j < order; j++)
                        {
                            printf("Enter matrice1[%d][%d]: ", i + 1, j + 1);
                            scanf("%d", &data);
                            arr1[i][j] = data;
                        }
                    }

                    printf("Inserting values to Matrice 2\n");
                    for (int i = 0; i < order; i++)
                    {
                        for (int j = 0; j < order; j++)
                        {
                            printf("Enter matrice2[%d][%d]: ", i + 1, j + 1);
                            scanf("%d", &data);
                            arr2[i][j] = data;
                        }
                    }

                    printf("Result on subtraction of Matrices\n");
                    for (int i = 0; i < order; i++)
                    {
                        for (int j = 0; j < order; j++)
                        {
                            result[i][j] = arr1[i][j] - arr2[i][j];
                            printf("result[%d][%d]: %d\n", i + 1, j + 1, result[i][j]);
                            // scanf("%d", &arr1[i][j]);
                        }
                    }
                    break;

                case '3':
                    // transpose(order, &arr1);
                    printf("Inserting values to Matrice\n");
                    for (int i = 0; i < order; i++)
                    {
                        for (int j = 0; j < order; j++)
                        {
                            printf("Enter matrice[%d][%d]: ", i + 1, j + 1);
                            scanf("%d", &data);
                            arr1[i][j] = data;
                        }
                    }
                    // Transposing
                    for (int i = 0; i < order; i++)
                    {
                        for (int j = i + 1; j < order; j++)
                        {
                            data = arr1[i][j];
                            arr1[i][j] = arr1[j][i];
                            arr1[j][i] = data;
                        }
                    }
                    // Traversing the array.

                    printf("Traversing the matrice after Transpose operaton:-\n");
                    for (int i = 0; i < order; i++)
                    {
                        for (int j = 0; j < order; j++)
                        {
                            printf("matrice[%d][%d]: %d\n", i + 1, j + 1, arr1[i][j]);
                        }
                    }

                    break;

                case '4':
                    // mulMatrices(order, &arr1, &arr2, &result);
                    printf("Inserting values to Matrice 1\n");
                    for (int i = 0; i < order; i++)
                    {
                        for (int j = 0; j < order; j++)
                        {
                            printf("Enter matrice1[%d][%d]: ", i + 1, j + 1);
                            scanf("%d", &data);
                            arr1[i][j] = data;
                        }
                    }

                    printf("Inserting values to Matrice 2\n");
                    for (int i = 0; i < order; i++)
                    {
                        for (int j = 0; j < order; j++)
                        {
                            printf("Enter matrice2[%d][%d]: ", i + 1, j + 1);
                            scanf("%d", &data);
                            arr2[i][j] = data;
                        }
                    }

                    // Multiplication algorithm
                    int mulsum = 0;
                    for (int i = 0; i < order; i++)
                    {
                        for (int j = 0; j < order; j++)
                        {
                            for (int k = 0; k < order; k++)
                            {
                                mulsum += arr1[i][k] * arr2[k][j];
                            }

                            result[i][j] = mulsum;
                            mulsum = 0;
                            // following line is for traversing the array.
                            printf("result[%d][%d]: %d\n", i + 1, j + 1, result[i][j]);
                        }
                    }

                    break;
                }
            }
            else
            {
                printf("Out of order");
            }
        }
        else
        {
            printf("Invalid option\n");
        }
    }

    return 0;
}
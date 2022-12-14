# include<stdio.h>
#define MAX 10

int main()
{
    int num;
    int arr[MAX];

    printf("Enter 10 elements in array:-\n");  

     for (int i = 0; i < MAX; i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&num);
        arr[i] = num;
    }

    

    for (int i = 0; i < MAX-1; i++)
    {
        for (int j = i+1; j < MAX; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }

    printf("Sorted array:-\n");
    for (int i = 0; i < MAX; i++)
    {
        printf("%d\n",arr[i]);
    }
    

    return 0;
}
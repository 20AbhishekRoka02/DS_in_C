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
        int changes=0;
        for (int j = 1; j < MAX-i; j++)
        {
            if (arr[j] < arr[j-1])
            {
                int temp = arr[j];
                arr[j] =arr[j-1];
                arr[j-1] = temp;
                changes =1;
            }
        }
        if (changes ==0)
        {
            break;
        }
        
        
    }


    printf("Sorted array:-\n");
    for (int i = 0; i < MAX; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    
    
    return 0;
}
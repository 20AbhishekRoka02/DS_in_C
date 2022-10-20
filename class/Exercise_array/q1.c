# include<stdio.h>

int main(){
    int arr[25];
    for(int i=0; i<25; i++)
    {
        printf("Enter arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }

    int pos=0, neg=0, even=0, odd=0;
    for (int i = 0; i < 25; i++)
    {
        if (arr[i]< 0)
        {
            neg +=1;
        }
        else if (arr[i] >0)
        {
            pos+=1;
        }
        
        
        if (arr[i]%2==0)
        {
            even+=1;
        }
        else
        {
            odd+=1;
        }
    }

    printf("\nNote: It is assumed that 0 (zero) is neither postivie nor negative.\n");
    printf("Positive numbers in the array: %d\n", pos);
    printf("Negative numbers in the array: %d\n", neg);
    printf("Odd numbers in the array: %d\n", odd);
    printf("Even numbers in the array: %d\n", even);
    

    return 0;
}
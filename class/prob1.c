# include<stdio.h>

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    printf("Original array:-\n");

    for (int i = 0; i<10; i+=2)
    {        
        printf("arr[%d]: %d\n", i, arr[i]);
        printf("arr[%d]: %d\n", i+1, arr[i+1]);
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }

    printf("\nNew array is:-\n");

    for (int i=0; i<10; i+=2)
    {
        
        printf("arr[%d]: %d\n", i, arr[i]);
        printf("arr[%d]: %d\n", i+1, arr[i+1]);
    }
    return 0;
}
# include<stdio.h>

int modify(int array[10]);

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    arr[10] = modify(arr);

    for (int i=0; i<10; i++)
    {
        printf("arr[%d]: %d\n",i,arr[i]);
    }
  
    return 0;
}

int modify(int array[10])
{
    for (int i=0; i<10; i++)
    {
        array[i] *=3;
    }

    return array[10];
}
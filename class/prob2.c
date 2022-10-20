# include<stdio.h>

int main(){
    int arr[5] = {1,2,3,4,5};
    int arr1[5];
    printf("First array:-\n");
    for (int i=0; i<5; i++)
    {
        
        printf("arr[%d]: %d\n", i , arr[i]);
        arr1[i] = arr[(4-i)];
    }

    printf("\nnew array:-\n");
    for (int i=0; i<5; i++)
    {
        printf("new_arr[%d]: %d\n", i, arr1[i]);

    }
    return 0;
}
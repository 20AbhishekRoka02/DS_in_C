# include<stdio.h>

int main(){
    int arr[10] = {1,2,3,4,5,6,80,80,9,10};
    int num, times=0;
    printf("Enter number to be searched: ");
    scanf("%d", &num);

    for(int i=0; i<10; i++)
    {
        if (num == arr[i])
        {
            times +=1;
        }
    }

    if (times ==0)
    {
        printf("Number not found!\n");
    }
    else if (times == 1)

    {

        printf("Number appeared 1 time in an array.\n");
    }
    else{
        printf("Number appeared %d times in an array.\n", times);
    }


    return 0;
}
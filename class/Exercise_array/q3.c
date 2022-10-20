# include<stdio.h>

int main(){
    // int arr[25]={1,2,3,4,5,6,7,8,9,0,11,12,13,14,15,16,-17,18,19,20,21,22,23,24,25};
    int arr[25];
    for (int i =0; i<25; i++)
    {
       printf("Enter arr[%d]: ", i+1);
       scanf("%d",&arr[i]);
    }


    int *p = arr;

    int temp= *p;
    while(p != &arr[24])
    {
        if (temp > *(p+1))
        {
            temp = *(p+1);
        }
        p++;        
    }

    printf("%d is the smallest number in the array.\n", temp);


    return 0;
}
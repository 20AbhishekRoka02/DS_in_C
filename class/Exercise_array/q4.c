# include<stdio.h>

int main(){
    // int arr[25]={1,2,3,4,5,6,7,8,0,0,11,12,13,14,15,16,-17,18,19,20,21,22,23,24,25};
    int arr[25];


    for (int i =0; i<25; i++)
    {
       printf("Enter arr[%d]: ", i+1);
       scanf("%d",&arr[i]);
    }

    //insertion sort.
    for (int i=1; i<25;i++)
    {
        for(int j=i; j>0; j--)
        {
            if(arr[j-1]>arr[j])
            {
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;                
            }
        }
    }

    for (int i=0; i<25; i++)
    {
        printf("arr[%d]: %d\n", i, arr[i]);
    }
    return 0;
}
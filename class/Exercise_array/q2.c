# include<stdio.h>

int main(){
    int n=11;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        fflush(stdin);
        printf("Enter arr[%d]: ", i+1);
        scanf("%d", &arr[i]);
    }


    int last_index = n-1;
    int half=n/2;
    for (int i=last_index; i>=half; i--)
    {
        printf("Is arr[%d] = arr[%d}?, ", 1+last_index-i, i+1);
        if(arr[last_index-i] == arr[i])
        {
            printf("True\n");
        }
        else
        {
            printf("False\n");
        }


    }
    
    return 0;
}
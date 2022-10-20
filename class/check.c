# include<stdio.h>

int main(){
    int size = 10, b[size];
    for (int i=0; i< size; i++)
    {
        printf("Enter: ");
        scanf("%d", &b[i]);
    }

    for (int i=0; i< size; i++)
    {
        printf("%d\n",b[i]);
        
    }
    return 0;
}
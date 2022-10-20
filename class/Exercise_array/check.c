# include<stdio.h>

int arr(int *array, int *left, int *right)
{
    for (int i=0; i<5; i++)
    {
        (*left)++; (*right)++;
        
        printf("%d\n",*(array+*right));
    }

}
int main(){
    int left=-1, right=-1;
    int a[]={1,2,3,4,5};
    arr(a,&left,&right);
    printf("%d, %d\n",left, right);
    
    return 0;
}
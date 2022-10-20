# include<stdio.h>

void increment(int *j)
{
    (*j)++;
}

int main(){
    int a = 45;
    int *i = &a;
    printf("%d\n",a);
    printf("%d\n",*i);
    increment(i);
    printf("%d\n",a);
    printf("%d\n",*i);



    return 0;
}
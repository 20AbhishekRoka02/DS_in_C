# include<stdio.h>
# include <math.h>
int main(){
    // float x[10] = {34.22, 39.87, 41.85,43.23,40.06,53.29, 53.29, 54.14, 49.12, 40.71};
    // float y[10] = {102.43, 100.93, 97.43, 97.81, 98.32, 98.32, 100.07, 97.08, 91.59, 94.85};
    float x[10], y[10];
    printf("For 10 points,\n");

    for (int i=0; i<10; i++)
    {
        printf("Point (x%d, y%d),\n",i+1,i+1);
        printf("x%d: ", i+1);
        scanf("%f",&x[i]);
        printf("y%d: ", i+1);
        scanf("%f",&y[i]);
    }
    float distance= 0;

    //distance calculate.
    for (int i=1; i< 10; i++)
    {
        distance += pow(pow(x[i]-x[i-1],2)+pow(y[i]-y[i-1],2), 0.5);
    }
    printf("Distance b/w first and last points is: %f\n",distance);
    
    return 0;
}
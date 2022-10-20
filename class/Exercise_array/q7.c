# include<stdio.h>
#include <math.h>
int main(){
    float side1[] = {137.4,155.2,149.3,160.0,155.6,149.7};
    float side2[] = {80.9, 92.62,97.93, 100.25, 68.95, 120.0};
    float angle[] = {0.78,0.89,1.35,9.00,1.25,1.75};

    int size = sizeof(side1)/sizeof(float);
    double area[size];
    for (int i=0; i< size; i++)
    {
        area[i] = 0.5*side1[i]*side2[i]*sin(angle[i]);
    }

    double largest = area[0];
    int index;
    for (int i =1 ; i< size; i++)
    {
            
        if (largest < area[i])
        {
            largest = area[i];
            index = i;
        }
    }

    printf("Largest area is: %lf\n", largest);
    printf("Triangle\na=%f\nb=%f\nangle=%f\n",side1[index],side2[index],angle[index]);
    return 0;
}
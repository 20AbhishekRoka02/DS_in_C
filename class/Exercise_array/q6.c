# include<stdio.h>
# include <math.h>
int main(){
    int arr[] = {-6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2};
    int size = sizeof(arr)/sizeof(int);
    int sum = 0;

    for (int i=0; i< size; i++)
    {
        sum += arr[i];        
    }
    float mean= sum/(float) size;

    //standard deviation
    float total_item_minus_mean=0;

    for (int i=0; i< size; i++)
    {
        total_item_minus_mean += pow((arr[i] - mean),2.0);
    }

    double std_dev = pow(((total_item_minus_mean)/size),0.5);
    printf("Mean of given data: %f\n", mean);
    printf("Standard Deviation of given data: %lf\n", std_dev);




    return 0;
}
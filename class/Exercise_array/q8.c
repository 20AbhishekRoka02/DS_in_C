# include<stdio.h>
# include <math.h>

int main(){
    float x[] = {34.22, 39.87, 41.85,43.23,40.06,53.29, 53.29, 54.14, 49.12, 40.71, 55.15};
    float y[] = {102.43, 100.93, 97.43, 97.81, 98.32, 98.32, 100.07, 97.08, 91.59, 94.85, 94.65};

    int n = sizeof(x)/sizeof(float);

    float sum_xy = 0, sum_x = 0, sum_y =0, sum_sq_x=0, sum_sq_y=0;

    for (int i=0; i< n; i++)
    {
        sum_xy += x[i]*y[i];
        sum_x += x[i];
        sum_y += y[i];
        sum_sq_x += pow(x[i],2);
        sum_sq_y += pow(y[i],2);
    }

    double r = (sum_xy - sum_x * sum_y)/pow((n*sum_sq_x - pow(sum_x,2))* (n*sum_sq_y - pow(sum_y,2)), 0.5);

    printf("Correlation coefficient, r = %lf\n", r);

    return 0;
}
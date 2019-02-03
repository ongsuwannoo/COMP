// Lab3-2
#include <stdio.h>

int main()
{
    float a, b, c, d, sum, ave;
    scanf("%f%f%f%f", &a, &b, &c, &d);
    sum = a+b+c+d;
    ave = sum/4.0;
    printf("Summation is %.2f\n", sum);
    printf("Average is %.3f\n", ave);

    return 0;
}
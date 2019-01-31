// Homework3-2
#include <stdio.h>
int main()
{
    float price, per, count;
    scanf("%f%f%f", &price, &per, &count);
    printf("%.2f\n", (price-(price*per/100))*count);
}
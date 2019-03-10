// Lab7-3
#include <stdio.h>
#include <math.h>

double perimeter(double a, double b)
{
    double c;
    c = hypot(a, b); // c^2 = a^2 + b^2

    return a+b+c;
}

double area(double a, double b)
{
    return 0.5*b*a;
}

int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("Perimeter: %.2lf\n", perimeter(a, b));
    printf("Area: %.2lf\n", area(a, b));

    return 0;
}
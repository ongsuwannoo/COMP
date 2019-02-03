// Lab3-4
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c; // a^2 + b^2 = c^2
    scanf("%f%f", &a, &b);
    c = hypot(a, b);
    printf("%.2f\n", c);

    return 0;
}
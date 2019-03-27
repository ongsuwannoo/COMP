#include <stdio.h>

double pi = 3.141592654;

int main() // pi*r*L + pi*r*r
{
    struct ConeSurface {
    double r;
    double L;
    }cone_1, cone_2;

    scanf("%lf %lf %lf %lf", &cone_1.r, &cone_1.L, &cone_2.r, &cone_2.L);
    printf("%.2f\n%.2f\n", ((pi*cone_1.r*cone_1.L)+(pi*cone_1.r*cone_1.r)), ((pi*cone_2.r*cone_2.L)+(pi*cone_2.r*cone_2.r)));

    return 0;
}
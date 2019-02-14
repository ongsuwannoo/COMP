// Lab5-6
#include <stdio.h>

int main()
{
    float max, min, avg, x;
    int n;
    scanf("%d", &n);
    scanf("%f", &x);
    max = x; min = x; avg = x;
    for(int i=1 ; i < n ; i++)
    {
        scanf("%f", &x);
        if(x > max)
            max = x;
        if(x < min)
            min = x;
        avg = avg + x;
    }
    printf("%d Values\n", n);
    printf("Min: %.3f\n", min);
    printf("Max: %.3f\n", max);
    printf("Avg: %.2f\n", avg/n);

    return 0;
}
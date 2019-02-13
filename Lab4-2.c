// Lab4-2
#include <stdio.h>
#include <stdbool.h>
int sort(double num[3])
{
    double num1, num2;
    int n = 0;
    while (true)
    {
        
    }
    num1 = num[0];
    num2 = num[1];
    num[0] = num2;
    num[1] = num1;
    return num;
}

int main()
{
    double num[3], num3;
    scanf("%lf %lf %lf", &num[0], &num[1], &num[2]);
    sort(num);
    printf("%.2f %.2f %.2f\n", num[0], num[1], num[2]);

    return 0;
}
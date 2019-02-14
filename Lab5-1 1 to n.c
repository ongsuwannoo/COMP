// Lab5-1: 1 to n
#include <stdio.h>

int main()
{
    int n, i = 0;
    scanf("%d", &n);
    while(i != n)
    {
        i = i + 1;
        printf("%d ", i);
    }

    return 0;
}
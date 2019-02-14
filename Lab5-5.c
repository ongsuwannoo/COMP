// Lab5-5
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    while(n % 2 == 1 || n < 2)
    {
        printf("error\n");
        scanf("%d", &n);
    }
    for(int i=1 ; i <= n ; i++)
    {
        printf("%d", ( (i) * (n/2 >= i) ) + ( (n/2 - (i - n/2) + 1) * (n/2 < i) ) );
    }

    return 0;
}
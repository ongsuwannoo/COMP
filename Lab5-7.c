// Lab5-7
#include <stdio.h>

int main()
{
    int x=0, ans = 0;
    while(x != -9)
    {
        ans = ans + x;
        scanf("%d", &x);
    }
    printf("%d\n", ans);

    return 0;
}
// Homework5-5
#include <stdio.h>

int main()
{
    int a, b, m = 1;
    scanf("%d", &a);
    scanf("%d", &b);
    while(b != 0)
    {
        m = m + a % b;
        a = b;
        scanf("%d", &b);
    }
    printf("%d\n", m);

    return 0;
}
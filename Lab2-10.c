#include <stdio.h>

int main()
{
    int a[5];
    scanf("%s%s%s%s%s", &a[0], &a[1], &a[2], &a[3], &a[4]);
    printf("%c\n%c\n%c\n%c\n%c\n", a[0]+1, a[1], a[2]+1, a[3], a[4]+1);
}

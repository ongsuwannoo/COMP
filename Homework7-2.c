// Homework7-2
#include <stdio.h>
#include <string.h>

int main()
{
    int x;
    char c[2][1000], temp[1000];
    scanf("%s %s %d", c[0], c[1], &x);
    for (int i = 0; i < x - 2; ++i)
    {
        strcpy(temp, strcat(c[0], c[1]));
        strcpy(c[0], c[1]);
        strcpy(c[1], temp);
    }
    printf("%s\n", c[1]);
    return 0;
}
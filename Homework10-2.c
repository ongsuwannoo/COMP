// Homework10-2

#include <stdio.h>

int main()
{
    char s[2][100];

    scanf("%s %s", s[0], s[1]);

    printf("%c.%c.\n", s[0][0], s[1][0]);
    
    return 0;
}
// Homework6-4
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], var[100];
    scanf("%[^\n]", str);
    int nub = 0;

    char *s = strtok(str, " ");
    while(s != NULL)
    {
        if (nub < strlen(s))
        {
            nub = strlen(s);
            strcpy(var, s);
        }
        s = strtok(NULL, " ");
    }
    printf("%s\n", var);

    return 0;
}
// Homework10-1

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[200], s2[200];

    scanf("%[^\n] %[^\n]", s1, s2);
    
    strcpy(s1, strlen(s1) > strlen(s2) ? s1 : strlen(s1) < strlen(s2) ? s2 : "\\7");

    printf("%s\n", s1);

    return 0;
}
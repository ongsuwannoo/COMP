// Homework6-3
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char str[100], reverse[100];
    bool var = true;

    scanf("%s", str);

    for (int i = strlen(str)-1, j = 0; i >= 0; i--, j++)
    {
        reverse[j] = str[i];
    }

    for (int i = 0; i < strlen(str) ; i++)
    {

        if (str[i] != reverse[i])
            var = false;
    }

    if (var)
        printf("It is Palindrome.\n");
    else
        printf("It is not Palindrome.\n");

    return 0;
}
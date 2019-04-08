// Count Vowels

#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    char ch[10] = "AEIOUaeiou";
    char *result;
    int nub = 0;

    scanf("%[^\n]", str);

    for (int i = 0; i < 10; ++i)
    {
        result = strchr(str, ch[i]);
        while(result != NULL)
        {
            nub += 1;
            result = strchr(result+1, ch[i]);
        }
    }

    printf("%d\n", nub);

    return 0;
}
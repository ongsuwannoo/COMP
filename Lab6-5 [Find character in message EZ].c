// Lab6-5 [Find character in message EZ]
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[300], c, temp;
    int nub=0, j=0, position[300];

    scanf("%[^\n]%*c", s);
    scanf("%c", &c);

    temp = toupper(c);

    for (int i = 0; i < strlen(s); ++i)
    {
        if (temp == toupper(s[i]))
        {
            nub = nub + 1;
            position[j] = i+1;
            j = j + 1;
        }
    }
    if (j != 0)
    {
        printf("There is/are %d \"%c\" in the above sentences.\n", nub, c);
        printf("Position: ");
        for (int i = 0; i < j; ++i)
        {
            printf("%d", position[i]);
            if (i != j-1)
                printf(", ");
        }
    }
    else
        printf("Not found.\n");
}
// Lab6-6 [Sort name normal]
#include <stdio.h>
#include <string.h>
#include <ctype.h>

const char * convert(char *c)                                       // convert string "AbC bcD -> "Abc Bcd"
{
    char check;
    for (int i = 0; i < strlen(c); ++i)
    {
        if (i == 0 || check == ' ')
            c[i] = toupper(c[i]);
        else
            c[i] = tolower(c[i]);
        check = c[i];
    }
    return c;
}

int main()
{
    char name[20][100], x[100];

    for (int i = 0; i < 20; ++i)                                    // input
    {
        scanf("%[^\n]%*c", name[i]);
        strcpy(name[i], convert(name[i]));
    }
    for (int i = 0; i < 20; i++)
    {
        for (int j = i + 1; j < 20; j++)
        {
            if (strcmp(name[j], name[i]) < 0)
            {
                strcpy(x, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], x);
            }
        }
    }
    for (int i = 0; i < 20; ++i)                                    // print
    {
        printf("%s\n", name[i]);
    }

    return 0;
}
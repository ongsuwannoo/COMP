// Lab6-6 [Sort name normal]
#include <stdio.h>
#include <string.h>
#include <ctype.h>

const char * convert(char *c)
{
    char check;
    for (int i = 0; i < strlen(c); ++i)
    {
        if (i == 0)
            c[i] = toupper(c[i]);
        else if (check == ' ')
            c[i] = toupper(c[i]);
        else
            c[i] = tolower(c[i]);
        check = c[i];
    }
    return c;
}

int main()
{
    char name[20][100], x[100], result[20][100];
    int stop = 1;

    for (int i = 0; i < 20; ++i)
    {
        scanf("%[^\n]%*c", name[i]);
        strcpy(name[i], convert(name[i]));
    }
    for (int i = 0; i < 19; ++i)
    {
        stop = 1;
        for (int j = 0; j < strlen(name[i]); ++j)
        {
            if (stop != 0)
            {
                for (int k = 0; k < strlen(name[i+1]); ++k)
                {
                    if (stop != 0)
                    {
                        if (name[i][j] == ' ')
                            j = j + 1;
                        if (name[i+1][k] == ' ')
                            k = k + 1;
                        if (name[i][j] < name[i+1][k])
                        {
                            strcpy(result[i], name[i]);
                            printf("- 1 - %s <- %s = %s\n", name[i], name[i+1], result[i]);
                            stop = 0;
                        }
                        else if (name[i][j] > name[i+1][k])
                        {
                            strcpy(result[i], name[i+1]);
                            printf("- 2 - %s -> %s = %s\n",name[i+1], name[i], result[i]);
                            stop = 0;
                        }
                    }
                }
            }
        }

    }
    for (int i = 0; i < 20; ++i)
    {
        printf("%d %s\n", i+1, result[i]);
    }

    return 0;
}
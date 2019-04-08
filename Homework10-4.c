// Homework10-4
// sort name

#include <stdio.h>
#include <string.h>

int main()
{
    char name[10][200], x[200];

    for (int i = 0; i < 10; ++i)                                    // input
        scanf("%s", name[i]);
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (strcmp(name[j], name[i]) < 0)
            {
                strcpy(x, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], x);
            }
        }
    }
    for (int i = 0; i < 10; ++i)                                    // print
    {
        printf("%s\n", name[i]);
    }

    return 0;
}
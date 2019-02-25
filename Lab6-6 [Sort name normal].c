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

int compare(char *c_1, char *c_2)
{
    int stop = 0, min;

    strlen(c_1) < strlen(c_2) ? min = strlen(c_1) : strlen(c_2);

    for(int i=0 ; i<min ; i++)
    {
        if(c_1[i] < c_2[i] && stop == 0) // compare
        {
            //printf("if 1 %d %c <-- %c\n", i, c_1[i], c_2[i]);
            return 1;
        }
        if (c_1[i] == c_2[i])
        {
            stop += 1;
        }
        if (c_1[i] < c_2[i] && stop == i)
        {
            //printf("if 2 %d %c <-- %c\n", i, c_1[i], c_2[i]);
            return 1;
        }
        if(c_1[i] > c_2[i] && stop == 0)
        {
            //printf("if 3 %d %c --> %c\n", i, c_1[i], c_2[i]);
            return 0;
        }
        if (c_1[i] > c_2[i] && stop == i)
        {
            //printf("if 4 %d %c --> %c\n", i, c_1[i], c_2[i]);
            return 0;
        }
    }
}

int main()
{
    char name[20][100], x[100];

    for (int i = 0; i < 20; ++i)
    {
        scanf("%[^\n]%*c", name[i]);
        strcpy(name[i], convert(name[i]));
    }

    while (1)
    {
        int nub = 0, num;

        for(int i=0 ; i<19 ; i++)
        {
            if(compare(name[i], name[i+1]))
            {
                //printf("Yes %s <-- %s\n", name[i], name[i+1]);
                nub += 1;
            }
            else
            {
                num = i;
                break;
            }
        }
        if(nub == 19) // main check
            break;
        else
        {
            if (!compare(name[num], name[num+1]))
            {
                //printf("compare %s <--> %s \n", name[num], name[num+1] );
                strcpy(x, name[num]);
                strcpy(name[num], name[num+1]);
                strcpy(name[num+1], x);
            }
        }
    }

    for (int i = 0; i < 20; ++i)
    {
        printf("%s\n", name[i]);
    }

    return 0;
}
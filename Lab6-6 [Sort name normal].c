// Lab6-6 [Sort name normal]
#include <stdio.h>
#include <string.h>
#include <ctype.h>

const char * convert(char *c)                                       // convert string "AbC bcD -> "Abc Bcd"
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

int compare(char *c_1, char *c_2)                                   // compare two string
{
    int stop = 0, min;

    strlen(c_1) < strlen(c_2) ? min = strlen(c_1) : strlen(c_2);    // min(len(s1), len(s2))

    for(int i=0 ; i<min ; i++)                                      // compare
    {
        if(c_1[i] < c_2[i] && stop == 0)                            // if 1 "Abb" < "Bbb"
        {
            //printf("if 1 %d %c <-- %c\n", i, c_1[i], c_2[i]);
            return 1;
        }
        if (c_1[i] == c_2[i])                                       // "Aaaac bbbb" -- "Aaaab bbcc"
        {
            stop += 1;
        }
        if (c_1[i] < c_2[i] && stop == i)                           // if 2 "Abb" < "Abc"
        {
            //printf("if 2 %d %c <-- %c\n", i, c_1[i], c_2[i]);
            return 1;
        }
        if(c_1[i] > c_2[i] && stop == 0)                            // if 3 "Bbb" > "Abb"
        {
            //printf("if 3 %d %c --> %c\n", i, c_1[i], c_2[i]);
            return 0;
        }
        if (c_1[i] > c_2[i] && stop == i)                           // if 4 "Abc" > "Abb"
        {
            //printf("if 4 %d %c --> %c\n", i, c_1[i], c_2[i]);
            return 0;
        }
    }
}

int main()
{
    char name[20][100], x[100];

    for (int i = 0; i < 20; ++i)                                    // input
    {
        scanf("%[^\n]%*c", name[i]);
        strcpy(name[i], convert(name[i]));
    }

    while (1)                                                       // main loop
    {
        int nub = 0, num;

        for(int i=0 ; i<19 ; i++)                                   // check all string
        {
            if(compare(name[i], name[i+1]))
            {
                //printf("Yes %s <-- %s\n", name[i], name[i+1]);
                nub += 1;
            }
            else
            {
                num = i;                                            // num is string wrong position <---
                break;
            }
        }
        if(nub == 19)                                               // main check
            break;
        else                                                        // sort incorrect
        {
            if (!compare(name[num], name[num+1]))                   // check compare 2 string -- name[i] / name[i+1]
            {
                //printf("compare %s <--> %s \n", name[num], name[num+1] );
                strcpy(x, name[num]);                               // x = name[num]
                strcpy(name[num], name[num+1]);                     // name[num] = name[num+1]
                strcpy(name[num+1], x);                             // name[num+1] = x
            }
        }
    }

    for (int i = 0; i < 20; ++i)                                    // pirint
    {
        printf("%s\n", name[i]);
    }

    return 0;
}
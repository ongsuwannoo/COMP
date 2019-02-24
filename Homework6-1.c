// Homework6-1
#include <stdio.h>
#include <ctype.h>

int main()
{
    int n, nub[100], num = 0, check = 0;
    scanf("%d", &n);
    char s[n], a[n], c, pos = 0;


    for(int i = 0 ; i < n ; i++)
    {
        scanf(" %c", &a[i]);

        c = tolower(a[i]);

        check = 0;

        for (int j = 0; j < i; j++)
        {
            if (c == s[j])
            {
                check = 1;
            }
        }

        if (check)
        {
            for (int j = 0; j < i; ++j)
            {
                if (c == s[j])
                {
                    pos = j;
                    break;
                }
            }
            nub[pos] += 1;
        }

        else
        {
            s[num] = c;
            nub[num] = 1;
            num += 1;
        }
    }


    for (int i = 0; i < num; i++)
    {
        printf("%c: %d\n", s[i], nub[i]);
    }

    return 0;
}

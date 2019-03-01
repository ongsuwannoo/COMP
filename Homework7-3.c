// Homework7-3
#include <stdio.h>
#include <string.h>

int main()
{
    char c, order[30];
    int x[3] = {0, 0, 0}, nub, t;

    scanf("%c %s", &c, order);

    nub = c == 'L' ? 0 : c == 'C' ? 1 : 2;
    x[nub] += 1;

    for (int i = 0; i < strlen(order); ++i)
    {
        switch(order[i])
        {
            case 'A':
            t = x[0]; x[0] = x[1]; x[1] = t;

            break;

            case 'B':
            t = x[1]; x[1] = x[2]; x[2] = t;
            break;

            case 'C':
            t = x[0]; x[0] = x[2]; x[2] = t;
            break;
        }
    }
    for (int i = 0; i < 3; ++i)
    {
        if (x[i] == 1)
            i == 0 ? printf("L") : i == 1 ? printf("C") : printf("R");
    }

    return 0;
}
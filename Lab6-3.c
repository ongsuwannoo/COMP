// Lab6-3
#include <stdio.h>

int main()
{
    int i, j, check = 1;
    double x, temp;
    for (i=0 ; i < 3 ; i++)
    {
        for (j=0; j < 3 ; j++)
        {
            scanf("%lf", &x);
            if (i == 0 && j == 0)
                temp = x;
            else if (i == j)
            {
                if (x != temp)
                    check = 0;
            }
            else
            {
                if (x != 0.000000)
                    check = 0;
            }
        }
    }
    if (check)
        printf("This is a scalar matrix\n");
    else
        printf("This is not a scalar matrix\n");

    return 0;
}
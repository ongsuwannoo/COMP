// Homework5-2
#include <stdio.h>

int sharp(int nub)
{
    for(int i=0 ; i < nub ; i++)
        printf("#");

    return 0;
}
int main()
{
    int x;
    scanf("%d", &x);
    for(int i=0 ; i < x ; i++)
    {
        if(i < x/2)
        {
            sharp(i);
            printf("-");
            sharp(x-2-i*2);
            printf("-");
            sharp(i);
            printf("\n");
        }
        else
        {
            sharp(x-i-1);
            printf("-");
            sharp((i - x/2)*2 - 1);
            if(i != x/2)
                printf("-");
            sharp(x-i-1);
            printf("\n");
        }
    }

    return 0;
}

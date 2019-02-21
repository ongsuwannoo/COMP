// Lab6-1
#include<stdio.h>
#include<string.h>

int main()
{
    int M[] = {2, 20, 8, 10, 4, 6, 16, 18};
    int N[] = {1, 3, 9, 7, 11, 15, 19};
    int num, nub = 1;
    while(nub)
    {
        scanf("%d", &num);
        for(int i=0 ; i<8;i++)
        {
            if(num == M[i])
            {
                printf("%d is in M at index [%d]\n", num, i);
                nub = 0;
            }
        }
        for(int i=0 ; i<7;i++)
        {
            if(num == N[i])
            {
                printf("%d is in N at index [%d]\n", num, i);
                nub = 0;
            }
        }
        if(1 <= num && num <= 20 && nub != 0)
        {
            printf("%d is not in neither M nor N\n", num);
            nub = 0;
        }

    }
    return 0;
}
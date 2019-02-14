// Lab4-2
#include <stdio.h>
#include <stdbool.h>

double* sort(double num[])
{
    double num_check;
    int n = 0;
    while (true)
    {
        int nub = 0;
        for(int i=0 ; i<2 ; i++)
        {
            if(num[i] <= num[i+1])
                nub += 1;
            else
                break;
        }
        if(nub == 2)
            break;
        else
        {
            for(int i=0 ; i<2 ; i++)
            {
                if(num[i] > num[i+1])
                {
                    num_check = num[i];
                    num[i] = num[i+1];
                    num[i+1] = num_check;
                }
            }
        }
    }
    return num;
}


int main()
{
    double num[3];
    scanf("%lf %lf %lf", &num[0], &num[1], &num[2]);
    sort(num);
    printf("%.2f\n",num[1]);

    return 0;
}
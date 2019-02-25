// Homework6-2
#include <stdio.h>
#include <string.h>

int main()
{
    int power, nub_o = 0, nub_e = 0;
    char cha[20];

    scanf("%d %s", &power, cha);

    int even = power, odd = power;

    for (int i = 0; i < strlen(cha); ++i)
    {
        int ia = cha[i] - '0';
        if (ia%2==0)
        {
            odd -= 1;
        }
        else
        {
            even -= 1;
        }
        if (nub_e == 3)
        {
            odd -= 3;
            nub_e = 0;
        }
        if (nub_o == 3)
        {
            even -= 3;
            nub_o = 0;
        }

    }
    if (even == odd)
        printf("- %d %d\n", even, odd);
    else if (even > odd)
        printf("0 %d %d\n", even, odd);
    else
        printf("1 %d %d\n", even, odd);
}
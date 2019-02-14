// Lab4-4 (Grade)
#include <stdio.h>

int main()
{
    float score;
    int range[] = {80, 70, 60, 50, 0}, i;
    char grade[] = {'A', 'B', 'C', 'D', 'F'};
    scanf("%f", &score);
    if (score <= 100 && score >= 0)
    {
        for(i=0 ; i<5 ; i++)
        {
            if(score >= range[i])
                break;
        }
        printf("%c\n", grade[i]);
    }
    else
        printf("Out of Range\n");

}
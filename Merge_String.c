// Merge String

#include <stdio.h>
#include <string.h>
#define MIN(x, y) (((x) < (y)) ? (x) : (y))

int main()
{
    char s1[100], s2[100], s3[100], s[3];
    int min;

    scanf("%s %s", s1, s2);
    min = MIN(strlen(s1), strlen(s2));

    s3[0] = s1[0];
    s3[1] = s2[0];

    for (int i = 1; i < min; ++i)
        {
            s[0] = s1[i];
            s[1] = s2[i];
            strcat(s3, s);
            printf("%s\n", s3);
        }    
    printf("s1 = %s %d, s2 = %s %d MIN = %d \ns3 = %s", s1, strlen(s1), s2, strlen(s2), min, s3);

    return 0;
}
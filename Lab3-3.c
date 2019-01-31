// Lab3-3
#include <stdio.h>
int main()
{
    int s, d, h, m, s2;
    scanf("%d", &s);
    d = s/86400;
    h = (s%86400)/3600;
    m = ((s%86400)%3600)/60;
    s2 = ((s%86400)%3600)%60;
    printf("%d s = %d d %d h %d m %d s\n", s, d, h, m, s2);

    return 0;
}
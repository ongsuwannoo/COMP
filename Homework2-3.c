#include <stdio.h>
int main()
{
    char num[6];
    scanf("%s", num);
    printf("%1.1s%80s", num, "");
    printf("%2.2s%77s", num, "");
    printf("%5.3s%75s", num, "");
    printf("%7.4s%73s", num, "");
    printf("%9.5s", num);

    return 0;
}
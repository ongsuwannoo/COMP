#include <stdio.h>
#include <string.h>

int main ()
{
    char str[] ="1,2,3,4,5";
    char *pt;
    pt = strtok (str,",");
    printf("\n");
    while (pt != NULL) {
        int a = atoi(pt);
        printf("%d\n", a);
        pt = strtok (NULL, ",");
    }
    return 0;
}
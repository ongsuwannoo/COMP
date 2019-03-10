// Lab6-4 [Reverse Word EZ]
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    scanf("%[^\n]", str);
    
    for (int i = strlen(str)-1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    return 0;
}
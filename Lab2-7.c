// Lab2-7
#include <stdio.h>
int main()
{
	char string[4][30];
    for (int i = 0 ; i < 4 ; i++)
    {
        scanf("%s", string[i]);
        printf("String %d: ", i+1);
        for (int j = 0; j < i+3; j++)
        {
            printf("%c", string[i][j]);
        }
        printf("\n");
    }

	return 0;
}
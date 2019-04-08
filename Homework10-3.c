// Homework10-3
// print max char

#include <stdio.h>
#include <string.h>

int main()
{
    char str[200], result[200];
    char *count_cha;
    int count = 0, count_max = 0, check = 1, k = 0;

    scanf("%[^\n]", str);
    // count max char
    for (int i = 0; i < strlen(str); ++i)
    {
        count_cha = strchr(str, str[i]);
        while(count_cha != NULL)
        {
            count += 1;
            count_cha = strchr(count_cha+1, str[i]);
        }
        if (count > count_max)
            count_max = count;
        count = 0;
    }
    // print char max
    for (int i = 0; i < strlen(str); ++i)
    {
        for (int j = 0; j < strlen(result); ++j)
        {
            if (result[j] == str[i])
                check = 0;
        }
        if (check)
        {
            count_cha = strchr(str, str[i]);
            while(count_cha != NULL)
            {
                count += 1;
                count_cha = strchr(count_cha+1, str[i]);
            }
            if (count == count_max)
            {
                printf("%c", str[i]);
                result[k] = str[i];
                k++;
            }
            count = 0;
        }
        check = 1;
    }
    printf("\n");

    return 0;
}
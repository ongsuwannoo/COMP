// Lab6-8 [Decrypt EZ]
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[200], encode[] = "ABXYPQRMNCEDKLJOSHTUFVZGWI";
    int x, check = 0, pos;

    scanf("%[^\n]%*c", s);

    for (int i = 0; i < strlen(s); ++i)
    {
        if (s[i] != ' ')
        {
            if (islower(s[i]))
                check = 1;
            for (int j = 0; j < strlen(encode); ++j)
                if (encode[j] == toupper(s[i]))
                    pos = j;
            pos = pos + 5;
            if (pos > 25)
                pos = pos - 26;
            // printf("%c --> %c\n",s[i], encode[pos]);
            s[i] = encode[pos];
            if (check == 1)
                s[i] = tolower(encode[pos]);
            check = 0;
        }
    }
    printf("%s\n", s);

    return 0;
}
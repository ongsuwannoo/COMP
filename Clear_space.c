// Clear space

#include <stdio.h>
#include <string.h>

int main()
{
    char message[150];

    scanf("%[^\n]", message);

    for (int i = 0; i < strlen(message); ++i)
        if (message[i] != ' ')
            printf("%c", message[i]);

    return 0;
}

// Lab4-3
#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    scanf("%c", &c);
    c = (toupper(c));
    switch(c)
    {
        case 'A':
        printf("Genius\n");
        break;

        case 'B':
        printf("Good\n");
        break;

        case 'C':
        printf("Try Harder\n");
        break;

        case 'D':
        printf("Very Bad\n");
        break;

        case 'F':
        printf("Fail\n");
        break;

        default:
        printf("Invalid Input\n");
    }
    return 0;
}
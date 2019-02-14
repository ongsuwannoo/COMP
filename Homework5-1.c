// Homework5-1
#include <stdio.h>

int func1()
{
    for(int i=0 ; i<5 ; i++)
        printf("*");
    printf("\n");

    return 0;
}

int func2()
{
    printf("*");
    for (int i = 0; i < 2; i++)
        printf("-*");
    printf("\n");

    return 0;
}

int main()
{
    char c[3];
    scanf("%s", c);
    func1();
    func2();
    printf("*%s*\n", c);
    func2();
    func1();
}

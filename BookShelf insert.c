//BookShelf insert

#include <stdio.h>

int main()
{
    int m;
    //scanf("%d ", &m);

    struct book
    {
        char name[100], author[100];
    }book[1];

    scanf("%s", book[0].name);
    scanf("%s", book[0].author);
    /*for (int i = 0; i < 1; ++i)
    {
        scanf("%s, %s", book[i].name, book[i].author);
    }*/
    for (int i = 0; i < 1; ++i)
    {
        printf("%d %s\n %s\n", i+1, book[i].name, book[i].author);
    }
}
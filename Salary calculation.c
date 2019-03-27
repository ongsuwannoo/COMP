#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    char id_check[10];

    scanf("%d", &num);

    struct Record 
    {
        char id[10];
        char name[100];
        long salary;
        long sales;
    }people[num];

    for (int i = 0; i < num; ++i)
        scanf("%s %s %ld %ld", people[i].id, people[i].name, &people[i].salary, &people[i].sales);

    scanf("%s", id_check);

    for (int i = 0; i < num; ++i)
    {
        if(strcmp(id_check, people[i].id) == 0)
        {
            printf("%s\n%s\n%ld\n%.2f\n%ld\n%.2f", people[i].id, people[i].name, people[i].sales, 
                (people[i].sales * 0.02), people[i].salary, (people[i].sales * 0.02)+people[i].salary);
            num = -1;
        }
    }

    if(num != -1)
        printf("ID not found !!!\n");

    return 0;
}
// Lab2-8
#include <stdio.h>
int main()
{
    char first[20], last[20], ID[10];
    int D, M, Y;
    float gpa;
    scanf("%s%s%s", first, last, ID);
    scanf("%d/%d/%d", &D, &M, &Y);
    scanf("%f", &gpa);
    printf("Fullname: %s %s\n", first, last);
    printf("ID: %s\n", ID);
    printf("DOB: %02d-%02d-%d\n", D, M, Y);
    printf("GPA: %.2f\n", gpa);
}
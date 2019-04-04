// Lab8-1
#include <stdio.h>
#include <string.h>
int main(){
    struct student_info 
    {
        char firstname[60], lastname[60], sex[6], id[12];
        int age;
        float grade;
    }data;
    scanf("%s %s %s %d %s %f", data.firstname, data.lastname, data.sex, &data.age, data.id, &data.grade);
    if (data.sex[0] == 'F') {strcpy(data.sex, "Miss");}
    else {strcpy(data.sex, "Mr");}
    printf("%s %c %s (%d) ID: %s GPA %.2f\n", data.sex, data.firstname[0], data.lastname, data.age, data.id, data.grade);
}
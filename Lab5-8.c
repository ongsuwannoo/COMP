// Lab5-8
#include <stdio.h>

int main()
{
    float age, height, weight, sum_height=0, sum_weight=0;
    int nub1=0, nub2=0, nub3=0, nub4=0, sum_age=0;
    for(int i=0 ; i<50 ; i++)
    {
        scanf("%f %f %f", &age, &height, &weight);

        if(age >= 20 && height >= 160)
            nub1 = nub1 + 1;

        if(age < 20 && (height <= 180 || weight >= 60))
            nub2 = nub2 + 1;

        if(age >= 30 && weight >= 40 && weight <= 80)
            nub3 = nub3 + 1;

        if(age < 40 && (weight < 85 || height <= 200))
            nub4 = nub4 + 1;
        
        sum_age = sum_age + age;
        sum_height = sum_height + height;
        sum_weight = sum_weight + weight;
    }
    printf("Age >= 20 and Height >= 160: %d\n", nub1);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", nub2);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", nub3);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", nub4);
    printf("Average Age: %d\n", sum_age/50);
    printf("Average Height: %.2f\n", sum_height/50);
    printf("Average Weight: %.2f\n", sum_weight/50);

    return 0;

}
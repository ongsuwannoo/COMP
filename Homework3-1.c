// Homework3-1
#include <stdio.h>
#define Pi 3.14159265359
int main()
{
    float price, r, h, vol;
    scanf("%f%f%f", &price, &r, &h);
    r = r/2;
    vol = Pi * r * r * h;
    printf("Volume : %.2fml\n", vol);
    printf("Baht/ml : %.4f\n", price/vol);

    return 0;
}

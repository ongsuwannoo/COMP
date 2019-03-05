// Lab7-4
#include <stdio.h>

double celsiusToFahrenheit(double celcius)
{
    double fahrenheit;
    fahrenheit = 32 + celcius * (180.0/100.0);
    return fahrenheit;
} 

double fahrenheitToCelcius(double fahrenheit)
{
    double celcius;
    celcius = (fahrenheit - 32) / (180.0/100.0);
    return celcius;
}

void printFarenheit(double fahrenheit)
{
    printf("%.2lf f\n", fahrenheit);
}

void printCelcius(double celcius)
{
    printf("%.2lf c\n", celcius);
}

int main()
{
    double x, fahrenheit, celcius;
    char c;
    scanf("%lf %c", &x, &c);
    if (c == 'C' || c == 'c')
    {
        fahrenheit = celsiusToFahrenheit(x);
        printFarenheit(fahrenheit);
    }
    else
    {
        celcius = fahrenheitToCelcius(x);
        printCelcius(celcius);
    }

}
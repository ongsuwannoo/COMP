// Lab7-5
#include <stdio.h>
 
double getValue()
{
    double value;
    scanf("%lf", &value);
    return value;
}
 
double findMin(double array[], int size)
{
    double min = array[0];
    for (int i = 1; i < size; ++i)
        if (min > array[i])
            min = array[i];
 
    return min;
}
 
double findMax(double array[], int size)
{
    double max = array[0];
    for (int i = 1; i < size; ++i)
        if (max < array[i])
            max = array[i];
 
    return max;
}
 
double findAvg(double array[], int size)
{
    double avg = 0;
    for (int i = 0; i < size; ++i)
        avg = avg + array[i];
 
    return avg / size;
}
 
int main()
{
    int n;
    scanf("%d", &n);
    double array[n];

    for (int i=0; i<n; ++i)
        array[i] = getValue();
     
    double min, max, avg;
    min = findMin(array, n);
    max = findMax(array, n);
    avg = findAvg(array, n);
 
    printf("%d Values\n", n);
    printf("Min: %.3lf\n", min);
    printf("Max: %.3lf\n", max);
    printf("Avg: %.3lf\n", avg);
     
    return 0;
}

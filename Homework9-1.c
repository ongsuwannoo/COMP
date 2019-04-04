// Homework9-1

#include <stdio.h>

void swap(double *a, double *b) 
{
	double temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
  
  double a, b, c;
  
  scanf("%lf %lf %lf", &a, &b, &c);
  
  swap(&a, &b);
  swap(&a, &c);
  
  printf("%.2f %.2f %.2f\n", a, b, c);
  
  return 0;
}


/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main()
{

  float mark1, mark2, avrg;
  
  printf("Enter mark1: ");
  scanf("%f", &mark1);

  printf("Enter mark2: ");
  scanf("%f", &mark2);

  avrg = (mark1 + mark2) / 2.0;

  printf("Average: %.2f\n", avrg);
  
  return 0;
}


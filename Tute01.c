/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1;
  int mark2;
  float average = 0;

  printf("Enter marks of subject 1: ");
  scanf("%d", &mark1);
  printf("Enter marks of subject 2: ");
  scanf("%d", &mark2);

  average = (mark1 + mark2)/2.0;

  printf("Average of the 2 marks: %.2f", average);
  
  return 0;
}


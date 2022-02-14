/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int num1,num2,tot;
  float avg;
  
  printf("Enter a number 1:");
  scanf("%d",&num1);
 
  printf("Enter a number 2:");
  scanf("%d",&num2);
  
  tot = num1 + num2;
  avg = tot / 2.0;
  
  printf("Total is : %d \n",tot);
  printf("Average is : %.1f",avg);
  
  return 0;
}


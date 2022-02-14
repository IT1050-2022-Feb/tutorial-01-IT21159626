/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int maximum(int x , int y);
int minimum (int z , int w);
int multiply ( int c , int a);
int main(void) {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}
int maximum(int x , int y)
{
  if(x > y)
  {
    return x ;
  }
  if (y > x)
  {
    return y ;
  }
}
int minimum (int z , int w)
{
  if(z < w)
  {
    return z ;
  }
  if( w < z)
  {
    return w;
  }
}
int multiply ( int c , int a)
{
  return c * a ;
}




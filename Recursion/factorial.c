#include <stdio.h>

int factorial (int n) {
  if (n==0) return 1;
  return n * factorial (n-1);
}
int main()
{
    int n = 6;
    printf("Factorial of 6 is %d \n" , factorial(n));
   
}

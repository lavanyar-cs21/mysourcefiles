#include <stdio.h>
long factorial(int n)
{
if(n==0)
return 1;
else
return(n * factorial(n-1));
}
int main () {
  int num;
  long fact;
  printf("Enter a number: ");
  scanf("%d", &num);
  fact = factorial(num);
  printf("Factorial of %d is %d\n", num, fact);
  return 0;
}

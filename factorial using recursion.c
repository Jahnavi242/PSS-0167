#include <stdio.h>
int main()
{
 int n;
 printf("Enter a number: ");
 scanf("%d", &n);
 int factorial(int n)
{
 if (n == 0)
{
 return 1;
}
 else
{
 return n * factorial(n - 1);
}
}
 printf("Factorial of %d is %d", n, factorial(n));
 return 0;
}

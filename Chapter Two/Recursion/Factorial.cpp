#include<stdio.h>
#include<conio.h> 

long factorial(int);
 
int main()
{
  int n;
  long f;
 
  printf("Enter an integer to find its factorial: ");
  scanf("%d", &n); 
 
  if (n < 0)
    printf("Factorial of negative integers isn't defined.\n");
  else
  {
    f = factorial(n);
    printf("%d! = %ld\n", n, f);
  }
  getch();
  return 0;
}
 
long factorial(int n)
{
  if(n == 0)
    return 1;
  else
    return(n * factorial(n-1));
}

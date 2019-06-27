long fibonacci(long n)
{
  if (n == 0 || n == 1)
    return n;
  else
    return (fibonacci(n-1) + fibonacci(n-2));
}

#include<stdio.h>
#include<conio.h> 

long fibonacci(long);
 
int main()
{
  long n;
  
  printf("Enter an integer: ");
  scanf("%d", &n);
 
  printf("Fibonacci series terms are: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d  ", fibonacci(i));
  }
  
  getch();
  return 0;
}
 


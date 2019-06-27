#include <stdio.h>
int sum(int n);

int main()
{
    int number, result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    result = sum(number); //Function call

    printf("Sum = %d", result);
}

int sum(int num)
{
    if (num != 0)
        return num + sum(num - 1); // sum() function calls itself
    else
        return num; //base case
}

#include <stdio.h>
#include <stdlib.h>
 
#define SIZE 10
int binary_search(int sorted_list[], int low, int high, int element);
 
int main()
{
    int a[SIZE] = {5, 7, 8, 9 , 20, 21, 54, 67, 89, 93};
    int i, e, k, p;
 
    printf("Array: ");
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
 
    printf("\nPlease enter the searched key: ");
    scanf("%d", &k);
 
    p = binary_search(a, 0, SIZE, k);
 
    if(p >= 0)
    {
        printf("The key %d was found at position %d\n\n",k , p + 1);
    }
    else
    {
        printf("The key %d was not found\n\n", k);
    }
    system("pause");
    return 0;
}

int binary_search(int sorted_list[], int low, int high, int element)
{
    if (high < low)
        return -1;
    int middle = low + (high - low) / 2;
    if (element < sorted_list[middle])
        return binary_search(sorted_list, low, middle - 1, element);
    else if (element > sorted_list[middle])
        return binary_search(sorted_list, middle + 1, high, element);
    else
        return middle;
}

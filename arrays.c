#include <stdio.h>
int main()
{
    int a[7], i, sum = 0;
    printf("enter 7 numer:\n");
    // read data into array
    for (i = 0; i < 7; i++)
    {
        scanf("%d", &a[i]);
    }
    //find sum of all element 
    for(i = 0; i < 7; i++)
    {
        sum = sum + a[i];
    }
    //display sum 
    printf("sum = %d", sum);
    return 0;
}
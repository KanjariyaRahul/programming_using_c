//write a program to find factorial of given number using while loop.
#include <stdio.h>
int main()
{
    int n,i=1,factorial=1;
    printf("Enter a Number to Find Factorial: ");
    scanf("%d",&n);
    while(i<=n)
    {
        factorial*=i;
        i++;
    }
    printf("The Factorial of %d is : %d",n,factorial);
    return 0;
}

#include <stdio.h>

int main() {

    int num;
    printf("Enter a number: ");
    scanf("%lf", &num);

    if (num < 0)
        printf("You entered a negative number.");
    else if (num > 0)
        printf("You entered a positive number.");
    else
        printf("You entered 0N");

    return 0;
}

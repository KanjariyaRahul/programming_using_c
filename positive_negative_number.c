#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    int n2;
    int n3;

    printf("Enter number:-");
    scanf("%d",&n1);

    printf("Enter number:- ");
    scanf("%d",&n2);

    printf("Enter number:- ");
    scanf("%d",&n3);


     printf("\nTHE BIGGEST NUMBER IS :: ");
    if( (n1 > n2) && (n1 > n3) )
        printf("%d", n1);
    else if(n2 > n3)
        printf("%d", n2);
    else
        printf("%d", n3);

    printf("\n\nTHE SMALlEST NUMBER IS :: ");

    if( (n1 < n2) && (n1 < n3) )
        printf("%d", n1);
    else if(n2 < n3)
        printf("%d", n2);
    else
        printf("%d",n3);

    return 0;
}

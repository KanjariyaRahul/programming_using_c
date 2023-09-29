

#include <stdio.h>

int main()
{
    int php, maths, dea, html, c,total;
    float per;

    printf("Enter marks Php: ");
    scanf("%d",&php);
    printf("Enter marks maths: ");
    scanf("%d",&maths);
    printf("Enter marks dea: ");
    scanf("%d",&dea);
    printf("Enter marks html: ");
    scanf("%d",&html);
    printf("Enter marks c: ");
    scanf("%d",&c);



     total = (php + maths + dea + html + c);

    printf("Total = %.d\n", total);

    per = (php + maths + dea + html + c) / 5.0;

    printf("Percentage = %.2f\n", per);


     if(per>=90){
        printf("grad A+");
     }
     if(per>=80 && per<90){
        printf("grad A");
     }
     if(per>=70 && per<80){
        printf("grad B");
     }
     if(per>=60 && per<70){
        printf("grad C");
    }
    if(per>=50 && per<60){
        printf("grad D");
     }
     if(per<50){
        printf("RA");
     }
    return 0;
}

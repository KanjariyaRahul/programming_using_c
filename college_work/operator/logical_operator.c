#include<stdio.h>
#include <stdbool.h>

 main()
 {
     int marks=80 ;

     if(marks>=90){
        printf("grad A+");
     }
     if(marks>=80 && marks<90){
        printf("grad A");
     }
     if(marks>=70 && marks<80){
        printf("grad B");
     }
     if(marks>=60 && marks<70){
        printf("grad C");
    }
    if(marks>=50 && marks<60){
        printf("grad D");
     }
     if(marks<50){
        printf("RA");
     }
 }

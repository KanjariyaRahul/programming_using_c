#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b;


  printf("\n Enter any Two numbers\n");

  printf("\n Enter First Number : ");
  scanf("%d",&a);

  printf("\n Enter Second Number : ");
  scanf("%d",&b);

  if(a<b)
   {
    printf("\n %d is Smaller",a);
   }
  else if(a>b)
   {
    printf("\n %d is smaller",b);
   }
  else
  {
      printf("\n%d two number is same ",a,b);
  }


 return 0;
}

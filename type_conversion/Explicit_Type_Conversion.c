//Explicit Type Conversion int to double

#include<stdio.h>

int main() {


  int number = 35;
  printf("Integer Value: %d\n", number);

  double value = (double) number;
  printf("Double Value: %.2lf", value);

  return 0;
}

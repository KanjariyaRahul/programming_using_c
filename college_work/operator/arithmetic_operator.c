#include <stdio.h>

int main()
{
	float  a = 10, b = 4, res;

	printf("a is %f and b is %f\n", a, b);

	res = a + b;
	printf("a + b is = %f\n", res);

	res = a - b;
	printf("a - b is = %f\n", res);

	res = a * b;
	printf("a * b is = %f\n", res);

	res = a / b;
	printf("a / b is = %f\n", res);

	//res = a % b;
	//printf("a %% b is = %d\n", res);

	return 0;
}


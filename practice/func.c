#include <stdio.h>

int maxi(int num1, int num2);

int main(void)
{
	int a = 100;
	int b = 200;
	int ret;

	ret = maxi(a, b);

	printf("maxi of %i & %i is = %d\n", a, b, ret);
	return 0;
}

int maxi(int num1, int num2)
{

	int result;

	if (num1 > num2)
	{
		result = num1;
	}
	else
	{
		result = num2;
	}
	return result;
}

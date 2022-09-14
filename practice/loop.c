#include <stdio.h>

int main()
{
	void foo();
	foo();
	getchar();
	return 0;
}
void foo()
{
	printf("foo called");
}
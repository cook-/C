/* test function calls */
#include <stdio.h>

long factorial(int);
int power(int, int);

main()
{
	int base, exp;
	puts("Input two integers.");
	puts("The 1st one:");
	scanf("%d", &base);
	puts("The 2nd one:");
	scanf("%d", &exp);
	printf("(%d^%d)! = %ld\n", base, exp, factorial(power(base, exp)));
}

long factorial(int n)
{
	return (n == 0) ? 1 : n*factorial(n-1);
}

int power(int base, int exp)
{
	int i, result = 1;
	for (i = 0; i != exp; ++i)
		{
			result *= base;
		}
	return result;
}

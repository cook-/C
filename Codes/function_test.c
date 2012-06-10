/* test function calls */
#include <stdio.h>

long factorial(int);
long power(int, int);

main()
{
	int base, exp;
	puts("Input two integers. \n");
	puts("The 1st one: \n");
	scanf("%d", &base);
	putchar('\n');
	puts("The 2nd one: \n");
	sacnf("%d", &exp);
	putchar('\n');
	printf("(%d^%d)! = %ld", base, exp, factorial(power(base, exp)));
}

long factorial(int n)
{
	return n=0 ? 1 : n*factoria(n-1);
}

long power(int base, int exp)
{
	int i, result = 1;
	for (i = 0; i != exp; ++i)
		{
			result *= base;
		}
	return result;
}

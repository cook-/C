/* Use static variable to calculate 1!, 2!, ..., n! */
#include <stdio.h>
int fac(int n)
{
	static result = 1;
	return result*n;
}

main()
{
	int n;
	printf("Input an integer: \n");
	scanf("%d", n);
	int i;
	for (i = 0; i != n; ++i) {
		printf("%d!=%d\n", i, fac(i));
	}
}

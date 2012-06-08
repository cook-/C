/* scanf("%[*][width][length]", &a) */
#include <stdio.h>
main()
{
	int a, b, c;
	printf("Input three integers(one space to separate): \n");
	scanf("%ld %ld %ld", &a, &b, &c);
	printf("Your input numbers are: %ld %ld %ld\n", a, b, c);
}

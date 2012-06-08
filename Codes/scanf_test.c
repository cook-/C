/* scanf("%[*][width][length]", &a) */
#include <stdio.h>
main()
{
	int a;
	printf("Input a number\n");
	scanf("%ld", &a);
	printf("%ld", a);
}

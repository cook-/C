\* print different types of format *\
#include <stdio.h>
main()
{
	int a = 15;
	float b = 123.1234567;
	double c = 12345678.1234567;
	char d = 'p';

	printf("Expected output: \n");
	printf("a = 15,    15, 17, F\n");
	printf("b = 123.1234567, 123.1234567, 123.1234, 1.2341234567e-2\n");
	printf("c = 12345678.1234567, 12345678.1234567, 12345678.1234\n");
	printf("d = p,        p\n");

	printf("Actual output: \n");
	printf("a = %d, %5d, %o, %x\n", a, a, a, a);
	printf("b = %f, %lf, %5.4lf, %e\n", b, b, b, b);
	printf("c = %lf, %f, %8.4lf\n", c, c, c);
	printf("d = %c, %8c\n", d, d);
}

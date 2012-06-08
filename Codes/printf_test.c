/* print different types of format */
#include <stdio.h>
main()
{
	int a = 15;
	float b = 123.1234567;
	double c = 12345678.123456789;
	char d = 'p';

	printf("Expected output: \n");
	printf("a = 15,    15, 17, f\n");
	printf("b = 123.1235, 123.1235, 123.1235, 1.231235e+02\n");
	printf("c = 12345678.1234568, 12345678.1234568, 12345678.1235\n");
	printf("d = p,        p\n\n");

	printf("Actual output: \n");
	printf("a = %d, %5d, %o, %x\n", a, a, a, a);
	printf("b = %f, %lf, %5.4lf, %e\n", b, b, b, b);
	printf("c = %lf, %f, %8.4lf\n", c, c, c);
	printf("d = %c, %8c\n", d, d);
}

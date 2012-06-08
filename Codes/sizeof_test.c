/* output the bit size of different data types */
#include <stdio.h>
main()
{
	int i;
	long l;
	float f;
	double d;
	char c;
	printf(" type\tsize\n int\t%2d\n long\t%2d\n float\t%2d\n double\t%2d\n char\t%2d\n", sizeof(i), sizeof(l), sizeof(f), sizeof(d), sizeof(c));
}

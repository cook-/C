/* output the bit size of different data types */
#include <stdio.h>
main()
{
	short s;
	int i;
	long l;
	float f;
	double d;
	char c;
	printf(" type\t\tsize\n short\t\t%2d\n int\t\t%2d\n long\t\t%2d\n float\t\t%2d\n double\t\t%2d\n char\t\t%2d\n", sizeof(s), sizeof(i), sizeof(l), sizeof(f), sizeof(d), sizeof(c));
}

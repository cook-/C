/* output the bit size of different data types */
#include <stdio.h>
main()
{
	int i;
	long l;
	float f;
	double d;
	char c;
	printf("type\tsize\n int\t%d\n long\t%d\n float\t%d\n double\t%d\n char\t%d\n", sizeof(i), sizeof(l), sizeof(f), sizeof(d), sizeof(c));
}

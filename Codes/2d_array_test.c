/* print the address& value of 2d-array elements */
#include <stdio.h>
main()
{
	int a[3][3] = {{0,1,2,3},{4,5,6,7},{8,9,10,11}};
	printf("%d,", a);
	printf("%d,", *a);
	printf("%d,", a[0]);
	printf("%d,", &a[0]);
	printf("%d\n", &a[0][0]);
	printf("%d,", a + 1);
	printf("%d,", *(a + 1));
	printf("%d,", a[1]);
	printf("%d,", &a[1]);
	printf("%d\n", &a[1][0]);
	printf("%d,", a + 2);
	printf("%d,", *(a + 2));
	printf("%d,", a[2]);
	printf("%d,", &a[2]);
	printf("%d\n", &a[2][0]);
	printf("%d,", a[1] + 1);
	printf("%d\n", *(a + 1) + 1);
	printf("%d,", *(a[1] + 1));
	printf("%d,\n", *(*(a + 1) + 1));
	printf("%d\n", );
	printf("%d\n", );
	printf("%d\n", );
	printf("%d\n", );
}

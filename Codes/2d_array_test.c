/* print the address& value of 2d-array elements */
#include <stdio.h>
main()
{
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

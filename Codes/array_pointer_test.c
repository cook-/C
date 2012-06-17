/* use array name to find the address of the elements. */
#include <stdio.h>
main()
{
	int arr[10], *ptr, i;

	puts("Method 1: \n");
	for (i = 0; i != 10; ++i)
		*(arr + i) = i;
	for (i = 0; i != 10; ++i)
		printf("a[%d] = %d\n", i, *(arr + i));

	puts("Method 2: \n");
	ptr = arr;
	for (i = 0; i != 10; ++i)
		*ptr++ = i;
	//notice the value of ptr have changed, so we have to initialize it to arr.
	ptr = arr;
	for (i = 0; i != 10; ++i)
		printf("a[%d] = %d\n", i, *ptr++);
}

/* use array name to find the address of the elements. */
#include <stdio.h>
main()
{
	int arr[10], i;
	for (i = 0; i != 10; ++i) {
		*(arr + i) = i;
	}
	for (i = 0; i != 10; ++i) {
		printf("%d ", *(arr + i));
	}
}

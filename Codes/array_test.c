/* output an array */
#include <stdio.h>
main()
{
	int size = 10;
	int arr[size];
	int i;
	for (i = 0; i != size; ++i)
		arr[i] = i;
	for (i = 0; i != size; ++i)
		printf("%d ", arr[i]);
}

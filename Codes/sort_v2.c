/* sort array elements from largest to smallest. */
#include <stdio.h>
void sort(int *, int);
void print(int *, int);

main()
{
	int arr[10] = {3,7,9,11,0,6,7,5,4,2};
	print(arr);
	sort(arr, 10);
	print(arr);
}

void sort(int *ptr, int n)
{
	int i;
	for (i = 0; i != n-1; ++i) {
		int j, k = i;
		for (j = i+1; j != n; ++j) {
			if (*(ptr + j) > *(ptr + k)) k = j;
		}
		if (k != i) {
			int tmp;
			tmp = *(ptr + i);
			*(ptr + i) = *(ptr + k);
			*(ptr + k) = tmp;
		}
	}
}

void print(int *ptr,int n)
{
	int i;
	for (i = 0; i != n; ++i)
		printf("%d ", *(ptr + i));
	puts("\n");
}

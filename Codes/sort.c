/* sort the elements of an array from largest to smallest */
#include <stdio.h>
#include <stdlib.h>
main()
{
	int *arr;
	int size;
	printf("Enter the number of integers you want to sort: ");
	scanf("%d", &size);
	printf("Enter %d integers(put one sapce to separate): ", size);

	arr = (int*)malloc(size*sizeof(int));
	int i;
	for (i = 0; i != size; ++i)
		scanf("%d", &arr[i]);

	int j, max, max_index, tmp;
	for (i = 0; i != size; ++i) {
		for (j = i+1; j != size; ++j) {
			max = arr[i];
			max_index = i;
			if (max < arr[j]) {
				max = arr[j];
				max_index = j;
			}
		}
		tmp = arr[i];
		arr[i] = max;
		arr[max_index] = tmp;
	}

	for (i = 0; i != size; ++i)
		printf("%d ", arr[i]);
	free(arr);

}

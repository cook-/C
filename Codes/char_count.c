/* count the number of characters in the input string */
#include <stdio.h>
main()
{
	int cnt = 0;
	printf("Input a string(put enter to the end): \n");
	while(getchar() != '\n')
		cnt++;
	printf("%d/n", cnt);
}

/*
 *	Create a phone memo using array of structs.
 */

#include <stdio.h>
#define NUM	3

main()
{
	struct phone_memo{
		char name[15];
		char phone_num[15];
	} memo[NUM];

//	enum rank {1st, 2nd, 3rd, 4th, 5th} nth = 1st;
	char *nth[5] = {"1st", "2nd", "3rd", "4th", "5th"};
	int i;
	for (i = 0; i != NUM; ++i) {
		printf("Enter %s name: ", nth[i]);
		scanf("%s", memo[i].name);
		printf("  phone number: ");
		scanf("%s", memo[i].phone_num);
	}

	puts("\n  Telephone Memo");
	printf("Name\t\tPhone\n");
	for (i = 0; i != NUM; ++i)
		printf("%s\t%s\n", memo[i].name, memo[i].phone_num);
}

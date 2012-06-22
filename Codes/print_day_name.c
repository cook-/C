/* input a number and output the day name */
#include <stdio.h>
char *day_name(int);

main()
{
	int n;
	printf("Which day?: \n");
	scanf("%d", n);
	printf("Day%d: %s\n", n, day_name(n));
}

char *day_name(int n)
{
	static char *day_name_arr[] = { "Invalid input!",
									"Monday",
									"Tuesday",
									"Wednesday",
									"Thursday",
									"Friday",
									"Saturday",
									"Sunday"};
	return (n >= 1 && n <= 7)? *(day_name_arr + n) : *(day_name_arr);
}

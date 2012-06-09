/* output the length of the input string */
#include <stdio.h>
#include <string.h>
main()
{
	static char str[] = "C Language";
	printf("The length of %s is %d\n", str, strlen(str));
}

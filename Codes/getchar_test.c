/* Input a character and the program will output it. */
#include<stdio.h>
main()
{
	char c;
	printf("Input a character: \n");
	c = getchar();
	printf("This is your input character");
	putchar(c);
}

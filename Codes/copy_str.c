/* copy one string to another */
#include <stdio.h>
void cpystr(char *pss, char *pds)
{
	while ((*pds = *pss) != '\0') {
		pss++;
		pds++;
	}
}

main()
{
	char *str, *strcp;
	str = "C language";
	cpystr(str, strcp);
	printf("Old string is \"%s\"\n", *str);
	printf("New strinf is \"%s\"\n", *strcp);
}

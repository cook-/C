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
	char *str = "C language";
//	char *strcp = "               ";
	char b[20], *pb;
	pb = b;
	cpystr(str, pb);
	printf("Old string is \"%s\"\n", str);
	printf("New string is \"%s\"\n", pb);
}

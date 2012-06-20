/* copy one string to another */
#include <stdio.h>
void cpystr_v1(char *pss, char *pds)
{
	while ((*pds = *pss) != '\0') {
		pss++;
		pds++;
	}
}

void cpystr_v2(char *pss, char *pds)
{
	while ((*pds++ = *pss++) != '\0')
		;
}

void cpystr_v3(char *pss, char *pds)
{
	while (*pds++ = *pss++)		//Since the ANSII code is 0.
		;
}

main()
{
	char *str = "C language";
	char strcp[20];
	cpystr_v2(str, strcp);
	printf("Old string is \"%s\"\n", str);
	printf("New string is \"%s\"\n", strcp);
}

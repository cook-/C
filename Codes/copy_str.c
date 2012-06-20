/* copy one string to another */
#include <>
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
	printf("Input a string: ");
	scanf("%s", str);
	cpystr(str, strcp);
	printf("Old string is \"%s\"\n", *str);
	printf("New strinf is \"%s\"\n", *strcp);
}

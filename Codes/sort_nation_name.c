/* sort nation names in alphabetical order */
#include <stdio.h>
void sort(char**, int);
void print(char**, int);

main()
{
	static char *name[] = { "CHINA", "AMERICA", "AUSTRALIA", 
							"FRANCE", "GERMAN" };
	sort(name, 5);
	print(name, 5);
}

void sort(char *name[], int n)
{
	int i, j, min_index;
	char *tmp;
	for (i = 0; i != n - 1; ++i) {
		min_index = i;
		for (j = i + 1; j != n; ++j) {
			if (strcmp(*(name + min_index), *(name + j)))
				min_index = j;
		}
		if (min_index != i)
			tmp = *(name + i);
			*(name + i) = *(name + min_index);
			*(name + min_index) = tmp;
	}
}

void print(char *name[], int n)
{
	int i;
	for (i = 0; i != n; ++i) 
		printf("%s\n", *(name + i));
}

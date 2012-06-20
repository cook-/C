/* return the parameters user input in the command line mode */
#include <stdio.h>
main(int argc, char *argv[])
{
	while (argc-- > 0)
		printf("%s\n", *++argv);
}

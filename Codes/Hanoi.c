/* Hanoi Tower */
#include <stdio.h>

void move(int n, char x, char y, char z)
{
	if (n == 1)
		printf("%c-->%c\n", x, z);
	else {
		move(n - 1, x, z, y);
		printf("%c-->%c\n", x, z);
		move(n - 1, y, x, z);
	}
}

main()
{
	int n;
	printf("Input disk number: \n");
	scanf("%d", &n);
	printf("The steps to move %d disks: \n", n);
	move(n, 'a', 'b', 'c');
}

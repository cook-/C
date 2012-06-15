/* output three numbers in order */
#include <stdio.h>
swap(int *p1, int *p2)
{
	int tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

sort(int *p1, int *p2, int *p3)
{
	if (*p1 > *p2)
		swap (p1, p2);
	if (*p1 > *p3)
		swap (p1, p3);
	if (*p2 > *p3)
		swap (p2, p3);
}

main()
{
	int a, b, c, *p1, *p2, *p3;
	printf("Input three numbers: \n");
	scanf("%d %d %d", &a, &b, &c);
	p1 = &a;
	p2 = &b;
	p3 = &c;
	sort(p1, p2, p3);
	printf("%d %d %d\n", a, b, c);
}

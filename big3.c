#include <stdio.h>

int bigger() {
	int a, b, c;

	printf("Enter three integer numbers: ");
	scanf("%d %d %d", &a, &b, &c);

	if (a >= b && a >= c)
		printf("The biggest number is: %d\n", a);
	else if (b >= a && b >= c)
		printf("The biggest number is: %d\n", b);
	else
		printf("The biggest number is: %d\n", c);

	return 0;
}


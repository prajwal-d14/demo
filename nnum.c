#include <stdio.h>

int natural() {
	int n, sum = 0;
	printf("Enter a positive integer: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; ++i)
		sum += i;

	printf("Sum = %d\n", sum);
	return 0;
}


#include <stdio.h>

int factorial() {
	int n;
	unsigned long long factorial = 1;

	printf("Enter a positive integer: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; ++i)
		factorial *= i;

	printf("Factorial of %d = %llu\n", n, factorial);
	return 0;
}


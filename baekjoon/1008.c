#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%.9f", (double)a / b);
	return 0;
}

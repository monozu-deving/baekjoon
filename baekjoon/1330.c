#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int A, B;
	scanf("%d %d", &A, &B);
	if (A > B) {
		printf(">\n");
	}
	else if (A < B) {
		printf("<\n");
	}
	else {
		printf("==\n");
	}
	return 0;
}
#include <stdio.h>

int main () {
	int n, last;
	scanf("%d", &n);

	for (int i = n; i >= 1; i = i / 10) {
		last = i % 10;
		printf("%d", last);
	}
	return 0;
}


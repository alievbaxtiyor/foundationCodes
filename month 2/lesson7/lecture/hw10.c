#include <stdio.h>

int main () {
	int a, b, count;
	scanf("%d%d", &a, &b);

	for (; count < 3 ;) {
		if (b % 2 != 0) {
			printf("%d\n", b);
			count = count + 1;
		}
		b = b - 1;
	}
	return 0;
}

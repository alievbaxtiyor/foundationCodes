#include <stdio.h>

int main () {
	char start = 'z', stop = 'a';
	int sum = -1;

	do {
		sum = sum * start;
		start--;
	} while (start >= stop);
	printf("%d", sum);
	return 0;
}

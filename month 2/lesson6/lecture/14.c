#include <stdio.h>

int main () {
	char start = 'a', stop = 'z';
	int sum;

	do {
		sum = sum + start;
		start++;
	} while (start <= stop);
	printf("%d", sum);
	return 0;
}

#include <stdio.h>

int main () {
	int start = 100, stop = 999, on, bir, yuz, sum;

	do {
		yuz = start / 100;
		on = start / 10 % 10;
		bir = start % 10;
		if (yuz * on * bir < 16) {
			printf("%d\n", start);
		}
		start++;
	} while (start <= stop);
	return 0;
}

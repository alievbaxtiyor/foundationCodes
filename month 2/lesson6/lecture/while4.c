#include <stdio.h>

int main () {
	int start, stop;
	start = 100;
	stop = 999;

	do {
		int yuz, on, bir;
		yuz = start / 100;
		on = start / 10 % 10;
		bir = start % 10;
		if (yuz == 3 || on ==3 || bir ==3) {
			printf("%d\n", start);
		}
		start++;
	} while (start <= stop);
	return 0;
}

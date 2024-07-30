#include <stdio.h>

int main () {
	int start, stop;
	start = 100;
	stop = 999;

	do {
		int bir, on, yuz;
		bir = start % 10;
		on = start / 10 % 10;
		yuz = start / 10;
		if (bir == on || bir == yuz || on == yuz) {
			printf("%d\n", start);
		}
		start++;
	} while (start <= stop);
	return 0;
}


#include <stdio.h>

int main () {
	int start = 1000, stop = 9999, count = 1, ming, yuz, on, bir, sum;

	do {
		ming = start / 1000;
		yuz = start / 100 % 10;
		on = start / 10 % 10;
		bir = start % 10;
		sum = ming + yuz + on + bir;
		if (sum > 10 && sum < 15) {
			printf("%d\n", start);
			count = count + 1;
		}
		if (count == 4) {
			break;
		}
		start++;
	} while (start <= stop);
	return 0;
}

#include <stdio.h>

int main () {
	int start, stop;
	start = -450;
	stop = 250;

	while (start <= stop) {
		printf("%d\n", start);
		start++;
	}
	return 0;
}

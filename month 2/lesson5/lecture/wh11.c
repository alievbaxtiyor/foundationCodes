#include <stdio.h>

int main () {
	int start, stop;
	start = 25;
	stop = 690;

	while (start <= stop) {
		if (start % 5 == 0 && start % 9 ==0) {
			printf("%d\n", start);
		}
		start++;
	}
	return 0;
}

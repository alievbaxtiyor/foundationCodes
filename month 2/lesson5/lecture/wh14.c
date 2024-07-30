#include <stdio.h>

int main () {
	int start, stop;
	start = 1;
	printf("Son kiriting: ");
	scanf("%d", &stop);

	while (start <= stop) {
		printf("%d\n", start*start);
		start++;
	}
	return 0;
}

#include <stdio.h>
#include <math.h>

int main () {
	int n, start = 1;
	printf("N sonini kiriting: ");
	scanf("%d", &n);

	while (n >= start) {
		printf("%d\n", start*start*start);
		start++;
	}
	return 0;
}

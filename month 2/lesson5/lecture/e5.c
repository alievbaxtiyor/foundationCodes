#include <stdio.h>

int main () {
	int a, b, sum;
	printf("Sonlarni kiriting: ");
	scanf("%d%d", &a, &b);
	if (a<b) {
		while (a <= b) {
			sum = sum + a;
			a++;
		}
		printf("Sum = %d", sum);
	}
	return 0;
}

#include <stdio.h>

int main () {
	int a, b;
	printf("Sonlarni kiriting: ");
	scanf("%d%d", &a, &b);

	do {
		if(a % 6 == 0 && a % 9 != 0) {
			printf("%d\n", a);
		}
		a++;
	} while (a <= b);
	return 0;
}

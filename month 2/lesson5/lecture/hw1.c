#include <stdio.h>

int main () {
	int a, b;
	printf("Sonlarni kiriting: ");
	scanf("%d%d", &a, &b);

	while(a <= b) {
		printf("%d\n", a);
		a++;
	}
	return 0;
}

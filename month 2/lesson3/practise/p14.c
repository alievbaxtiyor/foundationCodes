#include <stdio.h>

int main () {
	int a, b, c;
	printf("Sonlarni kiriting:\n");
	scanf("%d%d%d", &a, &b, &c);
	if (a>b && a>c && b>c) {
		printf("Kattasi %d kichigi %d", a, c);
	} else if(a>b && a>c && c>b) {
		printf("Kattasi %d kichigi %d", a, b);
	} else if(b>a && b>c && a>c) {
		printf("Kattasi %d kichigi %d", b, c);
	} else if (b>a && b>c && c>a) {
		printf("Kattasi %d kichigi %d", b, a);
	} else if (c>a && c>b && a>b) {
		printf("Kattasi %d kichigi %d", c, b);
	} else {
		printf("Kattasi %d kichigi %d", c, a);
	}
}

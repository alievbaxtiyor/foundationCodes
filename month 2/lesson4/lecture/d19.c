#include <stdio.h>

int main () {
	int b;
	char a, p;
	printf("Harf va sonni kiriting:");
	scanf("%c%d", &a, &b);

	switch (a) {
		case 65 ... 90:
			p = a + b;
			printf("%c", p);
			break;
		case 97 ... 122:
			p = a + b;
			printf("%c", p);
			break;
		default:
			printf("Harf kiritmadingiz");
	}
	return 0;
}

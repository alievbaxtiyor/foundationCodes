#include <stdio.h>

int main () {
	char harf;
	printf("Harf kiriting:");
	scanf("%c", &harf);
	switch (harf) {
		case 65 ... 90:
			printf("Katta harf");
			break;
		case 97 ... 122:
			printf("Kichik harf");
			break;
		default:
			printf("Bu harf emas");
	}
	return 0;
}

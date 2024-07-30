#include <stdio.h>

int main () {
	int k;
	printf("Son kiriting: ");
	scanf("%d", &k);

	switch (k) {
		case 0 ... 9:
			printf("Bir xonali son");
			break;
		case 10 ... 99:
			printf("Ikki xonali son");
			break;
		case 100 ... 999:
			printf("Uch xonali son");
			break;
		case 1000 ... 9999:
			printf("To'rt xonali son");
			break;
		case 10000 ... 99999:
			printf("Besh xonali son");
			break;
		default:
			printf("Juda katta son");
	}
	return 0;
}

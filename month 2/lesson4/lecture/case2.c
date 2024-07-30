#include <stdio.h>

int main () {
	int k;
	scanf("%d", &k);
	switch (k) {
		case 1:
			printf("Yomon");
			break;
		case 2:
			printf("Rasvo");
			break;
		case 3:
			printf("Qoniqarsiz");
			break;
		case 4:
			printf("Yaxshi");
			break;
		case 5:
			printf("Alo");
			break;
		default:
			printf("Xato");
	}
	return 0;
}


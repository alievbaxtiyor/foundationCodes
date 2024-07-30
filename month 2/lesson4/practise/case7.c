#include <stdio.h>

int main () {
	int a;
	char k;
	printf(" Kilogramm\n Milligramm\n Gramm\n Tonna\n Sentner\n Birlikni bosh harfini kiriting: ");
	scanf("%c", &k);

	switch (k) {
		case 'k':
			scanf("%d", &a);
			printf("%d kilogramm", a);
			break;
		case 'm':
			scanf("%d", &a);
			printf("%d kilogramm", a/1000000);
			break;
		case 'g':
			scanf("%d", &a);
			printf("%d kilogramm", a/1000);
			break;
		case 't':
			scanf("%d", &a);
			printf("%d kilogramm", a*1000);
			break;
		case 's':
			scanf("%d", &a);
			printf("%d kilogramm", a/100);
			break;
		default:
			printf("Error");
	}
	return 0;
}

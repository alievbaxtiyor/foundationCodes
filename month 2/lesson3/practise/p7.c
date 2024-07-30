#include <stdio.h>

int main () {
	int a;
	printf("Zaryadkani kiriting:");
	scanf("%d", &a);
	if (a<=20) {
		printf("Kam");
	} else if (a>20 && a<81) {
		printf("Yetarli");
	} else if (a<101 && a>80) {
		printf("To'liq");
	} else {
		printf("Error");
	}
}

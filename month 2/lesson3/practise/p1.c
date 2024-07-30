#include <stdio.h>

int main () {
	char a;
	scanf("%c", &a);
	if (a>47 && a<58) {
		printf("Son");
	} else if (a>64 && a<91 || a>96 && a<123) {
		printf("Harf");
	} else {
		printf("Belgi");
	}
}

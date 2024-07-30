#include <stdio.h>

int main () {
	int a;
	printf("Sonni kiriting:");
	scanf("%d", &a);
	if (a % 7 == 0 && a % 4 == 0) {
		printf("FIZZ-BUZZ");
	} else if (a % 4 == 0 ) {
		printf("BUZZ");
	} else if (a % 7 == 0){
		printf("FIZZ");
	} else {
		printf("NO FIZZ NO BUZZ");
	}
}

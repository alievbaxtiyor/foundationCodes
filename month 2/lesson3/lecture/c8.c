#include <stdio.h>

int main () {
	char belgi;
	printf("Harfni kiriting:");
	scanf("%c", &belgi);
	if (belgi == 97 || belgi == 101 || belgi == 105 ||  belgi == 111 || belgi == 117 || belgi == 65 || belgi == 69 || belgi == 73 || belgi == 79 || belgi == 85) {
		printf("Unli harf");
	} else {
		printf("Undosh harf");
	}
}

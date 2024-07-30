#include <stdio.h>

int main () {
	int k, a;
	printf("1-destimetr\n 2-kilometr\n 3-metr\n 4-millimetr\n 5-santimetr\nSonni kiriting: ");
	scanf("%d", &k);
	switch (k) {
		case 1:
			scanf("%d", &a);
			printf("%d metr", a/10);
			break;
		case 2:
			scanf("%d", &a);
			printf("%d metr", a*1000);
			break;
		case 3:
			scanf("%d", &a);
			printf("%d metr", a);
			break;
		case 4:
			scanf("%d", &a);
			printf("%d metr", a/1000);
			break;
		case 5:
			scanf("%d", &a);
			printf("%d metr", a/100);
			break;
		default:
			printf("Error");
	}
	return 0;
}

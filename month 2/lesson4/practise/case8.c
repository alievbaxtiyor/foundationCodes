#include <stdio.h>

int main () {
	int day, month;
	printf("Kun va oyni kiriting:");
	scanf("%d%d", &day, &month);

	switch (month) {
		case 1:
			printf("%d-yanvar", day);
			break;
		case 2:
			printf("%d-fevral", day);
			break;
		case 3:
			printf("%d-mart", day);
			break;
		case 4:
			printf("%d-aprel", day);
			break;
		case 5:
			printf("%d-may", day);
			break;
		case 6:
			printf("%d-iyun", day);
			break;
		case 7:
			printf("%d-iyul", day);
			break;
		case 8:
			printf("%d-avgust", day);
			break;
		case 9:
			printf("%d-sentyabr", day);
			break;
		case 10:
			printf("%d-oktyabr", day);
			break;
		case 11:
			printf("%d-noyabr", day);
			break;
		case 12:
			printf("%d-dekabr", day);
			break;
		default:
			printf("Sanalar notogri kiritildi");
	}
	return 0;
}

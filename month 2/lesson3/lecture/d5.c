#include <stdio.h>

int main(){
	int a;
	printf("Sonni kiriting:");
	scanf("%d",&a);
	if (a % 3 == 0 && a % 6 == 0){
		printf("Good");
	} else {
		printf("Bad");
	}
}

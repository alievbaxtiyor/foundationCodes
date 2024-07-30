#include <stdio.h>
#include <math.h>

int main (){
	int a, a2, a4, a8;
	printf("Sonni kiriting:\n");
	scanf("%d", &a);
	a2 = pow(a,2);
	a4 = pow(a,4);
	a8 = pow(a,8);
	printf("Kiritilgan sonning \n 2-darajasi %d \n 4-darajasi %d \n 8-darajasi %d", a2, a4, a8);
}
	

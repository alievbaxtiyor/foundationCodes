#include <stdio.h>
#include <math.h>

int main (){
	int a, b, sum, add, a2, b2;
	printf("Sonlarni kiriting:\n");
	scanf("%d%d", &a, &b);
	sum = a * b;
	add = a + b;
	a2 = pow(a,2);
	b2 = pow(b,2);
	printf("Kiritilgan sonlarning \n ko'paytmasi %d \n yig'indis %d \n 1-sonning kvadrati %d \n 2-sonning kvadrati %d", sum, add, a2, b2);
}

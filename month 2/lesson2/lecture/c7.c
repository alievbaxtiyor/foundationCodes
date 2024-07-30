#include <stdio.h>
#include <math.h>

int main (){
	int a, b, c;
	float d;
	printf("Sonlarni kiriting:\n");
	scanf("%d%d%d", &a, &b, &c);
	d = (a + b + c)/3.0;
	printf("Natija:%.2f", d);
}

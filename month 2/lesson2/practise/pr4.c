#include <stdio.h>
#include <math.h>

int main (){
	int d;
	float pi, l;
	printf("Aylananing diametrini kiriting:");
	scanf("%d", &d);
	pi = 3.14;
	l = d * pi;
	printf("Aylananing \n 2-xonasi %.2f \n 4-xonasi %.4f \n 6-xonasi %.6f", l, l, l);

}

#include <stdio.h>
#include <math.h>

int main (){
	int x, x3, x2, sum;
	printf("x ni kiriting:");
	scanf("%d", &x);
	x3 = pow(x,3);
	x2 = pow(x,2);
	sum = x3 + x2;
	printf("Yi'gindisi %d", sum);
}

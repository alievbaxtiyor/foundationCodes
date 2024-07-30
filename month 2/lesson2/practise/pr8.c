#include <stdio.h>
#include <math.h>

int main (){
	int x;
	float y;
	printf("X ning qiymati:");
	scanf("%d", &x);
	y = pow(3*x,6)-pow(6*x,2)-7;
	printf("%f",y);
}

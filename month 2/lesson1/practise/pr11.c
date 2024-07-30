#include <stdio.h>
#include <math.h>

int main (){
	float y, x, y1, y2, y3, y4;
	x = 4;
	y1 = 4 * (x-3);
	y2 = 6 - 7 * (x-3);
	y3 = 5 + 2;
	y4 = pow(y2,y3);
	y = pow(y1,y4);
	printf("Funksiya qiymati %f", y);
}

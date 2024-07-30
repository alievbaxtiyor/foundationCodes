#include <stdio.h>

int main () {
	int boyi, eni, p, p2;
	boyi = 19;
	eni = 23;
	p = 2*(boyi+eni);
	eni = eni-4;
	boyi = boyi+8;
	p2 = 2*(boyi+eni);
	printf("Dastlabki qiymatdagi perimetr %d keyingi qiymatlardagisi %d", p, p2);
}

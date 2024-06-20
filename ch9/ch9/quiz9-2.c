#include <stdio.h>

void swap4(double* pa, double* pb);
void line_up(double* maxp, double* midp, double* minp);

int quiz9_2_4() {
	double max, mid, min;

	printf("실수값 3개 입력 : ");
	scanf("%lf %lf %lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("정렬된 값 출력 : %.1lf, %.1lf, %.1lf \n", max, mid, min);


	return 0;
}

void swap4(double* pa, double* pb) {
	double temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(double* maxp, double* midp, double* minp) {
	if (*maxp < *minp) swap4(maxp, minp);

	if (*maxp < *midp) swap4(maxp, midp);

	if (*midp < *minp) swap4(midp, minp);
}

#include <stdio.h>

int main9_6() {
	int a = 10;
	int* p = &a;
	double* pd;

	pd = p;
	printf("%lf \n", *pd);

	return 0;
}
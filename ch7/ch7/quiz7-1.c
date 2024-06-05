#include <stdio.h>

double average(double a, double b);

void quiz7_1_1() {
	double res;
	res = average(1.5, 3.4);
	
	printf("%.1lf \n", res);
}

double average(double a, double b) {
	double temp;
	temp = a + b;
	return (temp / 2.0);
}





double centi_to_meter(double a);

void quiz7_1_3() {
	double res;

	res = centi_to_meter(187);
	printf("%.2lfm \n", res);
}

double centi_to_meter(double a) {
	return a * 0.01;
}
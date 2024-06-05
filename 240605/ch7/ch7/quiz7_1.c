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


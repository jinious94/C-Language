#include <stdio.h>

void sum_2(int n);

int quiz7_2_2() {
	sum_2(10);
	sum_2(100);
	return 0;
}

void sum_2(int n) {
	int sum = 0;
	for (int i = 0; i < n + 1; i++) {
		sum += i;
	}

	printf("1부터 %d까지의 합은 %d입니다. \n", n, sum);
}


int func(int n);
int poly(int n);
int quiz7_2_3() {
	printf("%d \n", func(-3));

	return 0;
}

int func(int n) {
	int res;
	res = poly(n);
	if (res >= 0) return res;
	else return -res;
}

int poly(int n) {
	return ((2 * n * n) + (3 * n));
}




int rec_func(int n);
int quiz_7_2_4() {
	int num = rec_func(100);
	printf("1부터 10까지 더한 값 : %d \n", num);
}
int rec_func(int n) {
	if (n == 1) return 1;

	return n + rec_func(n - 1);
}

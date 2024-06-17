#include <stdio.h>

int sum(int x, int y);

void main7_1() {
	int a = 10, b = 20;
	int result;

	result = sum(a, b);
	printf("result : %d \n", result);
}

int sum(int x, int y) {
	int temp;

	temp = x + y;

	return temp;
}
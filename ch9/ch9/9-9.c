#include <stdio.h>

void swap3(int x, int y);

int main9_9() {
	int a = 10, b = 20;

	swap3(a, b);
	printf("a:%d, b:%d \n", a, b);

	return 0;
}

void swap3(int x, int y) {
	int temp;

	temp = x;
	x = y;
	y = temp;
}
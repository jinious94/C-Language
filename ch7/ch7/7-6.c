#include <stdio.h>

void fruit_2(int count);

int main7_6() {
	fruit_2(1);

	return 0;
}

void fruit_2(int count) {
	printf("apple \n");
	if (count == 3) return;
	fruit_2(count + 1);
}
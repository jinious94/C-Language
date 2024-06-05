#include <stdio.h>

void fruit_3(int count);

int main7_7() {
	fruit_3(1);

	return 0;
}

void fruit_3(int count) {
	printf("apple \n");
	if (count == 3) return;
	fruit_3(count + 1);
	printf("jam \n");
}
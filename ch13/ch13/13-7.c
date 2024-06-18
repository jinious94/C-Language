#include <stdio.h>

void add_ten2(int* pa);

int main13_7() {
	int a = 10;

	add_ten2(&a);
	printf("a : %d \n", a);

	return 0;
}

void add_ten2(int* pa) {
	*pa = *pa + 10;
}

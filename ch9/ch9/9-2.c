#include <stdio.h>

int main9_2() {

	int a;
	int* pa;

	pa = &a;
	*pa = 10;

	printf("�����ͷ� a �� ��� : %d \n", *pa);
	printf("���������� a �� ��� : %d \n", a);

	return 0;
}
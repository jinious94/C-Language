#include <stdio.h>

int main9_5() {

	char ch;
	int in;
	double db;

	char* pc = &ch;
	int* pi = &in;
	double* pd = &db;

	printf("char�� ������ �ּ� ũ��: %d \n", sizeof(&ch));
	printf("int�� ������ �ּ� ũ��: %d \n", sizeof(&in));
	printf("double�� ������ �ּ� ũ��: %d \n", sizeof(&db));
}
#include <stdio.h>

int get_num(void);

void main7_2() {
	int result;

	result = get_num();
	printf("반환값 : %d \n", result);
}

int get_num() {
	int num;

	printf("양수 입력 : ");
	scanf("%d", &num);

	return num;
}
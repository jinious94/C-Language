#include <stdio.h>

int get_num(void);

void main7_2() {
	int result;

	result = get_num();
	printf("��ȯ�� : %d \n", result);
}

int get_num() {
	int num;

	printf("��� �Է� : ");
	scanf("%d", &num);

	return num;
}
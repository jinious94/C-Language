#include <stdio.h>

int main12_1() {
	// p -> 16���� �ּ�
	printf("apple�� ����� ���� �ּ� �� : %p \n", "apple");
	printf("�� ��° ������ �ּ� �� : %p \n", "apple" + 1);
	printf("ù ��° ���� : %c \n", *"apple");
	printf("�� ��° ���� : %c \n", *("apple" + 1));
	printf("�迭�� ǥ���� �� ��° ���� : %c \n", "apple"[2]);

	return 0;
}
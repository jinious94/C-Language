#include <stdio.h>

void func(int (*fp) (int, int));
int sum2(int a, int b);
int mul(int a, int b);
int max(int a, int b);

int main15_8() {
	int sel;

	printf("01 두 정수의 합 \n");
	printf("02 두 정수의 곱 \n");
	printf("03 두 정수 중에서 큰 값 계산 \n");
	printf("원하는 연산을 선택하세요 : ");
	scanf("%d", &sel);

	switch (sel) {
		case 1: func(sum2); break;
		case 2: func(mul); break;
		case 3: func(max); break;
	}

	return 0;
}

void func(int (*fp) (int, int)) {
	int a, b;
	int res;

	printf("두 정수의 값을 입력하세요 : ");
	scanf("%d %d", &a, &b);
	res = fp(a, b);
	printf("결괏값은 : %d \n", res);

}

int sum2(int a, int b)
{
	return a + b;
}

int mul(int a, int b)
{
	return a * b;
}

int max(int a, int b)
{
	return (a > b) ? a : b;
}


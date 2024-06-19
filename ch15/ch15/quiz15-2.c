#include <stdio.h>

int quiz15_2_2() {
	int ary[5] = { 10, 20, 30, 40, 50 };
	void* vp = ary;

	printf("%d \n", *((int*)vp + 2));

	return 0;
}


int add2(int a, int b) { return (a + b); }
int sub2(int a, int b) { return (a - b); }
int mul2(int a, int b) { return (a * b); }

int quiz15_2_3() {
	int (*pary[3])(int, int) = { add2, sub2, mul2 };
	int i, res = 0;

	for (i = 0; i < 3; i++) {
		res += pary[i](2, 1);
	}

	printf("%d \n", res); // 3 + 1 + 2 = 6

	return 0;
}




void swap(char*, void*, void*);

int quiz15_2_4() {
	int age1, age2;
	double height1, height2;

	printf("첫 번째 사람의 나이와 키 입력 : ");
	scanf("%d %lf", &age1, &height1);

	printf("두 번째 사람의 나이와 키 입력 : ");
	scanf("%d %lf", &age2, &height2);
	
	swap("int", &age1, &age2);
	swap("double", &height1, &height2);

	printf("첫 번째 사람의 나이와 키 : %d, %.1f \n", age1, height1);
	printf("두 번째 사람의 나이와 키 : %d, %.1f", age2, height2);

	return 0;
}

void swap(char* type, void* a, void* b)
{
	if (type == "int") {
		int temp = *(int*)a;
		*(int*)a = *(int*)b;
		*(int*)b = temp;
	}
	else if (type == "double") {
		double temp = *(double*)a;
		*(double*)a = *(double*)b;
		*(double*)b = temp;
	}
}

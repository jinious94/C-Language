#include <stdio.h>

int main12_5() {
	char str[80];

	printf("공백이 포함된 문자열 입력 : ");
	fgets(str, sizeof(str), stdin);
	printf("입력된 문자열은 %s입니다 \n", str);

	return 0;
}
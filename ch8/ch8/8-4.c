#include <stdio.h>

int main8_4() {
	char str[80] = "applejam";
	printf("최초 문자열 : %s \n", str);
	printf("문자열 입력 : ");
	scanf("%s", str);
	printf("입력 후 문자열 : %s \n", str);

	return 0;
}
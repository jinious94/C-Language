#include <stdio.h>
#include <string.h>

int quiz8_2_3() {
	char str1[80], str2[80];
	char temp[80];

	printf("두 문자열 입력 : ");
	scanf("%s %s", str1, str2);
	printf("바꾸기 전 : %s, %s \n", str1, str2);
	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
	printf("바꾼 후 : %s, %s \n", str1, str2);

	return 0;
}

int quiz8_2_4() {
	char str[80];
	int count = 0;

	printf("문장 입력 : ");
	gets(str);

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + 32;
			count++;
		}
	}

	printf("바뀐 문장 : %s \n", str);
	printf("바뀐 문자 수 : %d \n", count);
}
#include <stdio.h>
#include <string.h>

int quiz8_2_3() {
	char str1[80], str2[80];
	char temp[80];

	printf("�� ���ڿ� �Է� : ");
	scanf("%s %s", str1, str2);
	printf("�ٲٱ� �� : %s, %s \n", str1, str2);
	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
	printf("�ٲ� �� : %s, %s \n", str1, str2);

	return 0;
}

int quiz8_2_4() {
	char str[80];
	int count = 0;

	printf("���� �Է� : ");
	gets(str);

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + 32;
			count++;
		}
	}

	printf("�ٲ� ���� : %s \n", str);
	printf("�ٲ� ���� �� : %d \n", count);
}
#include <stdio.h>

int quiz12_1_3() {
	char ani[20];
	char why[80];
	printf("�����ϴ� ���� : ");
	scanf("%s", ani);

	getchar();

	printf("�����ϴ� ���� : ");
	fgets(why, sizeof(why), stdin);
	printf("%s is %s", ani, why);

	return 0;
}
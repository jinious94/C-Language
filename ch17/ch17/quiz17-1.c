#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct book {
	char title[80];
	char author[20];
	int page;
	double price;
};

int quiz17_1_1() {
	struct book b1 = { "�巡�ﺼ", "�ƹ���", 30, 35000 };
	printf("å �̸� : %s \n", b1.title);
	printf("å ���� : %s \n", b1.author);
	printf("������ �� : %d \n", b1.page);
	printf("���� : %.1lf \b \n", b1.price);
	

	strcpy(b1.title, "���ǽ�");
	printf("å �̸� : %s \n", b1.title);

	return 0;
}

struct cracker {
	char* name;
	int price;
	int calories;
};

int quiz17_1_4() {
	struct cracker c1;

	char temp[80];
	/*printf("������ �̸��� �Է��ϼ��� : ");
	gets(temp);*/

	/*c1.name = (char*)malloc(strlen(temp) + 1);
	strcpy(c1.name, temp);*/

	c1.name = "�ٻ��";

	printf("%s�� ���ݰ� ������ �Է��ϼ��� : ", c1.name);
	scanf("%d %d", &(c1.price), &(c1.calories));

	printf("%s�� ���� : %d�� \n", c1.name, c1.price);
	printf("%s�� ���� : %dkcal \n", c1.name, c1.calories);

	free(c1.name);
	return 0;
}
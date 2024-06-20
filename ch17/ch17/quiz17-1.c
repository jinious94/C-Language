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
	struct book b1 = { "드래곤볼", "아무개", 30, 35000 };
	printf("책 이름 : %s \n", b1.title);
	printf("책 저자 : %s \n", b1.author);
	printf("페이지 수 : %d \n", b1.page);
	printf("가격 : %.1lf \b \n", b1.price);
	

	strcpy(b1.title, "원피스");
	printf("책 이름 : %s \n", b1.title);

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
	/*printf("과자의 이름을 입력하세요 : ");
	gets(temp);*/

	/*c1.name = (char*)malloc(strlen(temp) + 1);
	strcpy(c1.name, temp);*/

	c1.name = "바사삭";

	printf("%s의 가격과 열량을 입력하세요 : ", c1.name);
	scanf("%d %d", &(c1.price), &(c1.calories));

	printf("%s의 가격 : %d원 \n", c1.name, c1.price);
	printf("%s의 열량 : %dkcal \n", c1.name, c1.calories);

	free(c1.name);
	return 0;
}
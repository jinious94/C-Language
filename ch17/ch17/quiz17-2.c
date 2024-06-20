#include <stdio.h>
#include <string.h>

struct marriage {
	char name[20];
	int age;
	char gender;
	double height;
};

int quiz17_2_1() {
	struct marriage m1 = { "Andy", 22, 'm', 187.5 };
	struct marriage* mp = &m1;

	printf("이름 : %s \n", mp->name);
	printf("나이 : %d \n", mp->age);
	printf("성별 : %c \n", mp->gender);
	printf("키 : %.1lf \n", mp->height);

	return 0;
}




typedef struct {
	int id;
	char name[80];
	int kor;
	int eng;
	int math;
	int total;
	double avg;
	char grade;
} Student;

void print_stduents(Student* sp);
void sort_students(Student* sp);

int quiz17_2_4() {
	Student students[5];
	for (int i = 0; i < 5; i++) {
		printf("학번 : ");
		scanf("%d", &students[i].id);

		fgetc(stdin);

		char temp[80];
		printf("이름 : ");
		gets(temp);
		strcpy(students[i].name, temp);

		printf("국어, 영어, 수학 점수 : ");
		scanf("%d %d %d", &students[i].kor, &students[i].eng, &students[i].math);

		printf("\n\n");

		students[i].total = students[i].kor + students[i].eng + students[i].math;
		students[i].avg = students[i].total / 3.0;

		if (students[i].avg >= 90) students[i].grade = 'A';
		else if (students[i].avg < 90 && students[i].avg >= 80) students[i].grade = 'B';
		else if (students[i].avg < 80 && students[i].avg >= 70) students[i].grade = 'C';
		else students[i].grade = 'F';	
	}

	printf("#정렬 전 데이터... \n\n");
	print_stduents(students);
	sort_students(students);
	printf("#정렬 후 데이터... \n\n");
	print_stduents(students);

	return 0;
}

void print_stduents(Student* sp) {
	for (int i = 0; i < 5; i++) {
		printf("%5d %s %5d %5d %5d %5d %.1lf %5c \n\n",
			(sp + i) -> id,
			(sp + i) -> name,
			(sp + i) -> kor,
			(sp + i) -> eng,
			(sp + i) -> math,
			(sp + i) -> total,
			(sp + i) -> avg,
			(sp + i) -> grade
		);
	}
}

void sort_students(Student* sp) {
	for (int i = 0; i < 5; i++) {
		Student temp;
		for (int j = 0; j < 5 - i - 1 ; j++) {
			if ((sp + j)->total < (sp + j + 1)->total) {
				temp = *(sp + j);
				*(sp + j) = *(sp + j + 1);
				*(sp + j + 1) = temp;
			}
		}
	}
}

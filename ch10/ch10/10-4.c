int main10_4() {
	int ary[5] = { 10, 20, 30, 40, 50 };
	int* pa = ary;
	int* pb = pa + 3;

	printf("pa(배열의 1번째 요소 주소) : %u \n", pa);
	printf("pb(배열의 4번째 요소 주소) : %u \n", pb);

	pa++;
	printf("pb - pa (4번째 요소 주소 - 2번째 요소 주소) : %u \n", pb - pa);

	printf("앞에 있는 배열 요소의 값 출력 : ");
	
	if (pa < pb) printf("%d \n", *pa);
	else printf("%d \n", *pb);

	return 0;
}
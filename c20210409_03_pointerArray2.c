#define _CRT_SECURE_NO_WARNINGS //scanf 함수를 사용하기 위해서
#include<stdio.h>







int main() {
	//이차 배열의 포인터
	//int arr[][3] = {{ 1, 2, 3 }, { 4, 5, 6 }};
	//int* p = arr;
	//int size = sizeof(arr) / sizeof(int);
	//
	//for (int i = 0; i < size; i++) {
	//	printf("%d  ", *p++);
	//}

	//두명의 학생의 국, 영, 수 점수를 배열로 선언 후 합계, 평균을 구하시오.
	int score[][3] = { {90, 89, 78}, {89, 99, 100} };
	int sum = 0; double avg;
	int (*p)[3] = score;
	printf("%p %p\n", p, p +1);

	for (int i = 0; i < 2; i++) {
		sum = (*p)[0] + (*p)[1] + (*p)[2];
		avg = sum / 3.;
		printf("합계: %d 평균: %.2f\n", sum, avg);
		p++;
	}
	

	return 0;
}
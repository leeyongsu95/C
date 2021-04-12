#define _CRT_SECURE_NO_WARNINGS //scanf 함수를 사용하기 위해서
#include<stdio.h>



int main() {
	//다차원 배열
	//int arr[3][3];
	////arr[0][0] = 1;	arr[0][1] = 2;	arr[0][2] = 3;
	////arr[1][0] = 4;	arr[1][1] = 5;	arr[1][2] = 6;

	int a = 0;

	for (int i = 0;  i < 3;  i++){     //i는 행
		for (int j = 0; j < 3; j++) {  //j는 열
			arr[i][j] = (3 * i) + j + 1;
			printf("%d\n", arr[i][j]);
		}
	}


	//반 학생의 국어,영어,수학 점수를 입력 받아 번호 대로 
	//배열에 저장하고 반 번호 순서대로 총점과
	//평균을 출력하는 프로그램을 작성하시오
	//➢ 예시)
	//1번 국어, 영어, 수학 : 85 76 90
	//2번 국어, 영어, 수학 : 90 75 88
	//……
	//1번 합계 : 251점 평균 : 83.67
	//2번 합계 : 253점 평균 : 84.33
	//……
	//국어 / 수학 / 영어의 평균도 구해봅시다


	int score[2][3];
	int rsize = sizeof(score) / sizeof(score[0]); //행
	int csize = sizeof(score[0]) / sizeof(int);    //열
	//printf("%d %d\n", rsize, csize);
	int sum = 0;

	for (int i = 0; i < rsize; i++) {
		printf("------------------------------------------\n");
		printf("%d번 학생의 국어, 영어, 수학 점수: ", i + 1);

		for (int j = 0; j < csize; j++) {
			scanf("%d", &score[i][j]);
		}
	}
	for (int i = 0; i < rsize; i++) {
		for (int j = 0; j < csize; j++) {
			sum += score[i][j];
		}
		//합계, 평균
		printf("------------------------------------------\n");
		printf("%d 합계: %d 평균: %.2f\n", i + 1, sum, (double)sum / csize);
		sum = 0; //sum 초기화 합계가 누적되었기 때문에.
	}
	printf("------------------------------------------\n");
	printf("총합: %d 국어, 수학, 영어의 평균: %.2f\n", sum, (double)sum / rsize);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS //scanf 함수를 사용하기 위해서
#include<stdio.h>
#define LEN 5


int main() {
	//배열 : array
	//int arr[3];
	////arr[0] = 1; arr[1] = 2; arr[2] = 3;

	//for (int i = 0; i < 3; i++) {
	//	arr[i] = (i + 1) * 10;
	//}

	////반복문을 이용해서 출력
	//for (int i = 0; i < 3; i++) {
	//	printf("%d\n", arr[i]);
	//}
	
	
	//실습)
	//double arr[5];
	////배열의 크기 구하기
	//int size = sizeof(arr) / sizeof(double);
	//printf("사이즈:%d\n", size);


	////반복문을 이용해서 초기화.
	//for (int i = 0; i < size; i++) {
	//	arr[i] = i + 1.1;
	//}
	////반복문을 이용해서 출력.
	//for (int i = 0; i < size; i++) {
	//	printf("%.1f\n", arr[i]);
	//}
	
	
	//문자형 배열
	//char arr[] = {'L', 'E', 'E', 'Y', 'O', 'N', 'G', 'S', 'U' };
	//int size = sizeof(arr) / sizeof(char);
	//
	//printf("사이즈: %d\n", size);

	//for (int i = 0; i < size; i++) {
	//	printf("%c", arr[i]);
	//}

	//배열값의 합
	//c는 정적배열
	//a에 값이 할당되는 시점은 런타임시
	//int a = 5;
	//const int a = 5; //상수: 변경이 불가능
	//#define에 정의된 매크로 상수: 컴파일되기 전에 대체
	
	//int arr[LEN], sum = 0;
	//int size = sizeof(arr) / sizeof(int);
	//
	////입력 받아서 합계 구하기.
	//for (int i = 0; i < size; i++) {
	//	printf("[%d] 정수는? :", i + 1);
	//	scanf("%d", &arr[i]);
	//}
	////출력하기
	//for (int i = 0; i < size; i++) {
	//	printf("배열: %d || 주소값: %p\n", arr[i], &arr[i]);
	//}

	//for (int i = 0; i < size; i++) {
	//	sum += arr[i];
	//}
	//printf("배열의 합계: %d\n", sum);
	
	//실습) 반 학생의 점수를 입력 받아 번호대로 배열에 저장하고 반 번호 순서대로
	// 출력하는 프로그램 구현.
	//예시) 1번 점수: 90 
	//      2번 점수: 88
	// 1번은 90점 2번은 88점
	//추가) 1)합계와 평균 출력
	//      2)원하는 학생번호를 입력하면 해당학생의 점수를 출력

	//int score[3], sum = 0;
	//int size = sizeof(score) / sizeof(int);
	//int no;
	//char quit;

	////점수 입력
	//for (int i = 0; i < size; i++) {
	//	printf("%d번 점수는? :", i + 1);
	//	scanf("%d", &score[i]);
	//}
	//printf("------------------------------\n");
	//
	////합계 및 평균
	//for (int i = 0; i < size; i++) {
	//	printf("%d번 점수: %d\n", i + 1, score[i]);
	//	sum += score[i];
	//}
	//printf("------------------------------\n");
	//printf("합계: %d\n", sum);
	//printf("평균: %.2f\n", (double)sum/size);
	//printf("------------------------------\n");
	//
	////검색

	////while 방법
	//while (1) {
	//	printf("검색할 번호를 입력하세요\n");
	//	scanf("%d", &no); 
	//	getchar(); //엔터처리
	//	//잘못된 번호
	//	if (no < 1 || no > size) {
	//		printf("없는 번호입니다.");
	//		continue; //처음으로 다시 돌아감 계속진행
	//	}
	//	printf("점수는 %d\n", score[no - 1]);
	//	printf("------------------------------\n");
	//	printf("종료하시겠습니까?(q)\n");
	//	scanf("%c", &quit);
	//	if (quit == 'q') break;
	//}

	////do while 방법
	//do {
	//	printf("검색할 번호를 입력하세요\n");
	//	scanf("%d", &no);
	//	getchar(); //엔터처리
	//	//잘못된 번호
	//	if (no < 1 || no > size) {
	//		printf("없는 번호입니다.");
	//		continue; //처음으로 다시 돌아감 계속진행
	//	}
	//	printf("점수는 %d\n", score[no - 1]);
	//	printf("------------------------------\n");
	//	printf("종료하시겠습니까?(q)\n");
	//	scanf("%c", &quit);
	//} while (quit != 'q');

	//피보나치의 수열 구하기
	//0 1 1 2 3 4 8 13 .....
	//int fibo[20];
	//fibo[0] = 0; fibo[1] = 1;
	//int size = sizeof(fibo) / sizeof(int);
	////printf("%d", size);
	//
	//for (int i = 2; i < size; i++) {
	//	fibo[i] = fibo[i - 2] + fibo[i - 1];
	//}
	//for (int i = 0; i < size; i++) {
	//	printf("%d\n", fibo[i]);
	//}
	return 0;
}
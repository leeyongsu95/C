#define _CRT_SECURE_NO_WARNINGS //scanf 함수를 사용하기 위해서
#include<stdio.h>

int main() {
	//조건식이 참일 때 수행할 문장 거짓일 때 수행 문장을 구별.
	//int a = 0;
	//
	//if (a > 0) {
	//	printf("양수\n");
	//}else {
	//	if (a < 0) {
	//		printf("음수\n");
	//	}
	//	else {
	//		printf("양수도 음수도 아닙니다.\n");
	//	}
	//}

	//표현을 간단하게 중첩 if문

	//int a = 0;
	//
	//if (a > 0) 
	//	printf("양수\n");
	//else if (a < 0) 
	//	printf("음수\n");
	//else 
	//	printf("양수도 음수도 아닙니다.\n");


	//실습) 두 정수를 입력 받아 큰 수를 출력.(두 수는 같을수도 있다.)

	//int a, b;
	//
	//printf("a : "); scanf("%d", &a);
	//printf("b : "); scanf("%d", &b);
	//
	//if (a > b)
	//	printf("a(%d)가 b 보다 크다\n", a);
	//else if (b > a)
	//	printf("b(%d)가 a 보다 크다\n", b);
	//else
	//	printf("두수는 같다");


	//실습) 학생의 점수를 입력 받아 학점을 출력하는 프로그램을 작성해 보시오. 예) : 85 B학점
	// 90이상 A, 80이상 B, 70이상 C, 60이상 D, 60미만 F

	//int score;
	//
	//printf("학점을 입력하세요.");
	//
	//scanf("%d", &score);

	//if (score <=0 || score > 100)
	//	printf("(%d) 수를 잘못 입력하셨습니다.", score);
	//else if (score >= 90)
	//	printf("학점(%d) : A", score);
	//else if (score >= 80)
	//	printf("학점(%d) : B", score);
	//else if (score >= 70)
	//	printf("학점(%d) : C", score);
	//else if (score >= 60)
	//	printf("학점(%d) : D", score);
	//else
	//	printf("학점(%d) : F", score);


	//실습) 학생의 국.영.수 점수를 입력 받아 총점과 평균을 출력해보시오.\
	//단) 60점 미만이 한과목이라도 있으면 과락
	//예) 국어 영어 수학? : 85 90 78 합계는 253점 평균은84.33점

	//int language, mathematics, english;

	//printf("국어 점수는? :"); scanf("%d", &language);
	//printf("수학 점수는? :"); scanf("%d", &mathematics);
	//printf("영어 점수는? :"); scanf("%d", &english);

	//int total = language + mathematics + english;

	//if (language < 60 || mathematics < 60 || english < 60)
	//	printf("국어: %d점, 수학: %d점, 영어: %d점 과락입니다.", language, mathematics, english);
	//else
	//	printf("합계 : %d 평균 = %.2f",total, (double)total / 3);



	//선생님 방식
	//int kor, eng, math;
	//printf("국/영/수? :");
	//scanf("%d %d %d", &kor, &eng, &math);
	//if (kor < 60 || eng < 60 || math < 60) {
	//	printf("과락\n");

	//} else {
	//	int sum = kor + eng + math;
	//	double avg = sum / (double)3; // .3 으로 써도 됨.
	//	printf("합계: %d, 평균: %.2f", sum, avg);
	//}



	//실습) 윤년 구하기.

	//int year;

	//printf("년도를 입력하세요."); scanf("%d", &year);

	//if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
	//	printf("%d은 윤년\n", year);
	//}else {
	//	printf("%d는 윤년이 아닙니다\n", year);
	//}

	//실습) 보기 메뉴를 보고 음식을 선택하면 가야 할 코너를 알려주는 프로그램 구현.
	//예) 1. 자장면, 2. 짬뽕, 3. 설렁탕, 4. 비빔밥, 5. 피자, 6. 스파게티 
	//메뉴를 선택하세요: 선택 하면 ㅇㅇ코너로 가세요. ps) 1, 2 중식 3, 4 한식, 5, 6 양식
    
	//int menu;
	//
	//printf("--------------------------------------------------------------\n");
	//printf("1. 자장면, 2. 짬뽕, 3. 설렁탕, 4. 비빔밥, 5. 피자, 6. 스파게티\n");
	//printf("--------------------------------------------------------------\n");

	//printf("메뉴를 선택하세요. : "); scanf("%d", &menu);

	//if (menu == 1 || menu == 2) {
	//	printf("%d선택 중식으로 가세요.\n", menu);
	//}else if (menu == 3 || menu == 4) {
	//	printf("%d선택 한식으로 가세요.\n", menu);
	//}
	//else if (menu == 5 || menu == 6) {
	//	printf("%d선택 한식으로 가세요.\n", menu);
	//}else{
	//	printf("%d 잘못된 번호 선택 다시 입력해주세요.", menu);
	//}
	//return 0;
}
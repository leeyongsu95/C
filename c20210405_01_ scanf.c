//scanf: 사용자로 부터 데이터를 입력 받는다

#define _CRT_SECURE_NO_WARNINGS //scanf 함수를 사용하기 위해서
#include<stdio.h>

//void main(void)// 리턴 값 없음.

int main() {
	//입력함수
	//정수형 입력받기
	
	//int a;
	//
	//printf("정수는? : ");
	//scanf("%d", &a); // &a = 변수 a의 주소 값
	//printf("입력한 값: %d 주소 값: %p\n", a, &a);

	//실수형 입력받기
	//float f;
	//double d;
	//printf("float 실수는? : ");
	//scanf("%f", &f); 
	//printf("double 실수는? : ");
	//scanf("%lf", &d); //포맷 문자열 double 경우 : %lf

	//printf("입력한 값: %f %p\n %f %p\n", f, &f, d, &d);
	
	//문자형 입력받기.
	//char c;
	//printf("문자는? : ");
	//scanf("%c", &c);
	//printf("입력한 문자: %c %p\n", c &c);

	//실습) 두 정수를 입력 받아서 합계를 출력.

	//int a , b;
	//printf("첫번째 수를 입력하세요.");
	//scanf("%d", &a);
	//printf("두번째 수를 입력하세요.");
	//scanf("%d", &b);
	//printf("합계는: %d\n", a + b);


	//int a, b;
	//printf("수는?");
	//scanf("%d %d", &a, &b);
	//printf("합계는: %d\n", a + b);


	//실습) 오늘의 날짜(년, 월, 일)를 입력받아 출력

	//int year, month, day;
	//printf("날짜를 입력해주세요.(yyyy-mm-dd)");
	//scanf("%d-%d-%d", &year, &month, &day);
	//printf("날짜는: %d년 %d월 %d일", year, month, day);

	//실습) 두개의 정수를 입력 받아 산술연산을 구해보시오.

	//int a, b;
	//printf("두 수를 입력하세요");
	//scanf("%d %d", &a, &b);
	//printf("%d + %d = %d\n", a, b, a + b);
	//printf("%d - %d = %d\n", a, b, a - b);
	//printf("%d * %d = %d\n", a, b, a * b);
	//printf("%d / %d = %.2f\n", a, b, (double)a / b);

    //엔터 처리
	//int a, b;
	//char sign;
	//
	//printf("계산식은?"); // 10 + 20;
	//scanf("%d", &a);
	//
	//printf("계산식은?");
	//scanf("%d", &b);
	//
	//getchar(); //한개의 문자를읽어서 반환하는 함수. //엔터를 처리하기 위한 목적.
	//printf("기호는?");
	//scanf("%c", &sign);
	//
	//printf("합계: %d %c %d = %d\n", a, sign, b, a + b);

	//실습) 물건 구입 후 거스름 돈을 계산하여 출력하는 프로그램 구현.
		 //(단, 물건 값과 지불 한 돈은 입력 받는다.)

	//int sum, money;
	//
	//printf("물건값:");
	//scanf("%d", &sum);

	//printf("지불 금액:");
	//scanf("%d", &money);

	//money > sum ?
	//	printf("거스름돈 : %d", money - sum) :
	//	sum > money ? printf("부족금액 : %d\n", sum - money) :
	//	printf("계산완료");


	//실습) 국어, 영어, 수학 점수를 
	//      입력 받아 합계와 평균을 구하는 프로그램을 완성하시오.
	//      단) 평균은 소수점 2자리까지.
	
	//int language, english, mathematics;
	//
	//printf("국어, 수학, 영어 점수는?");
	//
	//scanf("%d, %d, %d", &language, &english, &mathematics);

	//int sum = language + english + mathematics;
	//
	//printf("합계 : %d\n", sum);
	//printf("평균 : %.2f\n", (double)sum / 3);

	

	//실습) rgb 값 만들기
	
	//int red, green, blue;
	//
	//printf("빨간색: "); scanf("%d", &red);
	//printf("녹색: ");   scanf("%d", &green);
	//printf("파랑색: "); scanf("%d", &blue);

	//unsigned int rgb = red << 16 | green << 8 | blue;
	//printf("RGB 값 : %0X\n", rgb);
	



	return 0;
}
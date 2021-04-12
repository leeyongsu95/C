#define _CRT_SECURE_NO_WARNINGS //scanf 함수를 사용하기 위해서
#include<stdio.h>
#include<string.h> //문자열 관련 함수를 포함하고 있는 헤더파일

//매개변수: 없다, 반환 값: 없다.
void voidTest() {
	printf("void함수\n");
}
//매개변수: 한개, 반환 값: 없다.
void voidTest2(int a) {
	printf("매개변수: %d\n", a);
}
//매개변수: 두개, 반환 값: 없다.
void voidTest3(int a, int b) {
	printf("두수의 합: %d\n", a + b);
}

//매개변수: 반지름
//원의넓이를 출력해주는 기능
//함수의 이름: area, 매개변수이름: r(double)
//call by value 방식. 벨류 값을 전달.
void area(double r2) { //지역변수 함수 실행시 생성, 함수 종료시 소멸
	printf("원의 넓이: %.2f", r2 * r2 * 3.14);
}

//매개변수: 반지름(double)
//반환값: 넓이(double)
//원의 넓이를 구해서 반환하는 함수
double areaReturn(double r) {
	double area = r * r * 3.14;
	return area; //반환 값은 한개
}

//세개의 정수를 매개 변수로 받아서 합을 반환하는 함수.
int integer(int a, int b, int c) {
	int ig = a + b + c;
	return ig;
}

//두개의 정수를 매개 변수로 받아서 나눈 실수값을 반환하는 함수
double num(int a, int b) {
	return (double)a / b;
}
//두 수를 매개 변수로 받아서 두수 중 큰 수를 반환하는 함수를 작성하시오.
int add(int a, int b) {
	int m;

	if (a > b)
		m = a;
	else if (b > a)
		m = b;
	else
		m = 0; //두수가 같을 때는 0을 리턴
	
	return m; //return은 함수의 종료
}
//진입점 함수
int main() {
	//함수
	//voidTest();
	// 
	//voidTest2(10);
	// 
	//voidTest3(10, 30);
	// 
	//double r = 0;  //지역변수
	//printf("반지름을 입력하세요.");
	//scanf("%lf", &r); //call by reference 주소 값을 전달.
	//area(r);
	// 
	//double r2 = 3.6;
	//double rValue = areaReturn(r2);
	//printf("넓이: %.2f%", rValue);
	// 
	//int inte  = 10;
	//int inte2 = 20;
	//int inte3 = 30;
	//int Value = integer(inte, inte2, inte3);
	//printf("합: %d", integer(10, 20, 30));
	//
	//int a = 10, b = 3;
	//double c = num(a, b);
	//printf("나눈 값: %.2f", c);
	//
	//int a = 10, b = 30;
	//int m = add(a, b);
	//if(m != 0)
	//	printf("더 큰수는: %d", m);
	//else
	//	printf("두수는 같다 ");

	return 0;
}
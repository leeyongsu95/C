#define _CRT_SECURE_NO_WARNINGS //scanf 함수를 사용하기 위해서
#include<stdio.h>

//int sum;

//매개 변수로 정수를 입력 받아 누적하는 함수
int userSum(int a) {
	//static변수
	//함수가 최초로 실행됬을때 생성, 프로그램 종료시 소멸
	//선언된 함수 안에서만 접근 가능
	static int sum = 0;
	sum += a;
	return sum;
}

//매개 변수: 없다
//리턴 값 : 정수 이 함수를 실행한 횟수
//함수 이름 : countTest
int countTest() {
	static int b = 0;
	b++;
	return b;
}

int main() {
	
	//전역 변수, 지역 변수, 사용 예)
	printf("누적: %d\n", userSum(10));
	printf("누적: %d\n", userSum(30));
	
	//반복문을 이용해서 함수를 10번 실행
	for (int i = 0; i < 10; i++) {
		printf("함수의 리턴 값: %d\n", countTest());
	}
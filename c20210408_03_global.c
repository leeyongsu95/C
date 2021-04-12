#define _CRT_SECURE_NO_WARNINGS //scanf 함수를 사용하기 위해서
#include<stdio.h>


//전역 변수: 프로그램 시작시 생성, 프로그램이 종료시 소멸
//전역 변수: 자동 초기화
//전역 변수: 어디서든 사용가능
//전역 변수의 무분별한 선언은 신중, 프로그램의 복잡도 증가, 메모리 사용 증가

int g;

void test() {
	printf("g: %d\n", g);
}

int main() {
	//전역 변수와 지역 변수
	//지역 변수: 함수가 시작될때 생성, 함수가 종료되면 소멸
	//지역 변수: 선언된 {}안에서만 사용가능
	int a = 0;
		
	printf("a: %d\n", a);
	printf("g: %d\n", g);
}
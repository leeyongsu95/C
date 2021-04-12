#define _CRT_SECURE_NO_WARNINGS //scanf 함수를 사용하기 위해서
#include<stdio.h>
#include<string.h> //문자열 관련 함수를 포함하고 있는 헤더파일
#include<Windows.h> //카운트 다운 함수


//매개 변수: 카운트다운 초
//반환값 : 없음
//카운트 다운 출력 목적
void count(int c) {
	for (int i = c; i > -1; i--) {
		Sleep(1000); //1 / 1000 초  1초에 1000
		printf("%d초\n", i);
	}
}

int main() {
	
	//카운트 다운
	//5초... 출발
	int a = 5;
	printf("카운트 시작\n");
	count(a);
	printf("출발");




	return 0;
}
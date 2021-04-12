#define _CRT_SECURE_NO_WARNINGS //scanf 함수를 사용하기 위해서
#include<stdio.h>

int main() {
	//do ~ while
	
	int a = -1;
	
	do {
		printf("%d\n", a);
	} while (a > 0); //최소 한번은 실행.

	//사용자에게 입력을 받아서 y면 계속 뮤직플레이 출력.

	char mu;
	
	do{
		printf("재생중\n");
		printf("재생을 계속 하시겠습니까?(Y)");
		scanf("%c", &mu);
		getchar(); //엔터값 처리.
	} while (mu == 'y');


	//실습) 사용자에게 정수를 계속 입력 받아서 
	//합계를 더하고 0을 입력 할 경우 종료되는 프로그램 구현.
	//(do~ while 이용)
	//예) 정수를 입력하세요: 6, 정수를 입력하세요: 8, 정수를 입력하세요: 0
	//지금까지 더한 수는: 14

	int integer, tger = 0;
	
	do {
		printf("정수를 입력하세요.");
		scanf("%d", &integer);
		tger += integer;
	} while (integer != 0);
	
	printf("정수의 합계: %d\n", tger);

	return 0;

}
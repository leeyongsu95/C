#define _CRT_SECURE_NO_WARNINGS //scanf 함수를 사용하기 위해서
#include<stdio.h>

int main() {
	////문자열의 포인터
	//char str[] = "happy";
	////str = "angry"; //str은 상수 변경불가.
	//char* p = str;
	//printf("%s\n", p); 

	//p = "python";
	//puts(p); //문자열 전용 함수


	//실습) 이름을 1개를 입력 받고 출력
	//포인터를 이용
	char name[10];
	char* p = name;
	
	while(1){
		printf("당신의 이름은? : ");
		gets_s(p, sizeof(name));
		if (name[0] == 'q') break;
		//puts(p);
		printf("%s님 환영합니다.\n", p);
	}

}
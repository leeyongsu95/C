#define _CRT_SECURE_NO_WARNINGS //scanf 함수를 사용하기 위해서
#include<stdio.h>
#include<string.h> //문자열 관련 함수를 포함하고 있는 헤더파일


int main() {
	//문자형
	//char c;
	//scanf("%c", &c);
	//printf("문자: %c\n", c);

	//에코 기능이 있다.
	//char c = getchar(); //문자 입력 전용 함수
	//printf("입력문자: %c %d\n", c, c);
	//putchar(c); //문자 출력 전용 함수

	//getch() 함수: 에코 기능이 없다.
	//char c = getch();
	//printf("입력문자:");
	//putchar(c);

	//비밀번호를 입력하면 *가 출력.
	
	//char pw[5];
	//printf("비밀번호를 입력해주세요.");
	//for (int i = 0; i < 4; i++) {
	//	pw[i] = getch();
	//	putchar('*'); // * 표시로 보이게 
	//}
	//pw[4] = '\0';
	//printf("\n비밀번호 : %s\n", pw);

	//문자열 
	//char s[6] = "hello";
	//char s[6]; //배열의 이름은 주소
	//scanf("%s", s);  //공백 처리불가
	//printf("%s\n", s);
	
	//문자열 전용 함수: 공백 처리가능
	//char name[20];
	//printf("이름을 입력하세요.");
	//gets(name);
	//printf("당신의 이름은:"); puts(name);

	//문자열 전용 함수
	//char name[10] = "hong";
	////name = "kim";
	//strcpy(name, "kim");
	//puts(name);

	//실습 ➢ 문자열을 입력 받고 그 문자열의 값과 길이와 주소값을 출력해 보시오
	//문자열을 입력하세요 : call by reference
	//값 : call by reference
	//길이 : 17
	//주소 : 13630056

	//char name[17];
	//int size = sizeof(name);
	//printf("문자를 입력하세요.");
	//gets(name);							   //입력
	//printf("당신의 문자는:"); puts(name);  //출력
	//printf("문자의 길이: %d\n", size);	   //문자의 길이
	//printf("문자의 주소 값: %p\n", size);  //문자의 주소 값




	return 0;
}
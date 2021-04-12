#define _CRT_SECURE_NO_WARNINGS //scanf 함수를 사용하기 위해서
#include<stdio.h>

void arrayPrint(int argc, char** argv) {   //char* argv[] <-- 방법도 있음.
	for (int i = 0; i < 3; i++) {
		printf("%s\n", argv[i]);
	}
}

int main() {

	//이차 문자열 배열의 매ㅐ 변수
	//printf("%d %d %d\n", p[0], p[1], p[2]);

	//다차원배열의 포인터
	//char arr[][7] = { "python", "c", "java" };
	//char(*p)[7] = arr;
	//printf("%d %d %d\n", p, p + 1, p + 2);

	char* p[3] = { "python", "c", "java" };
	printf("%p %p %p\n", p[0], p[1], p[2]);
	
	//함수로 처리
	//for (int i = 0; i < size; i++) {
	//	printf("%s\n", p[i]);

	//}
	arrayPrint(3, p);

	return 0;
}
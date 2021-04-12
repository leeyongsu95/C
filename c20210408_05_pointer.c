#define _CRT_SECURE_NO_WARNINGS //scanf 함수를 사용하기 위해서
#include<stdio.h>

int main() {
	//포인터 변수
	//int a = 10;
	//int* p = &a;

	//printf("a의 값: %d --------- a의 주소 값: %p\n", a, &a);
	////printf("p: %p %d\n", p, *p);

	//char c = '%';
	//char* p2 = &c;
	//printf("c의 값: %c --------- p2의 값: %c", c, *p2);


	//double d = 3.14;
	//double* p3 = &d;
	//printf("d의 값: %.2f --------- p3의 값: %.2f\n", d, *p3);

	//float f = 5.55f;
	//float* p4 = &f;
	//printf("f의 값: %.2f --------- p4의 값: %.2f\n", f, *p4);


	//포인터 변수 p를 이용하여 a의 값과 b의 값을 출력
	//int a = 10, b = 20;
	//int* p = &a;
	//printf("a의 값: %d\n", *p);
	//p = &b;
	//printf("b의 값: %d\n", *p);


	//a = 10, b = 20, c = 30 일 때 base = 100 을 각 변수에 더해보시오. 
	//단, 변수 a, b, c에 접근 할 때 포인터 변수를 활용.

	//int a = 10, b = 20, c = 30;
	//int base = 100;

	//int* p = &a;
	//*p += base;
	//printf("a의 값: %d\n", *p);

	//p = &b;
	//*p += base;
	//printf("b의 값: %d\n", *p);

	//p = &c;
	//*p += base;
	//printf("c의 값: %d\n", *p);
	
	//배열의 포인터
	//int arr[3] = {10, 20, 30};
	//int* p = arr;

	//for (int i = 0; i < 3; i++) {
	//	printf("arr의 값: %d %d %d %d\n", *(p+i), *(arr+i), arr[i], p[i]);
	//}
	
	//for (int i = 0; i < 3; i++) {
	//	printf("%d %d\n", *p++);
	//}
	
	//문자형 배열에 'p', 'y', 't', 'h', 'o', 'n'을 저장하고 포인터 변수를 이용하여
	//한 글자씩 화면에 출력


	//char po[] = {'p', 'y', 't', 'h', 'o', 'n'};
	//char* p = po;

	//for (int i = 0; i < 6; i++) {
	//	printf("%c\n", *p++);
	//}
	
	//피보나치 수열을 포인터를 이용해서 출력
	//int fibo[20];
	//int* f = fibo;
	//*f = 0; f++;
	//*f = 1; f++;
	//int size = sizeof(fibo) / sizeof(int);
	//

	//for (int i = 2; i < size; i++) {
	//	*f = *(f - 2) + *(f - 1);
	//	f++;
	//}
	//f = fibo;  //초기화
	//for (int i = 0; i < size; i++) {
	//	printf("%d\n", *f++);
	//}

	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
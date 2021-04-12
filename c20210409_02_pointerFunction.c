#define _CRT_SECURE_NO_WARNINGS //scanf 함수를 사용하기 위해서
#include<stdio.h>
//함수: call by reference: 주소를 참조한다.
//주소를 매개 변수로 받는다.
//main 함수안에 있는 a 값을 변경 가능

void change(int* p) {
	*p = 20;
}

void towChange(int* pa, int* pb){
	int temp = 0;
	
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void sumCal(int* pa, int* psum) {
	*psum += *pa;
}

int main() {
	//함수에 포인터 넘기기
	int a = 10;
	change(&a);
	scanf("%d", &a);
	printf("a: %d\n", a);

	//실습) 두 수 바꾸기
	int a = 10, b = 20;
	
	towChange(&a, &b);
	printf("a의 값: %d \nb의 값: %d\n", a, b);


	//실습2) 반복문을 이용해서 입력 받은 값을 누적 
	//함수에서 누적
	int a, sum = 0;
	while (1) {
		printf("수를 입력하세요 : ");
		scanf("%d", &a);
		if (a == 0)break;
		sumCal(&a, &sum);
	}
	printf("누적 합계: %d\n", sum);

}
#define _CRT_SECURE_NO_WARNINGS //scanf 함수를 사용하기 위해서
#include<stdio.h>

int main() {
	//반복문 : while

	//while (1) {
	//	printf("c");
	//}

	//break 반복문 탈출
	//int cnt = 0;
	//while (1) { //1: true, 0: false
	//	printf("%d 반복\n", cnt+1);
	//	cnt++;    //cnt += 1;  //cnt = cnt + 1;
	//	if (cnt > 9) break;
	//}

	//1~10까지의 합
	//int i = 0, sum = 0;
	//while (i < 10) {
	//	//printf("%d\n", ++i);
	//	sum += ++i;
	//}
	//printf("합계는: %d\n", sum);

	//합이 2000을 넘는 정수와 그 합을 구하시오.
	//int i = 0, sum = 0;
	//while (sum < 2000) {
	//	sum += i++;
	//}
	//printf("i: %d 합계는: %d\n", i, sum);

	//실습 1부터 20까지의 수 중 3의 배수만 출력하는 프로그램 구현 (while문 이용) 
	//예) 3 6 9 12..... 18
	
	//내 방식
	//int a = 0;
	//
	//while (a < 20){
	//	a++;
	//	if (a % 3 == 0)
	//		printf("3의 배수: %d\n", a);
	//}
	
	
	//방법) 2
	//int a = 3;
	//while (a < 20){
	//	printf("3의 배수: %d\n", a);
	//	a += 3;
	//}

	//방법) 3
	//int a = 0;
	//while (1) {
	//	a += 3;
	//	if (a > 20) break;
	//	printf("3의 배수는 %d\n", a);
	//}

	//continue: 계속
	//int a = 0;
	//while (a < 10) {
	//	a++;
	//	if (a % 2 != 0) continue;     
	//	printf("%d\n", a);
	//}





	return 0;
}
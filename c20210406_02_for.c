#define _CRT_SECURE_NO_WARNINGS //scanf 함수를 사용하기 위해서
#include<stdio.h>

int main() {
	//반복문 for(초기식; 조건식; 증감식)
	//int i; //반복할 변수
	//
	//for (i = 0; i < 10; i++) {
	//	printf("i의 값은: %d\n", i);
	//}


	//실습) 구구단 출력.
	//int dan;

	//printf("단수를 입력하세요.");
	//scanf("%d", &dan);

	//for (int i = 1; i < 10; i++) {
	//	printf("%d x %d = %d\n", dan, i, dan * i);
	//}

	
	//while문 이용 구구단
	//int dan;

	//while (1) {
	//	printf("단수를 입력하세요.");
	//	scanf("%d", &dan);
	//	if (dan == 0) break;
	//	for (int i = 1; i < 10; i++) {
	//		printf("%d x %d = %d\n", dan, i, dan * i);
	//	}
	//}



	//do while문 이용 구구단
	//int dan;
	//
	//do {
	//	printf("단수를 입력하세요.");
	//	scanf("%d", &dan);
	//	if(dan != 0)
	//		for (int i = 1; i < 10; i++) {
	//			printf("%d x %d = %d\n", dan, i, dan * i);
	//		}
	//} while (dan != 0);


	//이중 for 구구단
	//for (int i = 2; i < 10; i++) {
	//	printf("---[%d단]---\n", i);
	//	for (int j = 1; j < 10; j++) {
	//		printf("%d x %d = %d\n", i, j, i * j);
	//	}
	//}

	
	//삼중 for문
	//for (int i = 0; i < 10; i++)
	//	for (int j = 0; j < 10; j++)
	//		for (int k = 0; k < 10; k++)
	//			printf("%d %d %d\n", i, j, k);
	
	//실습1) 1부터 100까지의 합 예) 1부터 100까지의 합은 5050입니다.
	//int sum = 0;

	//for (int i = 0; i < 101; i++) {
	//	sum += i;
	//}
	//printf("1~ 100까지의 합은: %d\n", sum);

	
	//실습2) 1부터 입력 받은 수까지의 합 
	// 예) 1부터 몇까지 더할까요? 50 
	// 1부터 50까지의 합은 1275입니다.
	//int	n, sum = 0;
	//
	//printf("n값은? : ");
	//scanf("%d", &n);

	//for (int i = 0; i < n + 1; i++) { //i는 지역 변수로 선언되었기 때문에 for 문안에서만 사용할 수 있다.
	//	sum += i;
	//}
	//printf("1~ %d 까지의 합은: %d\n", n, sum);

	//실습3) 두 정수를 입력 받아서 큰 수에서 작은 수를 뺀 값을 구하는 프로그램 구현.
	//0을 입력하면 프로그램 종료.
	
	//내방식:
	//int number, number2;

	//for (int i = 0; i < 10; i++) {
	//
	//	printf("두 정수를 입력하세요.");
	//	scanf("%d %d", &number, &number2);
	//
	//	if(number > number2){
	//		printf("둘중에 큰수는 %d 두수의 차 : %d\n", number, number - number2);
	//	}else if (number < number2) {
	//		printf("둘중에 큰수는 %d 두수의 차 : % d\n", number2, number2 - number);
	//	}else if (number == number2){
	//		printf("둘의 수는 같습니다.\n");
	//	}else if (number <= 0 && number2 <= 0) {
	//		printf("0 을 입력하셨습니다. 프로그램 종료.");
	//		break;
	//	}

	//방식2:
	//int a, b;
	//for (int i = 0; i < 10; i++) {
	//	//두수를 입력받기
	//	printf("두수는?");
	//	scanf("%d", &a);
	//	if (a == 0) break;
	//	scanf("%d", &b);
	//	//큰수에서 작은수 빼고 출력
	//	if (a > b) printf("절대값: %d\n", a - b);
	//	else printf("절대값: %d\n", b - a);
	//}

	////실습) 별 찍기 1.
	//for (int i = 0; i < 7; i++) {
	//	for (int j = 0; j < i + 1; j++) {
	//		printf("★");
	//	}
	//	printf("\n");
	//}
	//
	////실습) 별 찍기 2.
	//for (int i = 0; i < 7; i++) {
	//	for (int j = 0; j < 7 - i; j++) {
	//		printf("★");
	//	}
	//	printf("\n");
	//}

	////실습) 별 찍기 3.
	//for (int i = 1; i < 7; i++) {
	//	//공백 출력
	//	for (int j = 0; j < 7 - i; j++) {
	//		printf(" ");
	//	}
	//	//별 출력
	//	for (int j = 0; j < i; j++) {
	//		printf("★");
	//	}
	//	printf("\n");
	//}

	//실습) 별 찍기 4.
	//for (int i = 0; i < 7; i++) {
	//	for (int j = 0; j < 7 - i; j++) {
	//		printf(" ");
	//	}
	//	for (int j = 0; j < i; j++) {
	//		printf("★");
	//	}
	//	for (int j = 0; j < i + 1; j++) {
	//		printf("☆");
	//	}
	//	printf("\n");
	//}
	 
	//다른방법) 별찍기4.
	//for (int i = 0; i < 7; i++) {
	//	for (int j = 0; j < 7 - i; j++) {
	//		printf(" ");
	//	}
	//	for (int j = 0; j < (i*2)+1; j++) {
	//		printf("★");
	//	}
	//	printf("\n");
	//}

	//★★★★★★★★★★★문제1) 두 개의 숫자를 입력 받아서 두 수 사이의 정수의 합을 계산하는 
	//프로그램을 작성하시오.
	//예시) 시작 정수, 마지막 정수 ? 5 10
	////5부터 10까지의 합계는 45
	//int a, b;
	//for (int i = a; i < b + 1; i++) {
	//
	//}
	//문제2)n! (factorial:팩토리얼) 구하기
	//n!= 1 * 2 * ….*n;
	//예시)정수를 입력하세요 : 7   1부터 7까지 곱한 값은 5040
	//int fac = 0;
	//int mul = 1;

	//printf("정수를 입력하세요");
	//scanf("%d", &fac);

	//for (int i = 1; i < fac +  1; i++) {
	//	mul *= i;
	//}
	//printf("%d\n", mul);


	//문제3)두 정수를 입력 받아서 큰 수에서 작은 수를 뺀 값을 구하는 프로그램을 작성 하시오
	//0을 입력하면 프로그램 종료
	//최대반복횟수는 10번
	//예시)두 정수를 입력하세요 : 7  3  두 정수의 차는 4
	
	//int n1, n2;
	//for (int i = 0; i < 10; i++) {
	//	printf("정수를 입력하세요");
	//	scanf("%d", &n1);
	//	if (n1 == 0) break;
	//	scanf("%d", &n2);
	//	if (n1 > n2) printf("두 정수의 차: %d\n", n1 - n2);
	//	else printf("두 정수의 차: %d\n", n2 - n1);
	//}


	//문제4)1부터 1씩 증가하는 수를 더해서 합이 1000 이상이 되는 정수와 그 합을 구하는 프로그램
	//예시) 45까지의 합은 1035
	//int sum = 0;

	//for (int i = 1; i < 1000; i++) {
	//	sum += i;
	//	if (sum > 1000)
	//	printf("%d까지의 %d\n", i, sum);
	//}


	//문제5)1부터 10까지의 정수에서 두 수를 골라 두 수의 합이 10이 되는 두수를 구하는 프로그램
	//예시) (1, 9) (2, 8) (3, 7) (4, 6) (5, 5)

	//for (int i = 0; i < 10; i++) {
	//	for (int j = i; j < 10; j++) {
	//		/*printf("%d %d\n", i, j);*/
	//		if (i + j == 10) {
	//			printf("(%d, %d)\n", i, j);
	//		}
	//	}
	//}

	
	//문제6)점심메뉴 고르기 메뉴를 고르면 가격과 해당 코너를 출력하는 프로그램을 구현
	//단)메뉴를 잘못 입력하면 다시 메뉴선택 q를 입력하면 종료
	//예시)1.짬뽕, 2.짜장면, 3.불고기, 4.햄버거, q.종료 : 1 가격 : 6000원 A코너로 가세요
	
	//char menu;
	//do {
	//	printf("---------------------------------------------------------------------------------\n");
	//	printf("1. 짬뽕, 2. 짜장면, 3. 불고기, 4. 비빔밥 5. 햄버거, 6. 샌드위치, q.종료\n");
	//	printf("---------------------------------------------------------------------------------\n");
	//	scanf("%c", &menu);
	//	getchar(); //엔터처리
	//switch (menu){
	//case '1':
	//case '2':
	//	printf("중식코너\n"); break;
	//case '3':
	//case '4':
	//	printf("한식코너\n"); break;
	//case '5':
	//case '6':
	//	printf("양식코너\n"); break;
	//case 'q':
	//	printf("프로그램 종료\n"); break;
	//default:
	//	printf("잘못 입력하셨습니다.\n"); break;
	//	}
	//} while (menu != 'q');
	
	
	return 0;
}


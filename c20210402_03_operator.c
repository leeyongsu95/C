#include<stdio.h>

int main() {
	//연산자(+, -, *, /, %)
	//정수와 정수 => 정수
	//실수와 정수 => 실수

	//int a = 20, b = 3;
	//printf("%d + %d = %d\n", a, b, a + b);
	//printf("%d - %d = %d\n", a, b, a - b);
	//printf("%d * %d = %d\n", a, b, a * b);
	//printf("%d / %d = %.2f\n", a, b, (double)a / b);
	//printf("%d %% %d = %d\n", a, b, a % b);

	//int a = 50, b = 3;

	//printf("몫: %d\n", a / b);
	//printf("나머지: %d\n", a % b);
	//printf("실수값: %f\n", (double)a / b);

	//// ++, --
	////앞에 붙이면 전위, 뒤에 붙이면 후위
	//int a = 10;
	//
	////a = a + 1;
	////a += 1;

	//a++;
	//printf("%d\n",a);

	//a--;
	//printf("%d\n", a);

	//++a;
	//printf("%d\n", a);

	//--a;
	//printf("%d\n", a);

	//int a = 10;
	//printf("%d\n", a++);  //출력을 하고 증가해라.
	//printf("%d\n", a);    
	//printf("%d\n", ++a);  //증가 하고 출력해라.

	//int a = 10;
	//a--;
	//printf("%d\n", --a);  
	//printf("%d\n", a++);    
	//printf("%d\n", a--);
	//printf("%d\n", a);

	////실습)
	//int a = 10;    
	//int b = --a;   
	//int c = b++;     
	//b = ++a;

	//printf("%d %d %d\n", a, b, c);

	////관계 연산자
	//int a = 10, b = 20;
	//printf("%d\n", a < b); // a 가 b 보다 작다 참 = 1, true
	//printf("%d\n", a > b); // b 가 a 보다 작다 거짓 = 0, false
	//printf("%d\n", a == b); // a 와 b 가 같냐 거짓 = 0, false
	//printf("%d\n", a != b); // a 와 b 가 다르냐 참 = 1, true

	////논리 연산자: and = &&, or = ||, not = !
	//int a = 10, b = 20;
	//printf("%d\n", a > 0 && b > 0);
	//printf("%d\n", a > 0 && b < 0);
	//printf("%d\n", a > 0 || b < 0);
	//printf("%d\n", !(a > 0));

	////비트 연산자: &, |, ~, ^

	//printf("%d\n", 4 & 3);
	//printf("%d\n", 4 | 3);

	////시프트 연산자
	//printf("%d\n", 4 >> 2); //오른쪽으로 2 비트 밀기
	//printf("%d\n", 4 << 1); //왼쪽으로 1 비트 밀기

	////삼항 연산자
	//int a = 10;
	//a > 0 ?printf("양수") : printf("음수");

	////두개의 수 중 큰 수를 출력.
	//int a = 10, b = 20;
	//a > b ? printf("%d\n", a) : printf("%d\n",b);

	//int c = a > b ? a : b;
	//printf("%d\n", c);

	////세개의 수 중 큰 수를 출력 
	////내 방식)
	//int a = 20, b = 10, c = 30;
	//int d = a > b ? a : b;
	//d > c ? printf("%d\n", d) : printf("가장 큰 값은: %d\n", c);

	////같이 푼 방식
	//int a = 20, b = 10, c = 30;
	//int max = a > b ? a : b;
	//max = max > c ? max : c;
	//printf("%d\n", max);
	//
	////다른 방식
	//int a = 20, b = 10, c = 30;
	//int max = a > b ? (a > c ? a : c) : (b > c ? b : c);
	//printf("%d\n", max);
	//
	////실습) 홀수, 짝수 구별
	//int a = 9;
	//a % 2 == 0 ? printf("짝수: %d\n", a) : printf("홀수: %d\n", a);
    
	//다른 방법
	//int a = 9;
	////포인터 변수를 이용해서 출력
	//char* p = a % 2 == 0 ? "짝수" : "홀수";
	//printf("%d: %s\n", a, p);

}

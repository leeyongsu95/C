//#include <stdio.h>
//
//
//int main() {
//
//	int a;      // 정수형 변수를 선언
//	a = 20;     // 초기화
//	printf("%d\n", a);
//	
//	실수형 변수
//	float f;   // 4 byte
//	double d;  // 8 byte
//	d = 3.14123213132421421421412;  // 초기화
//	f = 3.14123213132421421421412;  // 초기화
//	printf("%.25f\n", f);
//	printf("%.25f\n", d);
//	
//	문자형
//	char c = 'a';  //선언과 동시에 초기화
//	printf("문자는 %c %d\n", c, c);
//	
//	데이터형의 바이트 수
//	
//	int a = 100;
//	printf("정수형 a: %d\n", sizeof(a));
//	
//	float f = 3.14;
//	double d = 3.14;
//	printf("실수형 f: %d\n", sizeof(f));
//	printf("실수형 d: %d\n", sizeof(d));
//	
//	char h = 'q';
//	printf("문자형 h: %d\n", sizeof(h));
//	
//	문자열
//	 배열의 이름은 주소를 가지고 있다: 상수
//	 [] 배열의 크기는 문자열의 크기 +1 
//	 선언과 동시에 초기화 시에는 배열의 크기 생략 가능. 
//	                             
//	char c[] = "hello celfqmfewml";   // null 문자가 마지막에 추가 된다. 
//	//c = "hello"; // 상수이기 때문에 불가
//
//	printf("문자열: %s 크기: %d\n", c , sizeof(c));
//	printf("%c\n", c[0]);
//
//	return 0;
//
//}
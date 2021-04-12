//#define _CRT_SECURE_NO_WARNINGS //scanf 함수를 사용하기 위해서
//#include<stdio.h>
//
//int main() {
//	//선택 조건문 : switch ~ case
//	int a = 0;
//
//	switch (a) {
//	case 0:
//		printf("zero\n");
//		break;			//맞는게 나오면 빠져나감
//	case 1:
//		printf("one\n");
//		break;
//	case 2:
//		printf("two\n");
//		break;
//	default:
//		printf("잘못된 숫자\n");
//	}
//
//	//월의 마지막 날 출력
//	int mon = 3;
//	
//	switch (mon){
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 8:
//	case 10:
//	case 12:
//		printf("31일\n");
//		break;
//	case 4:
//	case 6:
//	case 9:
//	case 11:
//		printf("30일\n");
//		break;
//	case 2:
//		printf("28일\n");
//		break;
//	default:
//		printf("잘못된 월\n");
//	}
//	
//	
//	
//	//실습) 보기 메뉴를 보고 음식을 선택하면 가야 할 코너를 알려주는 프로그램 구현.
//	//예) 1. 자장면, 2. 짬뽕, 3. 설렁탕, 4. 비빔밥, 5. 피자, 6. 스파게티 
//	//메뉴를 선택하세요: 선택 하면 ㅇㅇ코너로 가세요. ps) 1, 2 중식 3, 4 한식, 5, 6 양식
//
//	int menu;
//	
//	printf("--------------------------------------------------------------\n");
//	printf("1. 자장면, 2. 짬뽕, 3. 설렁탕, 4. 비빔밥, 5. 피자, 6. 스파게티\n");
//	printf("--------------------------------------------------------------\n");
//
//	printf("메뉴를 선택하세요. : "); scanf("%d", &menu);
//
//	switch (menu){
//	case 1:
//	case 2:
//		printf("%d 선택 중식 코너로 가세요\n", menu);
//		break;
//	case 3:
//	case 4:
//		printf("%d 선택 한식 코너로 가세요\n", menu);
//		break;
//	case 5:
//	case 6:
//		printf("%d 선택 양식 코너로 가세요\n", menu);
//		break;
//	default:
//		printf("%d 번호를 잘못 선택하셨습니다. 다시 선택하세요.\n", menu);
//		break;
//	}
//
//	return 0;
//}
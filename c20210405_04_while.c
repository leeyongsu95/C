#define _CRT_SECURE_NO_WARNINGS //scanf �Լ��� ����ϱ� ���ؼ�
#include<stdio.h>

int main() {
	//�ݺ��� : while

	//while (1) {
	//	printf("c");
	//}

	//break �ݺ��� Ż��
	//int cnt = 0;
	//while (1) { //1: true, 0: false
	//	printf("%d �ݺ�\n", cnt+1);
	//	cnt++;    //cnt += 1;  //cnt = cnt + 1;
	//	if (cnt > 9) break;
	//}

	//1~10������ ��
	//int i = 0, sum = 0;
	//while (i < 10) {
	//	//printf("%d\n", ++i);
	//	sum += ++i;
	//}
	//printf("�հ��: %d\n", sum);

	//���� 2000�� �Ѵ� ������ �� ���� ���Ͻÿ�.
	//int i = 0, sum = 0;
	//while (sum < 2000) {
	//	sum += i++;
	//}
	//printf("i: %d �հ��: %d\n", i, sum);

	//�ǽ� 1���� 20������ �� �� 3�� ����� ����ϴ� ���α׷� ���� (while�� �̿�) 
	//��) 3 6 9 12..... 18
	
	//�� ���
	//int a = 0;
	//
	//while (a < 20){
	//	a++;
	//	if (a % 3 == 0)
	//		printf("3�� ���: %d\n", a);
	//}
	
	
	//���) 2
	//int a = 3;
	//while (a < 20){
	//	printf("3�� ���: %d\n", a);
	//	a += 3;
	//}

	//���) 3
	//int a = 0;
	//while (1) {
	//	a += 3;
	//	if (a > 20) break;
	//	printf("3�� ����� %d\n", a);
	//}

	//continue: ���
	//int a = 0;
	//while (a < 10) {
	//	a++;
	//	if (a % 2 != 0) continue;     
	//	printf("%d\n", a);
	//}





	return 0;
}
#define _CRT_SECURE_NO_WARNINGS //scanf �Լ��� ����ϱ� ���ؼ�
#include<stdio.h>

int main() {
	//do ~ while
	
	int a = -1;
	
	do {
		printf("%d\n", a);
	} while (a > 0); //�ּ� �ѹ��� ����.

	//����ڿ��� �Է��� �޾Ƽ� y�� ��� �����÷��� ���.

	char mu;
	
	do{
		printf("�����\n");
		printf("����� ��� �Ͻðڽ��ϱ�?(Y)");
		scanf("%c", &mu);
		getchar(); //���Ͱ� ó��.
	} while (mu == 'y');


	//�ǽ�) ����ڿ��� ������ ��� �Է� �޾Ƽ� 
	//�հ踦 ���ϰ� 0�� �Է� �� ��� ����Ǵ� ���α׷� ����.
	//(do~ while �̿�)
	//��) ������ �Է��ϼ���: 6, ������ �Է��ϼ���: 8, ������ �Է��ϼ���: 0
	//���ݱ��� ���� ����: 14

	int integer, tger = 0;
	
	do {
		printf("������ �Է��ϼ���.");
		scanf("%d", &integer);
		tger += integer;
	} while (integer != 0);
	
	printf("������ �հ�: %d\n", tger);

	return 0;

}
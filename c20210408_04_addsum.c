#define _CRT_SECURE_NO_WARNINGS //scanf �Լ��� ����ϱ� ���ؼ�
#include<stdio.h>

//int sum;

//�Ű� ������ ������ �Է� �޾� �����ϴ� �Լ�
int userSum(int a) {
	//static����
	//�Լ��� ���ʷ� ���������� ����, ���α׷� ����� �Ҹ�
	//����� �Լ� �ȿ����� ���� ����
	static int sum = 0;
	sum += a;
	return sum;
}

//�Ű� ����: ����
//���� �� : ���� �� �Լ��� ������ Ƚ��
//�Լ� �̸� : countTest
int countTest() {
	static int b = 0;
	b++;
	return b;
}

int main() {
	
	//���� ����, ���� ����, ��� ��)
	printf("����: %d\n", userSum(10));
	printf("����: %d\n", userSum(30));
	
	//�ݺ����� �̿��ؼ� �Լ��� 10�� ����
	for (int i = 0; i < 10; i++) {
		printf("�Լ��� ���� ��: %d\n", countTest());
	}
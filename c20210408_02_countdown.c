#define _CRT_SECURE_NO_WARNINGS //scanf �Լ��� ����ϱ� ���ؼ�
#include<stdio.h>
#include<string.h> //���ڿ� ���� �Լ��� �����ϰ� �ִ� �������
#include<Windows.h> //ī��Ʈ �ٿ� �Լ�


//�Ű� ����: ī��Ʈ�ٿ� ��
//��ȯ�� : ����
//ī��Ʈ �ٿ� ��� ����
void count(int c) {
	for (int i = c; i > -1; i--) {
		Sleep(1000); //1 / 1000 ��  1�ʿ� 1000
		printf("%d��\n", i);
	}
}

int main() {
	
	//ī��Ʈ �ٿ�
	//5��... ���
	int a = 5;
	printf("ī��Ʈ ����\n");
	count(a);
	printf("���");




	return 0;
}
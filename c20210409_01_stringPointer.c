#define _CRT_SECURE_NO_WARNINGS //scanf �Լ��� ����ϱ� ���ؼ�
#include<stdio.h>

int main() {
	////���ڿ��� ������
	//char str[] = "happy";
	////str = "angry"; //str�� ��� ����Ұ�.
	//char* p = str;
	//printf("%s\n", p); 

	//p = "python";
	//puts(p); //���ڿ� ���� �Լ�


	//�ǽ�) �̸��� 1���� �Է� �ް� ���
	//�����͸� �̿�
	char name[10];
	char* p = name;
	
	while(1){
		printf("����� �̸���? : ");
		gets_s(p, sizeof(name));
		if (name[0] == 'q') break;
		//puts(p);
		printf("%s�� ȯ���մϴ�.\n", p);
	}

}
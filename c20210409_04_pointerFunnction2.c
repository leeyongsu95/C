#define _CRT_SECURE_NO_WARNINGS //scanf �Լ��� ����ϱ� ���ؼ�
#include<stdio.h>

void arrayPrint(int argc, char** argv) {   //char* argv[] <-- ����� ����.
	for (int i = 0; i < 3; i++) {
		printf("%s\n", argv[i]);
	}
}

int main() {

	//���� ���ڿ� �迭�� �Ť� ����
	//printf("%d %d %d\n", p[0], p[1], p[2]);

	//�������迭�� ������
	//char arr[][7] = { "python", "c", "java" };
	//char(*p)[7] = arr;
	//printf("%d %d %d\n", p, p + 1, p + 2);

	char* p[3] = { "python", "c", "java" };
	printf("%p %p %p\n", p[0], p[1], p[2]);
	
	//�Լ��� ó��
	//for (int i = 0; i < size; i++) {
	//	printf("%s\n", p[i]);

	//}
	arrayPrint(3, p);

	return 0;
}
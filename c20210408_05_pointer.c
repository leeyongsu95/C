#define _CRT_SECURE_NO_WARNINGS //scanf �Լ��� ����ϱ� ���ؼ�
#include<stdio.h>

int main() {
	//������ ����
	//int a = 10;
	//int* p = &a;

	//printf("a�� ��: %d --------- a�� �ּ� ��: %p\n", a, &a);
	////printf("p: %p %d\n", p, *p);

	//char c = '%';
	//char* p2 = &c;
	//printf("c�� ��: %c --------- p2�� ��: %c", c, *p2);


	//double d = 3.14;
	//double* p3 = &d;
	//printf("d�� ��: %.2f --------- p3�� ��: %.2f\n", d, *p3);

	//float f = 5.55f;
	//float* p4 = &f;
	//printf("f�� ��: %.2f --------- p4�� ��: %.2f\n", f, *p4);


	//������ ���� p�� �̿��Ͽ� a�� ���� b�� ���� ���
	//int a = 10, b = 20;
	//int* p = &a;
	//printf("a�� ��: %d\n", *p);
	//p = &b;
	//printf("b�� ��: %d\n", *p);


	//a = 10, b = 20, c = 30 �� �� base = 100 �� �� ������ ���غ��ÿ�. 
	//��, ���� a, b, c�� ���� �� �� ������ ������ Ȱ��.

	//int a = 10, b = 20, c = 30;
	//int base = 100;

	//int* p = &a;
	//*p += base;
	//printf("a�� ��: %d\n", *p);

	//p = &b;
	//*p += base;
	//printf("b�� ��: %d\n", *p);

	//p = &c;
	//*p += base;
	//printf("c�� ��: %d\n", *p);
	
	//�迭�� ������
	//int arr[3] = {10, 20, 30};
	//int* p = arr;

	//for (int i = 0; i < 3; i++) {
	//	printf("arr�� ��: %d %d %d %d\n", *(p+i), *(arr+i), arr[i], p[i]);
	//}
	
	//for (int i = 0; i < 3; i++) {
	//	printf("%d %d\n", *p++);
	//}
	
	//������ �迭�� 'p', 'y', 't', 'h', 'o', 'n'�� �����ϰ� ������ ������ �̿��Ͽ�
	//�� ���ھ� ȭ�鿡 ���


	//char po[] = {'p', 'y', 't', 'h', 'o', 'n'};
	//char* p = po;

	//for (int i = 0; i < 6; i++) {
	//	printf("%c\n", *p++);
	//}
	
	//�Ǻ���ġ ������ �����͸� �̿��ؼ� ���
	//int fibo[20];
	//int* f = fibo;
	//*f = 0; f++;
	//*f = 1; f++;
	//int size = sizeof(fibo) / sizeof(int);
	//

	//for (int i = 2; i < size; i++) {
	//	*f = *(f - 2) + *(f - 1);
	//	f++;
	//}
	//f = fibo;  //�ʱ�ȭ
	//for (int i = 0; i < size; i++) {
	//	printf("%d\n", *f++);
	//}

	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
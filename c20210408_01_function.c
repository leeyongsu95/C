#define _CRT_SECURE_NO_WARNINGS //scanf �Լ��� ����ϱ� ���ؼ�
#include<stdio.h>
#include<string.h> //���ڿ� ���� �Լ��� �����ϰ� �ִ� �������

//�Ű�����: ����, ��ȯ ��: ����.
void voidTest() {
	printf("void�Լ�\n");
}
//�Ű�����: �Ѱ�, ��ȯ ��: ����.
void voidTest2(int a) {
	printf("�Ű�����: %d\n", a);
}
//�Ű�����: �ΰ�, ��ȯ ��: ����.
void voidTest3(int a, int b) {
	printf("�μ��� ��: %d\n", a + b);
}

//�Ű�����: ������
//���ǳ��̸� ������ִ� ���
//�Լ��� �̸�: area, �Ű������̸�: r(double)
//call by value ���. ���� ���� ����.
void area(double r2) { //�������� �Լ� ����� ����, �Լ� ����� �Ҹ�
	printf("���� ����: %.2f", r2 * r2 * 3.14);
}

//�Ű�����: ������(double)
//��ȯ��: ����(double)
//���� ���̸� ���ؼ� ��ȯ�ϴ� �Լ�
double areaReturn(double r) {
	double area = r * r * 3.14;
	return area; //��ȯ ���� �Ѱ�
}

//������ ������ �Ű� ������ �޾Ƽ� ���� ��ȯ�ϴ� �Լ�.
int integer(int a, int b, int c) {
	int ig = a + b + c;
	return ig;
}

//�ΰ��� ������ �Ű� ������ �޾Ƽ� ���� �Ǽ����� ��ȯ�ϴ� �Լ�
double num(int a, int b) {
	return (double)a / b;
}
//�� ���� �Ű� ������ �޾Ƽ� �μ� �� ū ���� ��ȯ�ϴ� �Լ��� �ۼ��Ͻÿ�.
int add(int a, int b) {
	int m;

	if (a > b)
		m = a;
	else if (b > a)
		m = b;
	else
		m = 0; //�μ��� ���� ���� 0�� ����
	
	return m; //return�� �Լ��� ����
}
//������ �Լ�
int main() {
	//�Լ�
	//voidTest();
	// 
	//voidTest2(10);
	// 
	//voidTest3(10, 30);
	// 
	//double r = 0;  //��������
	//printf("�������� �Է��ϼ���.");
	//scanf("%lf", &r); //call by reference �ּ� ���� ����.
	//area(r);
	// 
	//double r2 = 3.6;
	//double rValue = areaReturn(r2);
	//printf("����: %.2f%", rValue);
	// 
	//int inte  = 10;
	//int inte2 = 20;
	//int inte3 = 30;
	//int Value = integer(inte, inte2, inte3);
	//printf("��: %d", integer(10, 20, 30));
	//
	//int a = 10, b = 3;
	//double c = num(a, b);
	//printf("���� ��: %.2f", c);
	//
	//int a = 10, b = 30;
	//int m = add(a, b);
	//if(m != 0)
	//	printf("�� ū����: %d", m);
	//else
	//	printf("�μ��� ���� ");

	return 0;
}
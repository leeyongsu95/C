#define _CRT_SECURE_NO_WARNINGS //scanf �Լ��� ����ϱ� ���ؼ�
#include<stdio.h>
//�Լ�: call by reference: �ּҸ� �����Ѵ�.
//�ּҸ� �Ű� ������ �޴´�.
//main �Լ��ȿ� �ִ� a ���� ���� ����

void change(int* p) {
	*p = 20;
}

void towChange(int* pa, int* pb){
	int temp = 0;
	
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void sumCal(int* pa, int* psum) {
	*psum += *pa;
}

int main() {
	//�Լ��� ������ �ѱ��
	int a = 10;
	change(&a);
	scanf("%d", &a);
	printf("a: %d\n", a);

	//�ǽ�) �� �� �ٲٱ�
	int a = 10, b = 20;
	
	towChange(&a, &b);
	printf("a�� ��: %d \nb�� ��: %d\n", a, b);


	//�ǽ�2) �ݺ����� �̿��ؼ� �Է� ���� ���� ���� 
	//�Լ����� ����
	int a, sum = 0;
	while (1) {
		printf("���� �Է��ϼ��� : ");
		scanf("%d", &a);
		if (a == 0)break;
		sumCal(&a, &sum);
	}
	printf("���� �հ�: %d\n", sum);

}
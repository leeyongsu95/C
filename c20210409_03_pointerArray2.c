#define _CRT_SECURE_NO_WARNINGS //scanf �Լ��� ����ϱ� ���ؼ�
#include<stdio.h>







int main() {
	//���� �迭�� ������
	//int arr[][3] = {{ 1, 2, 3 }, { 4, 5, 6 }};
	//int* p = arr;
	//int size = sizeof(arr) / sizeof(int);
	//
	//for (int i = 0; i < size; i++) {
	//	printf("%d  ", *p++);
	//}

	//�θ��� �л��� ��, ��, �� ������ �迭�� ���� �� �հ�, ����� ���Ͻÿ�.
	int score[][3] = { {90, 89, 78}, {89, 99, 100} };
	int sum = 0; double avg;
	int (*p)[3] = score;
	printf("%p %p\n", p, p +1);

	for (int i = 0; i < 2; i++) {
		sum = (*p)[0] + (*p)[1] + (*p)[2];
		avg = sum / 3.;
		printf("�հ�: %d ���: %.2f\n", sum, avg);
		p++;
	}
	

	return 0;
}
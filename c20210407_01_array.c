#define _CRT_SECURE_NO_WARNINGS //scanf �Լ��� ����ϱ� ���ؼ�
#include<stdio.h>
#define LEN 5


int main() {
	//�迭 : array
	//int arr[3];
	////arr[0] = 1; arr[1] = 2; arr[2] = 3;

	//for (int i = 0; i < 3; i++) {
	//	arr[i] = (i + 1) * 10;
	//}

	////�ݺ����� �̿��ؼ� ���
	//for (int i = 0; i < 3; i++) {
	//	printf("%d\n", arr[i]);
	//}
	
	
	//�ǽ�)
	//double arr[5];
	////�迭�� ũ�� ���ϱ�
	//int size = sizeof(arr) / sizeof(double);
	//printf("������:%d\n", size);


	////�ݺ����� �̿��ؼ� �ʱ�ȭ.
	//for (int i = 0; i < size; i++) {
	//	arr[i] = i + 1.1;
	//}
	////�ݺ����� �̿��ؼ� ���.
	//for (int i = 0; i < size; i++) {
	//	printf("%.1f\n", arr[i]);
	//}
	
	
	//������ �迭
	//char arr[] = {'L', 'E', 'E', 'Y', 'O', 'N', 'G', 'S', 'U' };
	//int size = sizeof(arr) / sizeof(char);
	//
	//printf("������: %d\n", size);

	//for (int i = 0; i < size; i++) {
	//	printf("%c", arr[i]);
	//}

	//�迭���� ��
	//c�� �����迭
	//a�� ���� �Ҵ�Ǵ� ������ ��Ÿ�ӽ�
	//int a = 5;
	//const int a = 5; //���: ������ �Ұ���
	//#define�� ���ǵ� ��ũ�� ���: �����ϵǱ� ���� ��ü
	
	//int arr[LEN], sum = 0;
	//int size = sizeof(arr) / sizeof(int);
	//
	////�Է� �޾Ƽ� �հ� ���ϱ�.
	//for (int i = 0; i < size; i++) {
	//	printf("[%d] ������? :", i + 1);
	//	scanf("%d", &arr[i]);
	//}
	////����ϱ�
	//for (int i = 0; i < size; i++) {
	//	printf("�迭: %d || �ּҰ�: %p\n", arr[i], &arr[i]);
	//}

	//for (int i = 0; i < size; i++) {
	//	sum += arr[i];
	//}
	//printf("�迭�� �հ�: %d\n", sum);
	
	//�ǽ�) �� �л��� ������ �Է� �޾� ��ȣ��� �迭�� �����ϰ� �� ��ȣ �������
	// ����ϴ� ���α׷� ����.
	//����) 1�� ����: 90 
	//      2�� ����: 88
	// 1���� 90�� 2���� 88��
	//�߰�) 1)�հ�� ��� ���
	//      2)���ϴ� �л���ȣ�� �Է��ϸ� �ش��л��� ������ ���

	//int score[3], sum = 0;
	//int size = sizeof(score) / sizeof(int);
	//int no;
	//char quit;

	////���� �Է�
	//for (int i = 0; i < size; i++) {
	//	printf("%d�� ������? :", i + 1);
	//	scanf("%d", &score[i]);
	//}
	//printf("------------------------------\n");
	//
	////�հ� �� ���
	//for (int i = 0; i < size; i++) {
	//	printf("%d�� ����: %d\n", i + 1, score[i]);
	//	sum += score[i];
	//}
	//printf("------------------------------\n");
	//printf("�հ�: %d\n", sum);
	//printf("���: %.2f\n", (double)sum/size);
	//printf("------------------------------\n");
	//
	////�˻�

	////while ���
	//while (1) {
	//	printf("�˻��� ��ȣ�� �Է��ϼ���\n");
	//	scanf("%d", &no); 
	//	getchar(); //����ó��
	//	//�߸��� ��ȣ
	//	if (no < 1 || no > size) {
	//		printf("���� ��ȣ�Դϴ�.");
	//		continue; //ó������ �ٽ� ���ư� �������
	//	}
	//	printf("������ %d\n", score[no - 1]);
	//	printf("------------------------------\n");
	//	printf("�����Ͻðڽ��ϱ�?(q)\n");
	//	scanf("%c", &quit);
	//	if (quit == 'q') break;
	//}

	////do while ���
	//do {
	//	printf("�˻��� ��ȣ�� �Է��ϼ���\n");
	//	scanf("%d", &no);
	//	getchar(); //����ó��
	//	//�߸��� ��ȣ
	//	if (no < 1 || no > size) {
	//		printf("���� ��ȣ�Դϴ�.");
	//		continue; //ó������ �ٽ� ���ư� �������
	//	}
	//	printf("������ %d\n", score[no - 1]);
	//	printf("------------------------------\n");
	//	printf("�����Ͻðڽ��ϱ�?(q)\n");
	//	scanf("%c", &quit);
	//} while (quit != 'q');

	//�Ǻ���ġ�� ���� ���ϱ�
	//0 1 1 2 3 4 8 13 .....
	//int fibo[20];
	//fibo[0] = 0; fibo[1] = 1;
	//int size = sizeof(fibo) / sizeof(int);
	////printf("%d", size);
	//
	//for (int i = 2; i < size; i++) {
	//	fibo[i] = fibo[i - 2] + fibo[i - 1];
	//}
	//for (int i = 0; i < size; i++) {
	//	printf("%d\n", fibo[i]);
	//}
	return 0;
}
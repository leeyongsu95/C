#define _CRT_SECURE_NO_WARNINGS //scanf �Լ��� ����ϱ� ���ؼ�
#include<stdio.h>

int main() {
	//���ǽ��� ���� �� ������ ���� ������ �� ���� ������ ����.
	//int a = 0;
	//
	//if (a > 0) {
	//	printf("���\n");
	//}else {
	//	if (a < 0) {
	//		printf("����\n");
	//	}
	//	else {
	//		printf("����� ������ �ƴմϴ�.\n");
	//	}
	//}

	//ǥ���� �����ϰ� ��ø if��

	//int a = 0;
	//
	//if (a > 0) 
	//	printf("���\n");
	//else if (a < 0) 
	//	printf("����\n");
	//else 
	//	printf("����� ������ �ƴմϴ�.\n");


	//�ǽ�) �� ������ �Է� �޾� ū ���� ���.(�� ���� �������� �ִ�.)

	//int a, b;
	//
	//printf("a : "); scanf("%d", &a);
	//printf("b : "); scanf("%d", &b);
	//
	//if (a > b)
	//	printf("a(%d)�� b ���� ũ��\n", a);
	//else if (b > a)
	//	printf("b(%d)�� a ���� ũ��\n", b);
	//else
	//	printf("�μ��� ����");


	//�ǽ�) �л��� ������ �Է� �޾� ������ ����ϴ� ���α׷��� �ۼ��� ���ÿ�. ��) : 85 B����
	// 90�̻� A, 80�̻� B, 70�̻� C, 60�̻� D, 60�̸� F

	//int score;
	//
	//printf("������ �Է��ϼ���.");
	//
	//scanf("%d", &score);

	//if (score <=0 || score > 100)
	//	printf("(%d) ���� �߸� �Է��ϼ̽��ϴ�.", score);
	//else if (score >= 90)
	//	printf("����(%d) : A", score);
	//else if (score >= 80)
	//	printf("����(%d) : B", score);
	//else if (score >= 70)
	//	printf("����(%d) : C", score);
	//else if (score >= 60)
	//	printf("����(%d) : D", score);
	//else
	//	printf("����(%d) : F", score);


	//�ǽ�) �л��� ��.��.�� ������ �Է� �޾� ������ ����� ����غ��ÿ�.\
	//��) 60�� �̸��� �Ѱ����̶� ������ ����
	//��) ���� ���� ����? : 85 90 78 �հ�� 253�� �����84.33��

	//int language, mathematics, english;

	//printf("���� ������? :"); scanf("%d", &language);
	//printf("���� ������? :"); scanf("%d", &mathematics);
	//printf("���� ������? :"); scanf("%d", &english);

	//int total = language + mathematics + english;

	//if (language < 60 || mathematics < 60 || english < 60)
	//	printf("����: %d��, ����: %d��, ����: %d�� �����Դϴ�.", language, mathematics, english);
	//else
	//	printf("�հ� : %d ��� = %.2f",total, (double)total / 3);



	//������ ���
	//int kor, eng, math;
	//printf("��/��/��? :");
	//scanf("%d %d %d", &kor, &eng, &math);
	//if (kor < 60 || eng < 60 || math < 60) {
	//	printf("����\n");

	//} else {
	//	int sum = kor + eng + math;
	//	double avg = sum / (double)3; // .3 ���� �ᵵ ��.
	//	printf("�հ�: %d, ���: %.2f", sum, avg);
	//}



	//�ǽ�) ���� ���ϱ�.

	//int year;

	//printf("�⵵�� �Է��ϼ���."); scanf("%d", &year);

	//if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
	//	printf("%d�� ����\n", year);
	//}else {
	//	printf("%d�� ������ �ƴմϴ�\n", year);
	//}

	//�ǽ�) ���� �޴��� ���� ������ �����ϸ� ���� �� �ڳʸ� �˷��ִ� ���α׷� ����.
	//��) 1. �����, 2. «��, 3. ������, 4. �����, 5. ����, 6. ���İ�Ƽ 
	//�޴��� �����ϼ���: ���� �ϸ� �����ڳʷ� ������. ps) 1, 2 �߽� 3, 4 �ѽ�, 5, 6 ���
    
	//int menu;
	//
	//printf("--------------------------------------------------------------\n");
	//printf("1. �����, 2. «��, 3. ������, 4. �����, 5. ����, 6. ���İ�Ƽ\n");
	//printf("--------------------------------------------------------------\n");

	//printf("�޴��� �����ϼ���. : "); scanf("%d", &menu);

	//if (menu == 1 || menu == 2) {
	//	printf("%d���� �߽����� ������.\n", menu);
	//}else if (menu == 3 || menu == 4) {
	//	printf("%d���� �ѽ����� ������.\n", menu);
	//}
	//else if (menu == 5 || menu == 6) {
	//	printf("%d���� �ѽ����� ������.\n", menu);
	//}else{
	//	printf("%d �߸��� ��ȣ ���� �ٽ� �Է����ּ���.", menu);
	//}
	//return 0;
}
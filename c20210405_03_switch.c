//#define _CRT_SECURE_NO_WARNINGS //scanf �Լ��� ����ϱ� ���ؼ�
//#include<stdio.h>
//
//int main() {
//	//���� ���ǹ� : switch ~ case
//	int a = 0;
//
//	switch (a) {
//	case 0:
//		printf("zero\n");
//		break;			//�´°� ������ ��������
//	case 1:
//		printf("one\n");
//		break;
//	case 2:
//		printf("two\n");
//		break;
//	default:
//		printf("�߸��� ����\n");
//	}
//
//	//���� ������ �� ���
//	int mon = 3;
//	
//	switch (mon){
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 8:
//	case 10:
//	case 12:
//		printf("31��\n");
//		break;
//	case 4:
//	case 6:
//	case 9:
//	case 11:
//		printf("30��\n");
//		break;
//	case 2:
//		printf("28��\n");
//		break;
//	default:
//		printf("�߸��� ��\n");
//	}
//	
//	
//	
//	//�ǽ�) ���� �޴��� ���� ������ �����ϸ� ���� �� �ڳʸ� �˷��ִ� ���α׷� ����.
//	//��) 1. �����, 2. «��, 3. ������, 4. �����, 5. ����, 6. ���İ�Ƽ 
//	//�޴��� �����ϼ���: ���� �ϸ� �����ڳʷ� ������. ps) 1, 2 �߽� 3, 4 �ѽ�, 5, 6 ���
//
//	int menu;
//	
//	printf("--------------------------------------------------------------\n");
//	printf("1. �����, 2. «��, 3. ������, 4. �����, 5. ����, 6. ���İ�Ƽ\n");
//	printf("--------------------------------------------------------------\n");
//
//	printf("�޴��� �����ϼ���. : "); scanf("%d", &menu);
//
//	switch (menu){
//	case 1:
//	case 2:
//		printf("%d ���� �߽� �ڳʷ� ������\n", menu);
//		break;
//	case 3:
//	case 4:
//		printf("%d ���� �ѽ� �ڳʷ� ������\n", menu);
//		break;
//	case 5:
//	case 6:
//		printf("%d ���� ��� �ڳʷ� ������\n", menu);
//		break;
//	default:
//		printf("%d ��ȣ�� �߸� �����ϼ̽��ϴ�. �ٽ� �����ϼ���.\n", menu);
//		break;
//	}
//
//	return 0;
//}
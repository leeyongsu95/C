#include<stdio.h>

int main() {
	//������(+, -, *, /, %)
	//������ ���� => ����
	//�Ǽ��� ���� => �Ǽ�

	//int a = 20, b = 3;
	//printf("%d + %d = %d\n", a, b, a + b);
	//printf("%d - %d = %d\n", a, b, a - b);
	//printf("%d * %d = %d\n", a, b, a * b);
	//printf("%d / %d = %.2f\n", a, b, (double)a / b);
	//printf("%d %% %d = %d\n", a, b, a % b);

	//int a = 50, b = 3;

	//printf("��: %d\n", a / b);
	//printf("������: %d\n", a % b);
	//printf("�Ǽ���: %f\n", (double)a / b);

	//// ++, --
	////�տ� ���̸� ����, �ڿ� ���̸� ����
	//int a = 10;
	//
	////a = a + 1;
	////a += 1;

	//a++;
	//printf("%d\n",a);

	//a--;
	//printf("%d\n", a);

	//++a;
	//printf("%d\n", a);

	//--a;
	//printf("%d\n", a);

	//int a = 10;
	//printf("%d\n", a++);  //����� �ϰ� �����ض�.
	//printf("%d\n", a);    
	//printf("%d\n", ++a);  //���� �ϰ� ����ض�.

	//int a = 10;
	//a--;
	//printf("%d\n", --a);  
	//printf("%d\n", a++);    
	//printf("%d\n", a--);
	//printf("%d\n", a);

	////�ǽ�)
	//int a = 10;    
	//int b = --a;   
	//int c = b++;     
	//b = ++a;

	//printf("%d %d %d\n", a, b, c);

	////���� ������
	//int a = 10, b = 20;
	//printf("%d\n", a < b); // a �� b ���� �۴� �� = 1, true
	//printf("%d\n", a > b); // b �� a ���� �۴� ���� = 0, false
	//printf("%d\n", a == b); // a �� b �� ���� ���� = 0, false
	//printf("%d\n", a != b); // a �� b �� �ٸ��� �� = 1, true

	////�� ������: and = &&, or = ||, not = !
	//int a = 10, b = 20;
	//printf("%d\n", a > 0 && b > 0);
	//printf("%d\n", a > 0 && b < 0);
	//printf("%d\n", a > 0 || b < 0);
	//printf("%d\n", !(a > 0));

	////��Ʈ ������: &, |, ~, ^

	//printf("%d\n", 4 & 3);
	//printf("%d\n", 4 | 3);

	////����Ʈ ������
	//printf("%d\n", 4 >> 2); //���������� 2 ��Ʈ �б�
	//printf("%d\n", 4 << 1); //�������� 1 ��Ʈ �б�

	////���� ������
	//int a = 10;
	//a > 0 ?printf("���") : printf("����");

	////�ΰ��� �� �� ū ���� ���.
	//int a = 10, b = 20;
	//a > b ? printf("%d\n", a) : printf("%d\n",b);

	//int c = a > b ? a : b;
	//printf("%d\n", c);

	////������ �� �� ū ���� ��� 
	////�� ���)
	//int a = 20, b = 10, c = 30;
	//int d = a > b ? a : b;
	//d > c ? printf("%d\n", d) : printf("���� ū ����: %d\n", c);

	////���� Ǭ ���
	//int a = 20, b = 10, c = 30;
	//int max = a > b ? a : b;
	//max = max > c ? max : c;
	//printf("%d\n", max);
	//
	////�ٸ� ���
	//int a = 20, b = 10, c = 30;
	//int max = a > b ? (a > c ? a : c) : (b > c ? b : c);
	//printf("%d\n", max);
	//
	////�ǽ�) Ȧ��, ¦�� ����
	//int a = 9;
	//a % 2 == 0 ? printf("¦��: %d\n", a) : printf("Ȧ��: %d\n", a);
    
	//�ٸ� ���
	//int a = 9;
	////������ ������ �̿��ؼ� ���
	//char* p = a % 2 == 0 ? "¦��" : "Ȧ��";
	//printf("%d: %s\n", a, p);

}

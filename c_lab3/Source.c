#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_DEPRECATE
#define D 2.54
#define I 2.32166
#define S 2.7076

void t1()
{
	int num1;
	float num2;
	puts("������� 2 ����� �����");
	scanf_s("%d\n%g", &num1, &num2);
	printf("������� ����� %d � %g\n", num1, num2);
	printf("�����: %g\n��������: %g\n������������: %g\n", num1 + num2, num1 - num2, num1 * num2);
	int num3 = num2;
	printf("�������: %5.3f\n������� �� �������: %d\n", num2 / num1, num3 % num1);
}

void t2()
{
	int dym;
	float res;
	puts("������� ���������� ������");
	scanf_s("%d", &dym);
	res = D * dym;
	printf("%d ���������� ������ - ��� %.2f ��\n", dym, res);
	res = I * dym;
	printf("%d ��������� ������ - ��� %.2f ��\n", dym, res);
	res = S * dym;
	printf("%d �������������� ������ - ��� %.2f ��\n", dym, res);

}

void main()
{
	setlocale(LC_ALL, "RUS");

	//1 �������
	t1();

	//2 �������
	t2();

}
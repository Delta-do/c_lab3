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
	puts("Введите 2 целых числа");
	scanf_s("%d\n%g", &num1, &num2);
	printf("Введены числа %d и %g\n", num1, num2);
	printf("Сумма: %g\nРазность: %g\nПроизведение: %g\n", num1 + num2, num1 - num2, num1 * num2);
	int num3 = num2;
	printf("Частное: %5.3f\nОстаток от деления: %d\n", num2 / num1, num3 % num1);
}

void t2()
{
	int dym;
	float res;
	puts("Введите количество дюймов");
	scanf_s("%d", &dym);
	res = D * dym;
	printf("%d английских дюймов - это %.2f см\n", dym, res);
	res = I * dym;
	printf("%d испанских дюймов - это %.2f см\n", dym, res);
	res = S * dym;
	printf("%d старолитовских дюймов - это %.2f см\n", dym, res);

}

void main()
{
	setlocale(LC_ALL, "RUS");

	//1 задание
	t1();

	//2 задание
	t2();

}
#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_DEPRECATE
#define D 2.54
#define I 2.32166
#define S 2.7076
#define G 6.672e-11

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

void t3()
{
	float a, b;
	puts("Введите два вещественных числа");
	scanf_s("%f\n%f", &a, &b);
	puts("|    a * b    |    a + b    |    a - b    |");
	puts("-------------------------------------------");
	printf("| %4.1f * %4.1f | %4.1f + %4.1f | %4.1f - %4.1f |\n", a, b, a, b, a, b);
	puts("-------------------------------------------");
	printf("| %11.1f | %11.1f | %11.1f |\n", a * b, a + b, a - b);
}

void th8()
{
	int s = 0;
	puts("Введите время в секундах");
	scanf_s("%d", &s);
	printf("%d часов %d минут", s / 3600, (s - s / 3600 * 3600) / 60);
}

void th11()
{
	float m1 = 0, m2 = 0, r = 0;
	puts("Введите массы двух тел и расстояние между ними");
	scanf_s("%f\n%f\n%f", &m1, &m2, &r);
	printf("Сила притяжения %e Н", G * m1 * m2 / (r * r));
}

void main()
{
	setlocale(LC_ALL, "RUS");

	//1 задание
	//t1();

	//2 задание
	//t2();

	//3 задание 
	//t3();

	//taskhome
	//th8();

	th11();
}
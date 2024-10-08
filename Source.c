#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

#include <locale.h>
void task0();
void task1();
void task2();

void main() {
	setlocale(LC_CTYPE, "RUS");
	//task0();
	//task1();
	task2();
}


void task0()
{
	system("chcp 1251");
	for (int start = 1; start <= 50; start++) putchar('*'), putchar('!');
	putchar('+');
	putchar('!');
	for (int start = 1; start <= 50; start++) putchar('+'), putchar('!');
}
void task1() {
	int n = 1, i, m;
	puts("Введите значение m: ");
	scanf("%d", &m);
	for (int i = 0; i <= m; i++)
	{
		printf("Двойка в степени %d = %d\n", i, n);
		n *= 2;
	}
	double o = 1024;
	printf("Результат %.1lfК", n / o);
}
void task2() {
	double y, x;
	y = fabs(log10(x)) - pow(x - 2, 2);
	puts("------------");
	for (double x = 2; x < 4.1; x+0.1); {
		printf("| %lf | %lf |\n", x, y);
	}
}
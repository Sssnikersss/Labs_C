//Расчёт  английского дюйма;
//Расчёт  испанского дюйма;
//Расчёт  старолитовского дюйма;

#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<locale.h>
#define      D       2.54
#define      EspD    2.32166
#define      StarD   2.7076
void main()
{
	setlocale(LC_ALL, "RUS");
	int dym;
	float result1, result2, result3;
	printf("Введите число\n\n");
	scanf("%d", &dym);
	result1 = D * dym;
	result2 = EspD * dym;
	result3 = StarD * dym;
	printf("\n%d английских дюймов – это %.2f см\n", dym, result1);
	printf("%d испанских дюймов – это %.2f см\n", dym, result2);
	printf("%d старолитовских дюймов – это %.2f см\n", dym, result3);
}

#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<locale.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	int num, bum;
	printf("Введите число\n");
	scanf("%d", &num);
	printf("Введено число %d\n", num);
	printf("\nВведите второе число\n");
	scanf("%d", &bum);
	printf("Введено число %d\n", bum);
	printf("\nСумма %d и %d = %d\n", num, bum, num + bum);
	printf("\nРазность %d и %d = %d\n", num, bum, num - bum);
	printf("\nПроизведение %d и %d = %d\n", num, bum, num * bum);
	printf("\nЧастное %d и %d = %d\n", num, bum, num / bum);
	printf("\nОстаток от деления %d на %d равен %d\n", bum, num, bum % num);
	system("pause");
}
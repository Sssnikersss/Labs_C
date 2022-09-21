//Расчёт морской мили;
//Расчёт сухопутной мили;
//Расчёт римcкой мили;
//Расчёт старорусской мили;
//Расчёт географической мили;

#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<locale.h>
#define      MM        1.852    //км
#define      SM        1.609    //км
#define      RM        1475     //км
#define      StarM     7.468    //км
#define      GeogM     7412.6   //км
void main()
{
	setlocale(LC_ALL, "RUS");
	int dym;
	float result1, result2, result3, result4, result5;
	printf("Введите число\n\n");
	scanf("%d", &dym);
	result1 = MM * dym;
	result2 = SM * dym;
	result3 = RM * dym;
	result4 = StarM * dym;
	result5 = GeogM * dym;
	printf("\n%d морских(ая) миль(я) – это %.2f км\n", dym, result1);
	printf("\n%d сухопутных(ая) миль(я) – это %.2f км\n", dym, result2);
	printf("\n%d римcких(ая) миль(я) – это %.2f км\n", dym, result3);
	printf("\n%d старорусских(ая) миль(я) – это %.2f км\n", dym, result4);
	printf("\n%d географических(ая) миль(я) – это %.2f км\n", dym, result5);
}

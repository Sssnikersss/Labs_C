//Вариант 11

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
	setlocale(LC_ALL, "RUS");
	int a;

	printf("Введите число от 1 до 12: ");
	scanf("%d", &a);

	switch (a) {
	  case 1: printf("Введённое число соответствует римскому - I\n"); break;
	  case 2: printf("Введённое число соответствует римскому - II\n"); break;
	  case 3: printf("Введённое число соответствует римскому - III\n"); break;
	  case 4: printf("Введённое число соответствует римскому - IV\n"); break;
	  case 5: printf("Введённое число соответствует римскому - V\n"); break;
	  case 6: printf("Введённое число соответствует римскому - VI\n"); break;
	  case 7: printf("Введённое число соответствует римскому - VII\n"); break;
	  case 8: printf("Введённое число соответствует римскому - XIII\n"); break;
	  case 9: printf("Введённое число соответствует римскому - IX\n"); break;
	  case 10: printf("Введённое число соответствует римскому - X\n"); break;
	  case 11: printf("Введённое число соответствует римскому - XI\n"); break;
	  case 12: printf("Введённое число соответствует римскому - XII\n"); break;
	default: printf("Ошибка. Повторите попытку.\n");
	}
return 0;
}

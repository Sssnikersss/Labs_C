//Вариант 2; n=3; k=4; m=2


#include<stdio.h>
#include<locale.h>


void main()
{
	setlocale(LC_ALL, "RUS");
	int n = 3;

	printf("Дано:\n \t  3 \n\t 333 \n\t___________\n Ответ: \n\t%+08.2f", n / 333.);
}

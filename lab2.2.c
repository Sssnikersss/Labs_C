#include<stdio.h>
#include<locale.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	int N = 16, K = 25;
	printf("Сейчас %d часов %d минут 00 секунд\n",N,K);
	printf("Идёт %d минута суток\n",N*60+K);
	printf("До полуночи осталось %d часов и %d минут\n",24-N-1,60-K);
	printf("С 8:00 прошло %d секунд\n", (N-8)*3600+K*60);
	printf("Текуий час = %f суток и текуая минута = %f часа\n",N/24.,K/60.);
}

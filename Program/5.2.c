#include <stdio.h>
#define ADJUST 7.31

const double SCALE = 0.333;
double shoe = 3.0;
double foot = SCALE * shoe + ADJUST; 

int main() 
{
	printf("Shoe size (men's)  foot length\n");
	while (shoe < 18.5)/*Ñ­»·¿ªÊ¼*/
	{
		printf("%10.1f %15.2f inches\n", shoe, foot);
		shoe = shoe + 1.0;
	}
	printf("If the shoe fits ,wear it.\n");
	
	return 0;
}

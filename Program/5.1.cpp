#include <stdio.h>
#define ADJUST 7.31 //字符常量

const double SCALE = 0.333;//const变量
double shoe = 3.0;
double foot = SCALE * shoe + ADJUST;

int main()
{
	printf("Shoe size (men's)  foot length\n");
	printf("%10.1f %15.2f inches\n", shoe, foot);
	
	return 0;
}

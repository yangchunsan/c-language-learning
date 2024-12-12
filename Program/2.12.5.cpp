//需要定义两个函数，br（）和ic（）
#include <stdio.h>

void br()//定义第一个函数
{
	printf("Brazil,Russia");
}

void ic()//定义第二个函数
{
	printf("India,China");
}

int main()
{
	br();
	printf(",");
	ic();
	printf("\n");
	ic();
	printf(",");
	printf("\n");
	br();
	
	return 0;
	
}

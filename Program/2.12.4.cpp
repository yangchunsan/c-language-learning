//要用到两个自定义函数
#include <stdio.h>

void jolly()/*定义第一个函数jolly*/
{
	printf("For he's a jolly good fellow!\n");
}

void deny()/*定义第二个函数deny*/
{
	printf("Which nobody can deny!\n");
}

int main()
{
	jolly();
	jolly();
	jolly();
	deny();
	
	return 0;
}

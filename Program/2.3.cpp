//two_func.c -- 一个文件中包括两个函数
#include <stdio.h>

void a()//函数定义开始
	{
		printf("You rang,sir?\n");
	}

int main()
{
	printf("I will summon the butler function.\n");
	a();
	printf("Yes.Bring me some tea and writeable DVDs.\n");
	
	return 0;
}

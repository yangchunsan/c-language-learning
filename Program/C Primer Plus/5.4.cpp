/*����һ����ʮ��ƽ��*/
#include <stdio.h>

int num = 1;

int main()	
{
	while (num < 21)
	{
		printf("%4d %6d\n", num, num * num);
		num = num + 1;
	}
	
	return 0; 
}

//��Ҫ��������������br������ic����
#include <stdio.h>

void br()//�����һ������
{
	printf("Brazil,Russia");
}

void ic()//����ڶ�������
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

#include <stdio.h>

float about = 32000.0;
double abet = 2.14e9;
long double dip = 5.32e-5;

int main()
{
	printf("%f can be written %e\n", about, about);/*������ת��Ϊ��ѧ��������*/
    //����Ҫ�������֧��C99�������е��������
	printf("And it's %a in hexadecimal, powers of 2 notation\n", about);/*%a��ʾʮ�����ƣ�a���e��A���E*/
	printf("%f can be written %e\n", abet, abet);/*�����ǿ�ѧ�������ø������������ת�ؿ�ѧ������*/
	printf("%Lf can be written %Le\n", dip, dip);/*L����long double�����ȸ���*/
	
	return 0;
}

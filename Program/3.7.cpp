#include <stdio.h>

float about = 32000.0;
double abet = 2.14e9;
long double dip = 5.32e-5;

int main()
{
	printf("%f can be written %e\n", about, about);/*浮点型转换为科学计数法型*/
    //下面要求编译器支持C99或者其中的相关特性
	printf("And it's %a in hexadecimal, powers of 2 notation\n", about);/*%a表示十六进制，a替代e，A替代E*/
	printf("%f can be written %e\n", abet, abet);/*本身是科学计数法用浮点型输出，再转回科学计数法*/
	printf("%Lf can be written %Le\n", dip, dip);/*L代表long double，精度更高*/
	
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void)
{
	double a, b, c, derlt, x1, x2;
	char  ch;
	do{
	printf("������һԪ���η��̵�ϵ��\n");
	printf("a=\n");
	scanf("%lf", &a);
	printf("b=\n");
	scanf("%lf", &b);
	printf("c=\n");
	scanf("%lf", &c);
	derlt = b * b - 4 * a * c;
	if (derlt < 0)
		printf("�÷�����ʵ����\n");
	else if (derlt == 0)
	{
		x1 = (-b + sqrt(derlt)) / 2 * a;
		x2 = (-b - sqrt(derlt)) / 2 * a;
		printf("�÷�����������ȵ�ʵ������x1=x2=%lf\n", x1);
	}
	else {
		x1 = (-b + sqrt(derlt)) / 2 * a;
		x2 = (-b - sqrt(derlt)) / 2 * a;
		printf("�÷������������ȵ�ʵ������x1=%lf   x2=%lf\n", x1,x2);

	}		printf("�������Ƿ���Ҫ������⣨Y/N)\n");
		    scanf(" %c" , &ch);
	} while ('Y'==ch||'y'==ch);
	return 0;
}
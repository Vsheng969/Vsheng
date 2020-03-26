#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void)
{
	double a, b, c, derlt, x1, x2;
	char  ch;
	do{
	printf("请输入一元二次方程的系数\n");
	printf("a=\n");
	scanf("%lf", &a);
	printf("b=\n");
	scanf("%lf", &b);
	printf("c=\n");
	scanf("%lf", &c);
	derlt = b * b - 4 * a * c;
	if (derlt < 0)
		printf("该方程无实数根\n");
	else if (derlt == 0)
	{
		x1 = (-b + sqrt(derlt)) / 2 * a;
		x2 = (-b - sqrt(derlt)) / 2 * a;
		printf("该方程有两个相等的实数根，x1=x2=%lf\n", x1);
	}
	else {
		x1 = (-b + sqrt(derlt)) / 2 * a;
		x2 = (-b - sqrt(derlt)) / 2 * a;
		printf("该方程有两个不等的实数根，x1=%lf   x2=%lf\n", x1,x2);

	}		printf("请输入是否需要继续求解（Y/N)\n");
		    scanf(" %c" , &ch);
	} while ('Y'==ch||'y'==ch);
	return 0;
}
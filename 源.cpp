#include <stdio.h>
#include <math.h>
double jdz(double i) {
	
	i < 0 ? i = -i : i = i; return i;
}

int main()
{
	double  x;
	double  y;
	double  high;
	double  juli;
	puts("ÇëÊäÈë×ø±ê");
	scanf("%lf %lf", & x, & y);
	printf("%lf\n", jdz(x));
    juli =  (jdz(x) - 2) * (jdz(x) - 2)+ (jdz(y) - 2) * (jdz(y) - 2);
	printf("%lf", juli);
		if ((jdz(x) - 2) * (jdz(x) - 2) + (jdz(y) - 2) * (jdz(y) - 2) < 1)
	{
		high = (1-sqrt((jdz(x) - 2) * (jdz(x) - 2) + (jdz(y) - 2) * (jdz(y) - 2))) * 10;
		printf("high=%f", high);	
	}


	return 0;
}
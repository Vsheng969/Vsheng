#include <stdio.h>/*int max(int i, int j)
{
	if (j < i)
		return i;
	else
		return j;
}
int main(void)
{
	int a; int b;

	scanf_s ("%d %d", &a, &b);
printf("max=%d",	max(a, b));
return 0;
}*/
/*
int zhishu(int val);
int main(void)		
{
	do {
		int I;
		scanf_s("%d", &I);
		if (zhishu(I) == 1)
			puts("YES!");
		else
			puts("NO!");
	} while (1);
	return 0;
}
int zhishu(int val)
{
	int a;
	for (a = 2; a < val; ++a)
	{
		if (val % a == 0)
			break;
	}
		if (a == val)
			return 1;
		else
			return 0;
}*/
int main(void) {
	int* p;
	int* q;
	int i=5;
	p = &i; p = q;
	printf("%x",q);
}
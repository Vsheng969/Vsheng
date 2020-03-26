#include <stdio.h>
int main(void)
{
	int a, b, c
		;
	for (a = 0; a <= 9; a++) 
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++) {
				if (a != b && c != a && c != b)				printf("%d%d%d  ", a, b,
					c);
			}

		;}
	}


	system("pause");
	
}
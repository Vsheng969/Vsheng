
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    float number=1;
	float * i=&number;
    char string[32];
    itoa(number,string,2);
    printf("ʮ��������%f������������%s\n",number,string); printf("      %x",*i);
    return 0;
}
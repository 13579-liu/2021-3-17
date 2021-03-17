
#include<stdio.h>
//例：给出一个整数
//  4  个字节
//0x 00 00 00 01
int check_sys()
{
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
		return 1;//小端
	else
		return 0;//大端
}
int main()
{
	if (check_sys() == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}
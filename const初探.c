//ָ���޸���const����(��)
#include <stdio.h>
int main(void) {
	 char* ar= 0x007069550;
	 //printf("*pt1++=%d\n",*pt1++);++���ȼ�����
	/*for (size_t i = 0; i < 3; i++)
	{
		printf("%d\n", ar[i]);
	}*/	
	while(1) putchar(*ar++);
	getchar();
}
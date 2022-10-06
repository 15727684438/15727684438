//指针修改了const数组(雾)
#include <stdio.h>
int main(void) {
	 char* ar= "abc";
	 //printf("*pt1++=%d\n",*pt1++);++优先级更高
	/*for (size_t i = 0; i < 3; i++)
	{
		printf("%d\n", ar[i]);
	}*/	
	 putchar(*ar++);
}
#include <stdio.h>
int main(void) {
	char ur_name[20];
	FILE* fp;
	printf("请输入要打开的文件名:");
	scanf("%s\n",ur_name);
	ur_name[19] = '\0';
	fp = fopen(ur_name, "r");
	long pos;
	/*for  (;printf("\n请输入位置："), pos = (long)getchar() != EOF;)
	{
		fseek(fp, pos, SEEK_SET);
		for (char ch = 0; ch = getc(fp)!='\n'; fseek(fp, 1, 1))
		{
			putchar(ch);
		}
		fseek(fp, 0l , SEEK_SET);
	}*/
	getchar();
	return 0;
}
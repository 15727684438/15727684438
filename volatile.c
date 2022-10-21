#include <stdio.h>	
int main(void) {
	FILE* fp = fopen("helloworld.txt", "w+");
	fclose(fp);
	
	return 0;
}